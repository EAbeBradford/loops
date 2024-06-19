void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  Serial.println("print hello 10 times");
  Serial.println("using a for loop");

  //for loop
  //use when you know how many times something has to happen
  // ( start value; ending conditional; change of value)
  for (int x = 0; x < 10; x ++){
    Serial.println("hello");
  }

  Serial.println("print hello 10 times");
  Serial.println("using a while loop");

  //while loop
  //use when you don't know how many times something should happen
  //still can use when you do know how many times
  //need to be careful to not make infinate loop
  //while the condition is true, code!
  int x = 0;
  while(x < 10){
    Serial.println("hello");
    x++;

  }
  

}

void loop() {
  // put your main code here, to run repeatedly:

}
