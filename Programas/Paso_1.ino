//Primer paso de la camita
void paso1(){
delay(250);

  //PATA 1 SE LEVANTA Y GIRA
  Serial.println("#8 P1500 T900");//a
  Serial.println("#9 P1400 T900");//b
  Serial.println("#10 P1750 T900");//c

  //PATA 4 SE LEVANTA Y GIRA
  Serial.println("#24 P1500 T900");//a
  Serial.println("#25 P1600 T900");//b
  Serial.println("#26 P1750 T900");//c
  
  delay(500);

  //PATA 1 BAJA 
   Serial.println("#8 P2000 T900");//a
  Serial.println("#9 P1900 T900");//b
  Serial.println("#10 P1750 T900");//c

  //PATA 4 BAJA
    Serial.println("#24 P1000 T900");//a
  Serial.println("#25 P1100 T900");//b
  Serial.println("#26 P1750 T900");//c
}

