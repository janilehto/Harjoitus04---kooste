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
  Serial.begin(9600);
}

bool moikkaanko = true;
void moikataan(){
  if( digitalRead( S2 ) == BUTTONPRESSED ){
    if( moikkaanko == true ){
      Serial.println("Moro");
      moikkaanko = false;
    }
  }else{
    moikkaanko = true;
  }
}

bool ohjaanko = true;
void ohjataan(){
  if( digitalRead( S1 ) == BUTTONPRESSED ){
    if( ohjaanko == true ){
      
      ohjaanko = false;
    }
  }else{
    ohjaanko = true;
  }
}

void loop(){
  moikataan();
  ohjataan();
}






