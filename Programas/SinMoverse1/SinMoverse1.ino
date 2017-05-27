void setup() {
      // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  //Serial.println("#number_of_servo Pposition Ttime")
  //0-31, 0Deg=500 180=2500, time in milis
  //Always end with a end of line

  //LADO IZQ
  //PATA 1
  Serial.println("#0 P2000 T900");//a
  Serial.println("#1 P1900 T900");//b
  Serial.println("#2 P1500 T900");//c


  //PATA 2
  Serial.println("#4 P2000 T900");//a
  Serial.println("#5 P2300 T900");//b
  Serial.println("#6 P1500 T900");//c

  //PATA 3
  Serial.println("#8 P2000 T900");//a
  Serial.println("#9 P1900 T900");//b
  Serial.println("#10 P1500 T900");//c


  //MITAD DER
  //PATA 4
  Serial.println("#16 P1000 T900");//a
  Serial.println("#17 P1000 T900");//b
  Serial.println("#18 P1500 T900");//c

  //PATA 5
  Serial.println("#20 P1000 T900");//a
  Serial.println("#21 P1050 T900");//b
  Serial.println("#22 P1500 T900");//c

  //PATA 6
  Serial.println("#24 P1000 T900");//a
  Serial.println("#25 P1100 T900");//b
  Serial.println("#26 P1500 T900");//c
  
 
}
