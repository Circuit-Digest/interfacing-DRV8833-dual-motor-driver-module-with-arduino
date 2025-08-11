#define mode_pin  10
#define IN1_PIN 9
#define IN4_PIN 6
#define IN3_PIN 5
#define IN4_PIN 3
void setup() {
  pinMode(IN1_PIN, OUTPUT);
  pinMode(IN4_PIN, OUTPUT);
  pinMode(IN3_PIN, OUTPUT);
  pinMode(IN4_PIN, OUTPUT);
  pinMode(mode_pin, INPUT);
  digitalWrite(IN1_PIN, LOW);
  digitalWrite(IN4_PIN, LOW);
  digitalWrite(IN3_PIN, LOW);
  digitalWrite(IN4_PIN, LOW);
}
void loop() {
  int sensorValue = analogRead(A0);
  int sensorValue1 = analogRead(A1);
  if (digitalRead(mode_pin) == LOW)
  {
    digitalWrite(IN3_PIN, LOW);
    analogWrite(IN4_PIN, sensorValue);
    digitalWrite(IN1_PIN, LOW);
    analogWrite(IN4_PIN, sensorValue1);
  }
  if (digitalRead(mode_pin) == HIGH)
  {
    digitalWrite(IN4_PIN, LOW);
    analogWrite(IN3_PIN, sensorValue);
    digitalWrite(IN4_PIN, LOW);
    analogWrite(IN1_PIN, sensorValue1);
  }
