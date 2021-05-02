#define led1 2
#define led2 3
#define led3 3
#define led4 4
#define led5 5
#define led6 6
#define led7 7
#define led8 8
#define led9 9
#define led10 10
#define led11 11
#define led12 12
#define led13 13
#define led14 A0
#define led15 A1
#define led16 A2


String command="";

enum hitoutputindicator 
{ hit1, hit2, hit3, hit4,
hit5,  hit6, hit7, hit8,
miss1, miss2, miss3, miss4,
miss5,  miss6, miss7, miss8,
ledoff };

void setup()
{
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(led7,OUTPUT);
  pinMode(led8,OUTPUT);
  pinMode(led9,OUTPUT);
  pinMode(led10,OUTPUT);
  pinMode(led11,OUTPUT);
  pinMode(led12,OUTPUT);
  pinMode(led13,OUTPUT);
  pinMode(led14,OUTPUT);
  pinMode(led15,OUTPUT);
  pinMode(led16,OUTPUT);
  Serial.begin(9600);
  Serial.setTimeout(10);
}

void loop()
{
if(Serial.available())
{
   command = Serial.readString();
   hitoutput(sethitoutput(command));
}
delay(100);
Serial.flush();
}


hitoutputindicator sethitoutput(String inpt)
{
  if(inpt.startsWith("hit1"))
  {
    return hit1;
  }
  else if(inpt.startsWith("hit2"))
  {
    return hit2;
  }
  else if(inpt.startsWith("hit3"))
  {
    return hit3;
  }
  else if(inpt.startsWith("hit4"))
  {
    return hit4;
  }
  else if(inpt.startsWith("hit5"))
  {
    return hit5;
  }
  else if(inpt.startsWith("hit6"))
  {
    return hit6;
  }
  else if(inpt.startsWith("hit7"))
  {
    return hit7;
  }
  else if(inpt.startsWith("hit8"))
  {
    return hit8;
  }
  else if(inpt.startsWith("miss1"))
  {
    return miss1;
  }
  else if(inpt.startsWith("miss2"))
  {
    return miss2;
  }
  else if(inpt.startsWith("miss3"))
  {
    return miss3;
  }
  else if(inpt.startsWith("miss4"))
  {
    return miss4;
  }
  else if(inpt.startsWith("miss5"))
  {
    return miss5;
  }
  else if(inpt.startsWith("miss6"))
  {
    return miss6;
  }
  else if(inpt.startsWith("miss7"))
  {
    return miss7;
  }
  else if(inpt.startsWith("miss8"))
  {
    return miss8;
  }
  else
  {
   return ledoff; 
  }
}

void hitoutput(hitoutputindicator inpthitoutput)
{
  switch(inpthitoutput)
  {
    case hit1:
    {
     Serial.println("Works");
     digitalWrite(led1,HIGH);
     digitalWrite(led9,LOW);
     break; 
    }
     case hit2:
    {
     Serial.println("Works");
     digitalWrite(led2,HIGH);
     digitalWrite(led10,LOW);
     break; 
    }
     case hit3:
    {
     Serial.println("Works");
     digitalWrite(led3,HIGH);
     digitalWrite(led11,LOW);
     break; 
    }
     case hit4:
    {
     Serial.println("Works");
     digitalWrite(led4,HIGH);
     digitalWrite(led12,LOW);
     break; 
    }
     case hit5:
    {
     Serial.println("Works");
      digitalWrite(led5,HIGH);
      digitalWrite(led13,LOW);
     break; 
    }
     case hit6:
    {
     Serial.println("Works");
      digitalWrite(led6,HIGH);
      digitalWrite(led14,LOW);
     break; 
    }
     case hit7:
    {
     Serial.println("Works");
      digitalWrite(led7,HIGH);
      digitalWrite(led15,LOW);
     break; 
    }
     case hit8:
    {
     Serial.println("Works"); 
     digitalWrite(led8,HIGH);
     digitalWrite(led16,LOW);
     break; 
    }
     case miss1:
    {
     Serial.println("Works");
     digitalWrite(led9,HIGH);
     digitalWrite(led1,LOW);
     break; 
    }
     case miss2:
    {
     Serial.println("Works");
     digitalWrite(led10,HIGH);
     digitalWrite(led2,LOW);
     break; 
    }
     case miss3:
    {
     Serial.println("Works");
     digitalWrite(led11,HIGH);
     digitalWrite(led3,LOW);
     break; 
    }
     case miss4:
    {
     Serial.println("Works");
     digitalWrite(led12,HIGH);
     digitalWrite(led4,LOW);
     break; 
    }
     case miss5:
    {
     Serial.println("Works");
     digitalWrite(led13,HIGH);
     digitalWrite(led5,LOW);
     break; 
    }
     case miss6:
    {
     Serial.println("Works");
     digitalWrite(led14,HIGH);
     digitalWrite(led6,LOW);
     break; 
    }
     case miss7:
    {
     Serial.println("Works");
     digitalWrite(led15,HIGH);
     digitalWrite(led7,LOW);
     break; 
    }
     case miss8:
    {
     Serial.println("Works");
     digitalWrite(led16,HIGH);
     digitalWrite(led8,LOW);
     break; 
    }
    default:
    {
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led4,LOW);
      digitalWrite(led5,LOW);
      digitalWrite(led6,LOW);
      digitalWrite(led7,LOW);
      digitalWrite(led8,LOW);
      digitalWrite(led9,LOW);
      digitalWrite(led10,LOW);
      digitalWrite(led11,LOW);
      digitalWrite(led12,LOW);
      digitalWrite(led13,LOW);
      digitalWrite(led14,LOW);
      digitalWrite(led15,LOW);
      digitalWrite(led16,LOW);
    Serial.println("ledoff");
    break;  
    }
  }
}
