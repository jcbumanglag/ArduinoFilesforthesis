uint8_t buf[8] = { 0 };
#define piezo1 A0
#define piezo2 A1
#define piezo3 A2
#define piezo4 A3

void setup() {
pinMode(piezo1,INPUT);
pinMode(piezo2,INPUT);
pinMode(piezo3,INPUT);
pinMode(piezo4,INPUT);
Serial.begin(9600);
}

void loop() {

int a0 = analogRead(piezo1);
int a1 = analogRead(piezo2);
int a2 = analogRead(piezo3);
int a3 = analogRead(piezo4);
 
  if(a0  > 4)
  {
  buf[2] = 29;  
   Serial.write(buf, 8); 
   releaseKey();
   //Serial.println("Z");
   delay(200);
  }
    if(a1  > 4)
  {
  buf[2] = 27;  
  Serial.write(buf, 8); 
   releaseKey();
   //Serial.println("X");
   delay(200);
  }
    if(a2  > 4)
  {
  buf[2] = 6;  
   Serial.write(buf, 8); 
   releaseKey();
   //Serial.println("C");
   delay(200);
  }
    if(a3 > 4)
  {
  buf[2] = 25;  
   Serial.write(buf, 8); 
   releaseKey();
   //Serial.println("V");
   delay(200);
  }
}
void releaseKey() 
{
  buf[0] = 0;
  buf[2] = 0;
  Serial.write(buf, 8); // Send Release key  
}
