void paso5(){
    //PASO 5
    delay(500);
   //PATA 6 se levanta
 Serial.println("#16 P1500 T900");//a
  Serial.println("#17 P1700 T900");//b
  Serial.println("#18 P1250 T900");//c
  //PATA 3 se levanta
   Serial.println("#0 P1300 T900");//a
  Serial.println("#1 P1250 T900");//b
  Serial.println("#2 P1250 T900");//c
   delay(500);
   
   //PATA 6 se baja
 Serial.println("#16 P1000 T900");//a
  Serial.println("#17 P1550 T900");//b
  Serial.println("#18 P1250 T900");//c
  //PATA 3 se baja
   Serial.println("#0 P0900 T900");//a
  Serial.println("#1 P1600 T900");//b
  Serial.println("#2 P1250 T900");//c
  delay(500);
  
  //Pata 6
   Serial.println("#16 P0800 T900");//a
  Serial.println("#17 P1050 T900");//b
  //Pata 3
  Serial.println("#0 P1300 T900");//a
  Serial.println("#1 P1460 T900");//b
  delay(500);

  //Pata 5 y 2
  Serial.println("#21 P1800 T900");//a
  Serial.println("#5 P1550 T900");//a
  delay(500);
  Serial.println("#22 P1100 T900");//b
  Serial.println("#6 P1900 T900");//b
  delay(500);
  Serial.println("#21 P1350 T900");//a
  Serial.println("#5 P2000 T900");//a
  delay(250);
  
//  //Pata 5
//  Serial.println("#21 P1800 T900");//a
//  Serial.println("#22 P1100 T900");//b
//  delay(500);
//  Serial.println("#21 P1350 T900");//a
//  delay(250);
//  
//  //Pata 2
//  Serial.println("#5 P1550 T900");//a
//  Serial.println("#6 P1900 T900");//b
//  delay(500);
//  Serial.println("#5 P2000 T900");//a
//  delay(250);
}

