int var;
void setup(){
pinMode (13, OUTPUT); //Connect rx and tx of BT Module to Arduino tx and rx 
Serial.begin(9600);
}
void loop() {
  if (Serial.available()){
    int var = Serial.read();
    Serial.print("The value is: ");
    Serial.println(var);

    if (var==65) {
      digitalWrite(13, HIGH);
    }

    else if (var==66){
      digitalWrite(13, LOW);
    }

    else if (var==97){
      digitalWrite(13, LOW);
    }
  }
}
// This is a change.
