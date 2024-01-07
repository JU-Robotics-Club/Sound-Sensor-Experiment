int micPin = A0;
int digitalPin = 52;
int sensorValue = 0;
int digitalState = 0;
int flag = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(digitalPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(micPin);
  digitalState = digitalRead(digitalPin);
  Serial.println(sensorValue);
  //Serial.println(digitalState);

  if (sensorValue > 522) {
    if(flag == 0)
    {
      digitalWrite(LED_BUILTIN, HIGH);
      flag = 1;
      delay(3000);
    }
    else  
    {digitalWrite(LED_BUILTIN, LOW);
    flag = 0;
    delay(3000);}
    
  }

  else {
    digitalWrite(LED_BUILTIN, LOW);
  }
}
