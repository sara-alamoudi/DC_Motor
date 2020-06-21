int pot=A0;
  int val;
void setup()
{
  Serial.begin(9600);
  pinMode(6, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(3, OUTPUT);
}

void loop()
{

  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(3, LOW);
  val=analogRead(pot);
  Serial.println(val);
  analogWrite(6,val);
  analogWrite(9,val);
  delay(1000); // Wait for 1000 millisecond(s)

}
