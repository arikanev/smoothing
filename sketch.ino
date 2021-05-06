float x=5;
float y=0;
int a=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  if (a==5){
    a=0;
    }
x=random() * sin(a);
y=0.9391*y + 0.0609*x;
a++;
Serial.print(x);
Serial.print(" ");
Serial.println(y);
}
