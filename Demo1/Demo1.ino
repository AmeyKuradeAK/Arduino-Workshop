void setup() {
  // put your setup code here, to run once:
  pinMode(A1, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int data = analogRead(A1);
  Serial.println(data);
  if(data > 600){
    digitalWrite(6, HIGH);
  }else{
    digitalWrite(6, LOW);
  }
  delay(1000);
  
}