int lPin=13;
String comdata = "";//字符串函数
String a="hello"
void setup() {
  Serial.begin(9600);//打开串口波特率9600
  //pinMode(lPin,OUTPUT);
}
 
void loop() {
  if (Serial.available() > 0)//判读是否串口有数据
  {
    String comdata = "";//缓存清零
    while (Serial.available() > 0)//循环串口是否有数据
    {
      comdata += char(Serial.read());
      /*if(comdata == "a"||comdata == "A")//叠加数据到comdata
      {
        digitalWrite(lPin,HIGH);
        delay(150);
        digitalWrite(lPin,LOW);
        delay(100);    
      }
      delay(200);
      if(comdata == "b"||comdata == "B")
      {
        digitalWrite(lPin,HIGH);
        delay(200);
        digitalWrite(lPin,LOW);
        delay(150);
      }
      delay(200);
      if(comdata == "c"||comdata == "C")
      {
        digitalWrite(lPin,HIGH);
        delay(250);
        digitalWrite(lPin,LOW);
        delay(200);
      }
      delay(200);
      if(comdata == "d"||comdata == "D")//叠加数据到comdata
      {
        digitalWrite(lPin,HIGH);
        delay(300);
        digitalWrite(lPin,LOW);
        delay(250);
      }
      delay(200);
      if(comdata == "e" ||comdata == "E")
      {
        digitalWrite(lPin,HIGH);
        delay(350);
        digitalWrite(lPin,LOW);
        delay(300);
      }
      delay(200);
      if(comdata == "f" ||comdata == "F")
      {
        digitalWrite(lPin,HIGH);
        delay(400);
        digitalWrite(lPin,LOW);
        delay(350);
      }
      delay(200);
      if(comdata == "g" ||comdata == "G")
      {
        digitalWrite(lPin,HIGH);
        delay(450);
        digitalWrite(lPin,LOW);
        delay(3400);
      }
      delay(200);
      if(comdata == "h" ||comdata == "H")
      {
        digitalWrite(lPin,HIGH);
        delay(450);
        digitalWrite(lPin,LOW);
        delay(400);
      }
      delay(200);
      if(comdata == "i" ||comdata == "I")
      {
        digitalWrite(lPin,HIGH);
        delay(450);
        digitalWrite(lPin,LOW);
        delay(400);
      }
      delay(200);
      if(comdata == "j" ||comdata == "J")
      {
        digitalWrite(lPin,HIGH);
        delay(500);
        digitalWrite(lPin,LOW);
        delay(450);
      }
      delay(200);
      if(comdata == "k" ||comdata == "K")
      {
        digitalWrite(lPin,HIGH);
        delay(550);
        digitalWrite(lPin,LOW);
        delay(500);
      }*/
      delay(200);
    }
    if (comdata.length() > 0)//如果comdata有数据
    {
      Serial.println(comdata);//打印comdata数据
      delay(100);
    }
  }
}
