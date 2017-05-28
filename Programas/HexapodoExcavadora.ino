//Programa para hacer caminar al hexapodo
//La syntaxis es el # indica el numero de pin en el que el servo se movera.
//La P significa la posicion a la que se movera el servo, puede ir desde P000 a P2500, o P2300.
//La T es el tiempo en el que se movera. 
void setup() {
  Serial.begin(115200);
  delay(100);
  pararse();
  delay(1000);
     paso1();
     paso2();
     
}

void loop() {
   paso3();
   paso4();
   paso5();
   paso6();
}

void pararse(){
  //LADO DER
  //PATA 3
  Serial.println("#0 P2000 T900");//a
  Serial.println("#1 P1900 T900");//b
  Serial.println("#2 P1800 T900");//c


  //PATA 2
  Serial.println("#4 P2000 T900");//a
  Serial.println("#5 P2300 T900");//b
  Serial.println("#6 P1500 T900");//c

  //PATA 1
  Serial.println("#8 P2000 T900");//a
  Serial.println("#9 P1900 T900");//b
  Serial.println("#10 P1100 T900");//c


  //MITAD IZQ
  //PATA 6
  Serial.println("#16 P1000 T900");//a
  Serial.println("#17 P1000 T900");//b
  Serial.println("#18 P1900 T900");//c

  //PATA 5
  Serial.println("#20 P1000 T900");//a
  Serial.println("#21 P1050 T900");//b
  Serial.println("#22 P1500 T900");//c

  //PATA 4
  Serial.println("#24 P1000 T900");//a
  Serial.println("#25 P1100 T900");//b
  Serial.println("#26 P1200 T900");//c
}
