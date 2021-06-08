#define e1 2
#define d1 3
#define c1 4
#define p 5
#define e2 6
#define d2 7
#define g2 8
#define c2 9
#define b1 10
#define f2 11
#define a2 12
#define b2 13
#define a1 A3
#define g1 A4
#define f1 A5
double x = 0;
int limit = 700;
int checked = false;
double t = millis();
double told = 0;
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  for (int i = 2; i < 14; i++) {
    pinMode(i, OUTPUT);
  }
  pinMode(A5, OUTPUT);
  pinMode(A4, OUTPUT);
    pinMode(A3, OUTPUT);
  pinMode(A0, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(analogRead(A0));
  if(!checked&&analogRead(A0)>limit){
    checked = !checked;
    told = t;
    t = millis();
    clean();
    x=60/((t-told)/1000);
    if (x>99){
      x=x/10;
      digitalWrite(p,HIGH);
    }
    draw(x);
    delay(300);
  }
  if(checked && analogRead(A0)<limit){
    checked = !checked;
  }
}
void draw(int x){
  switch(x%10){
    case 0:
zeroL();
    break;
    case 1:
oneL();
    break;
    case 2:
twoL();
    break;
    case 3:
threeL();
    break;
    case 4:
fourL();
    break;
    case 5:
fiveL();
    break;
    case 6:
sixL();
    break;
    case 7:
sevenL();
    break;
    case 8:
eightL();
    break;
    case 9:
nineL();
    break;
    default:
    zeroL();
    break;
  }
    switch(x/10){
    case 0:
zeroH();
    break;
    case 1:
oneH();
    break;
    case 2:
twoH();
    break;
    case 3:
threeH();
    break;
    case 4:
fourH();
    break;
    case 5:
fiveH();
    break;
    case 6:
sixH();
    break;
    case 7:
sevenH();
    break;
    case 8:
eightH();
    break;
    case 9:
nineH();
    break;
        default:
    zeroH();
    break;
  }
}
void zeroL() {
  digitalWrite(a2, HIGH);
  digitalWrite(b2, HIGH);
  digitalWrite(c2, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(e2, HIGH);
  digitalWrite(f2, HIGH);
}

void oneL() {
  digitalWrite(b2, HIGH);
  digitalWrite(c2, HIGH);
}

void twoL() {
  digitalWrite(a2, HIGH);
  digitalWrite(b2, HIGH);
  digitalWrite(g2, HIGH);
  digitalWrite(e2, HIGH);
  digitalWrite(d2, HIGH);
}
void threeL() {
  digitalWrite(a2, HIGH);
  digitalWrite(b2, HIGH);
  digitalWrite(g2, HIGH);
  digitalWrite(c2, HIGH);
  digitalWrite(d2, HIGH);
}
void fourL() {
  digitalWrite(g2, HIGH);
  digitalWrite(f2, HIGH);
  digitalWrite(b2, HIGH);
  digitalWrite(c2, HIGH);
}
void fiveL() {
  digitalWrite(g2, HIGH);
  digitalWrite(a2, HIGH);
  digitalWrite(f2, HIGH);
  digitalWrite(c2, HIGH);
  digitalWrite(d2, HIGH);
}
void sixL() {
  digitalWrite(g2, HIGH);
  digitalWrite(a2, HIGH);
  digitalWrite(f2, HIGH);
  digitalWrite(e2, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(c2, HIGH);
}
void sevenL() {
  digitalWrite(a2, HIGH);
  digitalWrite(b2, HIGH);
  digitalWrite(c2, HIGH);
}
void eightL() {
  digitalWrite(a2, HIGH);
  digitalWrite(b2, HIGH);
  digitalWrite(c2, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(e2, HIGH);
  digitalWrite(f2, HIGH);
  digitalWrite(g2, HIGH);
}
void nineL() {
  digitalWrite(a2, HIGH);
  digitalWrite(b2, HIGH);
  digitalWrite(c2, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(f2, HIGH);
  digitalWrite(g2, HIGH);
}
void zeroH() {
  digitalWrite(a1, HIGH);
  digitalWrite(b1, HIGH);
  digitalWrite(c1, HIGH);
  digitalWrite(d1, HIGH);
  digitalWrite(e1, HIGH);
  digitalWrite(f1, HIGH);
}

void oneH() {
  digitalWrite(b1, HIGH);
  digitalWrite(c1, HIGH);
}

void twoH() {
  digitalWrite(a1, HIGH);
  digitalWrite(b1, HIGH);
  digitalWrite(g1, HIGH);
  digitalWrite(e1, HIGH);
  digitalWrite(d1, HIGH);
}
void threeH() {
  digitalWrite(a1, HIGH);
  digitalWrite(b1, HIGH);
  digitalWrite(g1, HIGH);
  digitalWrite(c1, HIGH);
  digitalWrite(d1, HIGH);
}
void fourH() {
  digitalWrite(g1, HIGH);
  digitalWrite(f1, HIGH);
  digitalWrite(b1, HIGH);
  digitalWrite(c1, HIGH);
}
void fiveH() {
  digitalWrite(g1, HIGH);
  digitalWrite(a1, HIGH);
  digitalWrite(f1, HIGH);
  digitalWrite(c1, HIGH);
  digitalWrite(d1, HIGH);
}
void sixH() {
  digitalWrite(g1, HIGH);
  digitalWrite(a1, HIGH);
  digitalWrite(f1, HIGH);
  digitalWrite(e1, HIGH);
  digitalWrite(d1, HIGH);
  digitalWrite(c1, HIGH);
}
void sevenH() {
  digitalWrite(a1, HIGH);
  digitalWrite(b1, HIGH);
  digitalWrite(c1, HIGH);
}
void eightH() {
  digitalWrite(a1, HIGH);
  digitalWrite(b1, HIGH);
  digitalWrite(c1, HIGH);
  digitalWrite(d1, HIGH);
  digitalWrite(e1, HIGH);
  digitalWrite(f1, HIGH);
  digitalWrite(g1, HIGH);
}
void nineH() {
  digitalWrite(a1, HIGH);
  digitalWrite(b1, HIGH);
  digitalWrite(c1, HIGH);
  digitalWrite(d1, HIGH);
  digitalWrite(f1, HIGH);
  digitalWrite(g1, HIGH);
}
void clean() {
  for (int i = 2; i < 14; i++) {
    digitalWrite(i, LOW);
  }
  digitalWrite(A5, LOW);
  digitalWrite(A4, LOW);
  digitalWrite(A3, LOW);
}
