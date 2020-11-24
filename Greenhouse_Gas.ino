/*
Greenhouse Experiment
Nebula Education
by Nolan Tremelling 12 October 2020
*/

int temperatureRead = 0;  //Vout sensor 

void setup()
{
  Serial.begin(9600);
}


void loop()
{
  float voltage = (analogRead(temperatureRead) * 0.00445);
  float temperatureC = (voltage - 0.5) * 100.0;
  float temperatureF = temperatureC * (9.0/5.0) + 32.0;

  Serial.print("voltage: ");
  Serial.print(voltage);
  Serial.print("  deg C: ");
  Serial.print(temperatureC);
  Serial.print("  deg F: ");
  Serial.println(temperatureF);
  delay(60000); //Wait 60 seconds
}