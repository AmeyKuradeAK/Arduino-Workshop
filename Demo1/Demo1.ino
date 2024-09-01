void setup() {
  // put your setup code here, to run once:
  pinMode(A1, INPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int data = analogRead(A1);
  Serial.println(data);
  if(data > 600){
    digitalWrite(6, HIGH);
    digitalWrite(5, LOW);
  }else{
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
  }
  delay(1000);
  
}