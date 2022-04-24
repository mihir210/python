const int hot = 87; 
int val;
void setup()
{
    pinMode(A2, INPUT); 
    pinMode(2, OUTPUT); 
    Serial.begin(9600);
}
void loop()
{
    val = analogRead(A2);
    float mv = (val / 1024.0) * 5000;
    float cel = mv / 10;
    float farh = (cel * 9) / 5 + 32;
    Serial.print("temp: ");
    Serial.print(cel);
    if (cel > hot)
    {
        digitalWrite(2, HIGH);
    }
    delay(10);
}