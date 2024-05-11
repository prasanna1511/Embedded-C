String voice;
int led1=2;
void allon(){digitalWrite(led1,1);}
void alloff(){digitalWrite(led1,0);}
void setup(){
  Serial.begin(9600);
  pinMode(led1,OUTPUT);
}

void loop(){
  while(Serial.available())
  {
    delay(10);
    char c = Serial.read();
    if(c=='#')
    {
      break;
    }
    voice += c;
    Serial.print(voice);
  }
  if(voice.length()>0)
  {
    Serial.println(voice);
    if(voice == "*all on"){allon();}
    else if(voice == "*all off"){alloff();}
    voice="";
  }
}void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
