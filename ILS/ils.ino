// l'interrupteur à lames souples (ILS ou REED) 
// est connecté entre les bornes ILS_INPUT et ILS_GROUND
#define ILS_INPUT  2
#define ILS_GROUND 10

void setup(){
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(ILS_GROUND, OUTPUT);
  pinMode(ILS_INPUT, INPUT_PULLUP);
  digitalWrite(ILS_GROUND, LOW);
}

void loop(){
  digitalWrite(LED_BUILTIN, !digitalRead(ILS_INPUT) ); 
}
