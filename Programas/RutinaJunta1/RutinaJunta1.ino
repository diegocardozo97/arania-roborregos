////////////////////METODOS////////////////////
//Pararse
void pararse(){
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

  delay(1200);
}


//SUBIR PATAS
void subirPatas(){
  ///Pata 4

  //LEVANTA LA PATA
  Serial.println("#17 P2300 T700"); delay(300);//b antes evitar que se atore
  Serial.println("#16 P800 T700");//a
  //Serial.println("#17 P2300 T700");//b
  Serial.println("#18 P1500 T700");//c

  delay(1200);
  for(int x=0; x<5; x++){
    Serial.println("#16 P800 T800");//a
    Serial.println("#17 P2300 T800");//b
    Serial.println("#18 P1000 T800");//c
    delay(800);

    Serial.println("#16 P800 T800");//a
    Serial.println("#17 P2300 T800");//b
    Serial.println("#18 P2000 T800");//c
    delay(800);
  }

  pararse();

  //LEVANTA LA PATA
  Serial.println("#16 P800 T700");//a
  Serial.println("#17 P2300 T700");//b
  Serial.println("#18 P1500 T700");//c

  delay(1000);
  for(int x=0; x<5; x++){
    Serial.println("#16 P1500 T800");//a
    Serial.println("#17 P2300 T800");//b
    Serial.println("#18 P1500 T800");//c
    delay(800);

    Serial.println("#16 P800 T800");//a
    Serial.println("#17 P1500 T800");//b
    Serial.println("#18 P1500 T800");//c
    delay(800);
  }

  pararse();
  
  //LEVANTA LA PATA
  Serial.println("#16 P1500 T700");//a
  Serial.println("#17 P2300 T700");//b
  Serial.println("#18 P1500 T700");//c

  delay(1000);
  for(int x=0; x<5; x++){
    Serial.println("#16 P1500 T800");//a
    Serial.println("#17 P1000 T800");//b
    Serial.println("#18 P1500 T800");//c
    delay(800);

    Serial.println("#16 P1500 T800");//a
    Serial.println("#17 P2300 T800");//b
    Serial.println("#18 P1500 T800");//c
    delay(800);
  }
  

  pararse();

  /////Pata 3
 
  //LEVANTA LA PATA
  Serial.println("#9 P600 T700"); delay(300);//b Antes para que alcance a levantar antes la pata
  Serial.println("#8 P2200 T700");//a
  //Serial.println("#9 P600 T700");//b
  Serial.println("#10 P1500 T700");//c

  delay(1200);
  for(int x=0; x<5; x++){
    Serial.println("#8 P2200 T800");//a
    Serial.println("#9 P600 T800");//b
    Serial.println("#10 P1000 T800");//c
    delay(800);

    Serial.println("#8 P2200 T800");//a
    Serial.println("#9 P600 T800");//b
    Serial.println("#10 P2000 T800");//c
    delay(800);
  }

  pararse();

  //LEVANTA LA PATA
  Serial.println("#8 P1500 T700");//a
  Serial.println("#9 P600 T700");//b
  Serial.println("#10 P1500 T700");//c

  delay(1000);
  for(int x=0; x<5; x++){
    Serial.println("#8 P2200 T800");//a
    Serial.println("#9 P1500 T800");//b
    Serial.println("#10 P1500 T800");//c
    delay(800);

    Serial.println("#8 P1500 T800");//a
    Serial.println("#9 P600 T800");//b
    Serial.println("#10 P1500 T800");//c
    delay(800);
  }

  pararse();
  
  //LEVANTA LA PATA
  Serial.println("#8 P1500 T700");//a
  Serial.println("#9 P600 T700");//b
  Serial.println("#10 P1500 T700");//c

  delay(1000);
  for(int x=0; x<5; x++){
    Serial.println("#8 P1500 T800");//a
    Serial.println("#9 P2300 T800");//b
    Serial.println("#10 P1500 T800");//c
    delay(800);

    Serial.println("#8 P1500 T700");//a
    Serial.println("#9 P600 T700");//b
    Serial.println("#10 P1500 T700");//c
    delay(800);
  }

}


//SUBIR BAJAR
void subirBajar(){
  ////MEDIO-ABAJO
  
  //LADO IZQ
  //PATA 1  
  Serial.println("#0 P1500 T800");//a
  Serial.println("#1 P1500 T800");//b
  Serial.println("#2 P1500 T800");//c

  //PATA 2
  Serial.println("#4 P1500 T800");//a
  Serial.println("#5 P1900 T800");//b
  Serial.println("#6 P1500 T800");//c

  //PATA 3
  Serial.println("#8 P1500 T800");//a
  Serial.println("#9 P1500 T800");//b
  Serial.println("#10 P1500 T800");//c


  //MITAD DER
  //PATA 4
  Serial.println("#16 P1500 T800");//a
  Serial.println("#17 P1500 T800");//b
  Serial.println("#18 P1500 T800");//c

  //PATA 5
  Serial.println("#20 P1500 T800");//a
  Serial.println("#21 P1500 T800");//b
  Serial.println("#22 P1500 T800");//c

  //PATA 6
  Serial.println("#24 P1500 T800");//a
  Serial.println("#25 P1500 T800");//b
  Serial.println("#26 P1500 T800");//c

  delay(1100);
  //delay(2000);


  
  ////ABAJO
  //LADO IZQ
  //PATA 1  
  //while(millis()<nuevo){
  Serial.println("#0 P1200 T2000");//a
  Serial.println("#1 P1200 T2000");//b
  Serial.println("#2 P1500 T2000");//c

  //PATA 2
  Serial.println("#4 P1200 T2000");//a
  Serial.println("#5 P1600 T2000");//b
  Serial.println("#6 P1500 T2000");//c

  //PATA 3
  Serial.println("#8 P1200 T2000");//a
  Serial.println("#9 P1200 T2000");//b
  Serial.println("#10 P1500 T2000");//c


  //MITAD DER
  //PATA 4
  Serial.println("#16 P1900 T2000");//a
  Serial.println("#17 P1800 T2000");//b
  Serial.println("#18 P1500 T2000");//c

  //PATA 5
  Serial.println("#20 P1800 T2000");//a
  Serial.println("#21 P1800 T2000");//b
  Serial.println("#22 P1500 T2000");//c

  //PATA 6
  Serial.println("#24 P1800 T2000");//a
  Serial.println("#25 P1900 T2000");//b
  Serial.println("#26 P1500 T2000");//c
  
  delay(2000);


  ///MEDIO-ABAJO
  //LADO IZQ
  //PATA 1  
  Serial.println("#0 P1500 T800");//a
  Serial.println("#1 P1500 T800");//b
  Serial.println("#2 P1500 T800");//c

  //PATA 2
  Serial.println("#4 P1500 T800");//a
  Serial.println("#5 P1900 T800");//b
  Serial.println("#6 P1500 T800");//c

  //PATA 3
  Serial.println("#8 P1500 T800");//a
  Serial.println("#9 P1500 T800");//b
  Serial.println("#10 P1500 T800");//c


  //MITAD DER
  //PATA 4
  Serial.println("#16 P1500 T800");//a
  Serial.println("#17 P1500 T800");//b
  Serial.println("#18 P1500 T800");//c

  //PATA 5
  Serial.println("#20 P1500 T800");//a
  Serial.println("#21 P1500 T800");//b
  Serial.println("#22 P1500 T800");//c

  //PATA 6
  Serial.println("#24 P1500 T800");//a
  Serial.println("#25 P1500 T800");//b
  Serial.println("#26 P1500 T800");//c
  
  delay(1000);
  
  /*ESTO NO ES NECESARIO
  ////ARRIBA
  
  //LADO IZQ
  //PATA 1
  Serial.println("#0 P2000 T800");//a
  Serial.println("#1 P1900 T800");//b
  Serial.println("#2 P1500 T800");//c


  //PATA 2
  Serial.println("#4 P2000 T800");//a
  Serial.println("#5 P2300 T800");//b
  Serial.println("#6 P1500 T800");//c

  //PATA 3
  Serial.println("#8 P2000 T800");//a
  Serial.println("#9 P1900 T800");//b
  Serial.println("#10 P1500 T800");//c


  //MITAD DER
  //PATA 4
  Serial.println("#16 P1000 T800");//a
  Serial.println("#17 P1000 T800");//b
  Serial.println("#18 P1500 T800");//c

  //PATA 5
  Serial.println("#20 P1000 T800");//a
  Serial.println("#21 P1050 T800");//b
  Serial.println("#22 P1500 T800");//c

  //PATA 6
  Serial.println("#24 P1000 T800");//a
  Serial.println("#25 P1100 T800");//b
  Serial.println("#26 P1500 T800");//c
  

  delay(5000);*/
}

//BAILAR
void bailar(){
  ////GIRA IZQ

  //PATA 1
  Serial.println("#0 P2000 T800");//a
  Serial.println("#1 P1900 T800");//b
  Serial.println("#2 P1800 T800");//c


  //PATA 2
  Serial.println("#4 P2000 T800");//a
  Serial.println("#5 P2300 T800");//b
  Serial.println("#6 P1800 T800");//c

  //PATA 3
  Serial.println("#8 P2000 T800");//a
  Serial.println("#9 P1900 T800");//b
  Serial.println("#10 P1800 T800");//c


  //MITAD der
  //PATA 4
  Serial.println("#16 P1000 T800");//a
  Serial.println("#17 P1000 T800");//b
  Serial.println("#18 P1800 T800");//c

  //PATA 5
  Serial.println("#20 P1000 T800");//a
  Serial.println("#21 P1050 T800");//b
  Serial.println("#22 P1800 T800");//c

  //PATA 6
  Serial.println("#24 P1000 T800");//a
  Serial.println("#25 P1100 T800");//b
  Serial.println("#26 P1800 T800");//c

  delay(3000);

  pararse();

  delay(3000);

   //GIRA DER

  //PATA 1
  Serial.println("#0 P2000 T800");//a
  Serial.println("#1 P1900 T800");//b
  Serial.println("#2 P1200 T800");//c


  //PATA 2
  Serial.println("#4 P2000 T800");//a
  Serial.println("#5 P2300 T800");//b
  Serial.println("#6 P1200 T800");//c

  //PATA 3
  Serial.println("#8 P2000 T800");//a
  Serial.println("#9 P1900 T800");//b
  Serial.println("#10 P1200 T800");//c


  //MITAD der
  //PATA 4
  Serial.println("#16 P1000 T800");//a
  Serial.println("#17 P1000 T800");//b
  Serial.println("#18 P1200 T800");//c

  //PATA 5
  Serial.println("#20 P1000 T800");//a
  Serial.println("#21 P1050 T800");//b
  Serial.println("#22 P1200 T800");//c

  //PATA 6
  Serial.println("#24 P1000 T800");//a
  Serial.println("#25 P1100 T800");//b
  Serial.println("#26 P1200 T800");//c

  delay(3000);

  pararse();
}


///////////////////////SETUP//////////////////////
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(500);

  //pararse();while(1);
}

//////////////////////LOOP///////////////////////
void loop(){
  pararse();

  delay(1000);
  for(int x=0; x<3; x++){
    subirBajar();
    delay(1000);
    pararse();
  }

  subirPatas();
  pararse();
  
  delay(1000);
  bailar();
  delay(1000);
  
}

