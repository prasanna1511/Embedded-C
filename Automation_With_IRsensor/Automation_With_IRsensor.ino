int irSensor = D2; // declaring the pin where IR sensor is attached
int relay2 = D5;

void setup() {
  
  
  pinMode(irSensor, INPUT); // setting the pin to take input from the IR sensor
  pinMode(relay2, OUTPUT);
   Serial.begin(9600);
}

void loop() {
  int buttonstate = digitalRead(irSensor); //reading the input
  Serial.println(buttonstate); 
  if(buttonstate == 0){ //if an object is detected the value turns 0
    
    
    digitalWrite(D2,HIGH);//turn on indicator
    digitalWrite(D5,HIGH);
    }
  else{
    
    digitalWrite(D2,LOW);//turn off indicator
    digitalWrite(D5,LOW);
    }
  delay(1000);
}