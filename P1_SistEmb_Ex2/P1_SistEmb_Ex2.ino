// Declaração das variáveis
int L0 = 0;
int L1 = 1;
int L2 = 2;
int L3 = 3;
int led = 3;
int delay_time = 500;

void setup()
{
  pinMode(L0, OUTPUT);
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(L3, OUTPUT);
}

void loop()
{
  for(int n = 0; n <= led; led--) {
    digitalWrite(led, HIGH);
  	delay(delay_time);
  	digitalWrite(led, LOW);
  	delay(delay_time);
  }
  led = 3;
}
