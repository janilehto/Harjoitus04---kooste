#define S1 5
#define S2 4
#define BUTTONPRESSED LOW

#define LED 12
#define LEDON LOW
#define LEDOFF HIGH

void setup(){
  pinMode( S1, INPUT ); 
  pinMode( S2, INPUT );
  pinMode( LED, OUTPUT);
}

void loop(){
  if( digitalRead( S2 ) == BUTTONPRESSED ){
    digitalWrite( LED, LEDON );
  }else{
    digitalWrite( LED, LEDOFF );
  }
}
