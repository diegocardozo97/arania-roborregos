//Propulsa todo el cuerpo de la arana hacia adelante
void paso4(){
     delay(500);
   //PATA 1 se levanta
 Serial.println("#8 P1500 T900");//a
  Serial.println("#9 P1250 T900");//b
  Serial.println("#10 P1750 T900");//c
  //PATA 4 se levanta
   Serial.println("#24 P1300 T900");//a
  Serial.println("#25 P1700 T900");//b
  Serial.println("#26 P1750 T900");//c
   delay(500);
   
   //PATA 1 se baja
 Serial.println("#8 P2000 T900");//a
  Serial.println("#9 P1400 T900");//b
  Serial.println("#10 P1750 T900");//c
  //PATA 4 se baja
   Serial.println("#24 P1700 T900");//a
  Serial.println("#25 P1350 T900");//b
  Serial.println("#26 P1750 T900");//c
  delay(500);
  
  //Pata 1
   Serial.println("#8 P2200 T900");//a
  Serial.println("#9 P1900 T900");//b
  //Pata 4
  Serial.println("#24 P1600 T900");//a
  Serial.println("#25 P1540 T900");//b
}

