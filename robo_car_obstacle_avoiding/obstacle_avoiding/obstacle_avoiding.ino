// C++ code
//
int l1=2;
int l2=3;
int r1=5;
int r2=6;
int ec=7;
int tr=8;
int t;
float d;

void setup()
{
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

  digitalWrite(tr, HIGH);
  delayMicroseconds(10); // Wait for 1000 millisecond(s)
  digitalWrite(tr, LOW);
  t=pulseIn(ec, HIGH);
  d=0.017*t;
  Serial.print(d);
  Serial.println(" cm ");
 
 
 if(d<40)
  {
    stop();
    delay(1000);
    back();
    delay(100);
    right();
    delay(150);
  }
  else{
    forw();
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
void stop(){
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
