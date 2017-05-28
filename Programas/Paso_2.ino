//Segundo paso del procedimeinto de caminata
void paso2(){
  delay(500);

  //PATA 6 SE LEVANTA Y GIRA
  Serial.println("#16 P1500 T900");//a
  Serial.println("#17 P1500 T900");//b
  Serial.println("#18 P1250 T900");//c

  //PATA 3 SE LEVANTA Y GIRA
    Serial.println("#0 P1500 T900");//a
  Serial.println("#1 P1400 T900");//b
  Serial.println("#2 P1250 T900");//c
  
  delay(500);

  //PATA 6 BAJA 
   Serial.println("#16 P1000 T900");//a
  Serial.println("#17 P1000 T900");//b
  Serial.println("#18 P1250 T900");//c

  //PATA 3 BAJA
    Serial.println("#0 P2000 T900");//a
  Serial.println("#1 P1900 T900");//b
  Serial.println("#2 P1250 T900");//c
}

