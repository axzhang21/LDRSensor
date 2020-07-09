//#define POT_PIN 2
//#define POT_PIN A0
#define LDR_PIN A0
//constant defined before program actuallly runs (context w/low memory)
//use it like a variable with * that you can't change the value

//int pot_pin = A0;
//different than above 


void setup() 
{
  Serial.begin(9600); 
  //pinMode(POT_PIN, INPUT);
  pinMode(LDR_PIN, INPUT);
  
  //Serial
  //lets us talk across USB cabel to arduino
  //communication protocol
  
  //Serial.println("Ready!");
  //any code written on here is happening on Arduino computer

}

void loop() 
{
  //int input = digitalRead(POT_PIN);
  //digital reads either high or low
  
  //int potValue = analogRead(POT_PIN);
  //setting value to what's received from potentiometer

  int input = analogRead(LDR_PIN);
  
  //Serial.println(POT_PIN);
  Serial.println(input);

}
