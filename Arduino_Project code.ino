//Define variables for the pin numbers
const int ledPin = 13;
const int ldrPin = A0;
const int button = 4;
const int mot = 7;


void setup() {
  // put your setup code here, to run once:
  //define which variables are output and which are input.
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(ldrPin, INPUT);
  pinMode(button, INPUT);
  pinMode(mot, OUTPUT);
}

void loop() {
  //Conditional to on LED if button is clicked
  if(digitalRead(button) == HIGH) {
    digitalWrite(ledPin, HIGH);
  }
  //If button is not clicked, off lED
  else{
    digitalWrite(ledPin, LOW);
  }

  // put your main code here, to run repeatedly:
  //This reads the value of the LDR
  int ldrStatus = analogRead(ldrPin);

  //If the LDR value is above or equal to 980, the motor will rotate,
  if(ldrStatus > 365) {
    digitalWrite(mot, HIGH);
    Serial.println(ldrStatus);
  }
  //Else if the LDR value is less than 980, the motor does not rotating
  else{
    digitalWrite(mot, LOW);
    Serial.println(ldrStatus);
  }
}
