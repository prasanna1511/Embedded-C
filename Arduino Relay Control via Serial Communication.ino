int relay1 = 5;
String readString;
void setup() {
  Serial.begin(9600);
  pinMode(relay1, OUTPUT); 
 }
void loop() {
  while (Serial.available()) {
    delay(3);  
    char c = Serial.read();
    readString += c; 
  }

  if (readString.length() >0) {
    Serial.println(readString);
    if (readString == "1 ON")     
    {
      digitalWrite(relay1, HIGH);
    }
    if (readString == "1 OFF")
    {
      digitalWrite(relay1, LOW);
    }
    
   readString="";
  } 
}