// C++ code
//
int var;
int l1=2;
int l2=3;
int r1=4;
int r2=5;
int ec=7;
int tr=8;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(tr, OUTPUT);
  pinMode(ec, INPUT);
  pinMode(l1, OUTPUT);
  pinMode(l2, OUTPUT);
  pinMode(r1, OUTPUT);
  pinMode(r2, OUTPUT);
  Serial.begin(9600);
}

void loop()
{

  if (Serial.available())
    {
      int var = Serial.read();
      Serial.print("The value is: ");
      Serial.println(var);
    
      if (var==70) {
        forw();
      }
      else if (var==66){
        back();
      }
      else if (var==82){
        right();
      }
      else if (var==76){
        left();
      }
      else{
        st();
      }
    }
}

void forw(){
  digitalWrite(l1, HIGH);
  digitalWrite(l2,LOW);
  digitalWrite(r1, HIGH);
  digitalWrite(r2,LOW);
  Serial.println(" Forward ");
}
void back(){
  digitalWrite(l1, LOW);
  digitalWrite(r1, LOW);
  digitalWrite(l2, HIGH);
  digitalWrite(r2, HIGH);
  Serial.println(" Backward ");
}
void st(){
  digitalWrite(l1, LOW);
  digitalWrite(r1, LOW);
  digitalWrite(l2,LOW);
  digitalWrite(r2,LOW);
  Serial.println(" Stop ");
}
void right(){
  digitalWrite(l1, HIGH);
  digitalWrite(r1, LOW);
  digitalWrite(l2,LOW);
  digitalWrite(r2,HIGH);
  Serial.println(" Right ");  
}
void left(){
  digitalWrite(l1, LOW);
  digitalWrite(r1, HIGH);
  digitalWrite(l2, HIGH);
  digitalWrite(r2,LOW);
  Serial.println(" Left ");
}
