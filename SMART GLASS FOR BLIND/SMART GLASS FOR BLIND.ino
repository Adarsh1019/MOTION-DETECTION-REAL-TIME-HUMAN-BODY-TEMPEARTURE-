int duration, distance;
int trigPin = 12;
int echoPin = 11;
int buzzer = 8;

void setup()
{
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  // put your setup code here, to run once:
}

void loop()
{
  long duration, distance;
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 2) / 29.1;
  Serial.print(distance);
  Serial.println("CM");
  delay(10);

  if ((distance <= 70))
  {
    digitalWrite(buzzer, HIGH);
  }
  else if (distance > 70)
  {
    digitalWrite(buzzer,LOW);
  }
}