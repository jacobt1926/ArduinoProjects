const int ledPin = 9;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT)
}

void loop() {
  if (Serial.available() > 0) {
    String onOff = Serial.readString();
  }

  onOff.trim();
  onOff.toLowerCase();

  if (onOff == "t") {
    digitalWrite(ledPin, HIGH)
  } else if (onOff == "f") {
    digitalWrite(ledPin, LOW)
  }

}
