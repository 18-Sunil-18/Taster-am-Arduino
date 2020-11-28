int LEDblau=6; //Das Wort „LEDblau“ steht jetzt für den Wert 6.
int taster1=7; // Das Wort „taster1“ steht jetzt für den Wert 7.
int taster2=8; // Das Wort „taster2“ steht jetzt für den Wert 8.
int tasterstatus1=0; // Das Wort „tasterstatus1“ steht jetzt zunächst für den Wert 0. Später wird unter dieser Variable gespeichert, ob der Taster1 gedrückt ist oder nicht.
int tasterstatus2=0; // Das Wort „tasterstatus2“ steht jetzt zunächst für den Wert 0. Später wird unter dieser Variable gespeichert, ob der Taster2 gedrückt ist oder nicht. 

void setup(){
  pinMode(LEDblau, OUTPUT); // Der Pin mit der LED (Pin 6) ist jetzt ein Ausgang.
  pinMode(taster1, INPUT); // Der Pin mit dem Taster1 (Pin 7) ist jetzt ein Eingang.
  pinMode(taster2, INPUT); // Der Pin mit dem Taster2 (Pin 8) ist jetzt ein Eingang.
}

void loop(){
  tasterstatus1=digitalRead(taster1); // Hier wird der Pin7 ausgelesen (Befehl: digitalRead). Das Ergebnis wird unter der Variable "tasterstatus1" mit dem Wert "HIGH" für 5Volt oder "Low" für 0Volt gespeichert.

  if (tasterstatus1 == HIGH) // Wenn der Taster1 gedrückt wird (Spannungssignal ist hoch)
    
     {  // if-Schleife wird geöffnet
      digitalWrite(LEDblau, HIGH);  // soll die blaue LED leuchten
      delay (5000);  // und zwar für 5 Sekunden (5000 Millisekunden).
      digitalWrite(LEDblau, LOW);  // anschließend soll sich die LED abschalten.
     }  // if-Schleife wird geschlossen

  else  // ... ansonsten ...

      {  // Programmabschnitt des else-Befehls wird geöffnet
      digitalWrite(LEDblau, LOW);  // ... soll die LED nicht leuchten
     }  // Programmabschnitt des else-Befehls wird geschlossen
    

  tasterstatus2=digitalRead(taster2); // Hier wird der Pin8 ausgelesen (Befehl: digitalRead). Das Ergebnis wird unter der Variable "tasterstatus2" mit dem Wert "HIGH" für 5Volt oder "LOW" für 0Volt gespeichert.

  if (tasterstatus2 == HIGH)  // Wenn der Taster2 gedrückt wird (Spannungssignal ist hoch)
    
      {  // if-Schleife wird geöffnet
      digitalWrite(LEDblau, HIGH);  // soll die blaue LED leuchten
      delay (500); // und zwar für 0,5 Sekunden (500 Millisekunden).
      digitalWrite(LEDblau, LOW);  // anschließend soll sich die LED abschalten.
      }  // if-Schleife wird geschlossen

  else  // ... ansonsten ...

      {  // Programmabschnitt des else-Befehls wird geöffnet
     digitalWrite(LEDblau, LOW);  // ... soll die LED nicht leuchten
     }  // Programmabschnitt des else-Befehls wird geschlossen
 
}
