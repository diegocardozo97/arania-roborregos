/**
 * Programa con la prueba de caminar adelante 1
 * 
 * PararseCaminar
 * CaminarAdelante
 */

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

  delay(1000);
}


void pararseCaminar(){
  ////IZQUIERDA
  //PATA 6
  //Tiempo 4: inicio
  Serial.println("#24 P1000 T900");//a
  Serial.println("#25 P1100 T900");//b
  Serial.println("#26 P1100 T900");//c
  delay(900);

  //PATA 5
  //Tiempo 4: inicio
  Serial.println("#20 P1000 T900");//a
  Serial.println("#21 P1050 T900");//b
  Serial.println("#22 P1250 T900");//c
  delay(900);

  //PATA 4
  //Tiempo 4: inicio
  Serial.println("#16 P1000 T900");//a
  Serial.println("#17 P1000 T900");//b
  Serial.println("#18 P1600 T900");//c
  delay(900);
  


////DERECHA

//PATA 3
  //Tiempo 4: inicio
  Serial.println("#8 P2000 T900");//a
  Serial.println("#9 P1900 T900");//b
  Serial.println("#10 P1300 T900");//c
  delay(900);


  //PATA 2
  //Tiempo 4: inicio
  Serial.println("#4 P2000 T900");//a
  Serial.println("#5 P2300 T900");//b
  Serial.println("#6 P1700 T900");//c
  delay(900);


  //PATA 1
  //Tiempo 4: inicio
  Serial.println("#0 P2000 T900");//a
  Serial.println("#1 P1900 T900");//b
  Serial.println("#2 P1750 T900");//c  
  delay(900);
}


///////////////////////SETUP//////////////////////
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(500);
  
  pararse();
  delay(1000);
  pararseCaminar();
  delay(1000);
}

//////////////////////LOOP///////////////////////
void loop(){
 
////ETAPA 1
  //PATA 6
  //Tiempo 1: Levanta
  Serial.println("#24 P1500 T900");//a
  Serial.println("#25 P1800 T900");//b
  Serial.println("#26 P1100 T900");//c
  delay(900);

  //Tiempo 2: adelante-arriba
  Serial.println("#24 P1500 T900");//a
  Serial.println("#25 P1800 T900");//b
  Serial.println("#26 P1400 T900");//c
  delay(900);

  //Tiempo 3: adelante-abajo
  Serial.println("#24 P1000 T900");//a
  Serial.println("#25 P1100 T900");//b
  Serial.println("#26 P1400 T900");//c  


  //PATA 2
  //Tiempo 1: Levanta
  Serial.println("#4 P1350 T900");//a
  Serial.println("#5 P1600 T900");//b
  Serial.println("#6 P1700 T900");//c
  delay(900);

  
  //Tiempo 4: inicio
  Serial.println("#24 P1000 T900");//a
  Serial.println("#25 P1100 T900");//b
  Serial.println("#26 P1100 T900");//c
  //delay(900);
  
  //Tiempo 2: adelante-arriba
  Serial.println("#4 P1350 T900");//a
  Serial.println("#5 P1600 T900");//b
  Serial.println("#6 P1100 T900");//c
  delay(900);

  //Tiempo 3: adelante-abajo
  Serial.println("#4 P2000 T900");//a
  Serial.println("#5 P2300 T900");//b
  Serial.println("#6 P1100 T900");//c
  delay(900);

  //Tiempo 4: inicio
  Serial.println("#4 P2000 T900");//a
  Serial.println("#5 P2300 T900");//b
  Serial.println("#6 P1700 T900");//c
  delay(900);
  

  //delay(1000);

////ETAPA 2
  //PATA 4
  //Tiempo 1: levanta
  Serial.println("#16 P1500 T900");//a
  Serial.println("#17 P1700 T900");//b
  Serial.println("#18 P1600 T900");//c
  delay(900);

  //Tiempo 2: adelante-arriba
  Serial.println("#16 P1500 T900");//a
  Serial.println("#17 P1700 T900");//b
  Serial.println("#18 P1900 T900");//c
  delay(900);

  //Tiempo 3: adelante-abajo
  Serial.println("#16 P1000 T900");//a
  Serial.println("#17 P1000 T900");//b
  Serial.println("#18 P1900 T900");//c
  //delay(900);


  //PATA 1
  //Tiempo 1: Levanta
  Serial.println("#0 P1200 T900");
  Serial.println("#1 P1050 T900");
  Serial.println("#2 P1700 T900");
  delay(900);

  
  //Tiempo 2: adelante-arriba
  Serial.println("#0 P1200 T900");//a
  Serial.println("#1 P1050 T900");//b
  Serial.println("#2 P1550 T900");//c  
  //delay(900);

  //Tiempo 4: inicio
  Serial.println("#16 P1000 T900");//a
  Serial.println("#17 P1000 T900");//b
  Serial.println("#18 P1600 T900");//c
  delay(900);

  
  //Tiempo 3: adelante-abajo
  Serial.println("#0 P2000 T900");//a
  Serial.println("#1 P1900 T900");//b
  Serial.println("#2 P1550 T900");//c  
  delay(900);

  //Tiempo 4: inicio
  Serial.println("#0 P2000 T900");//a
  Serial.println("#1 P1900 T900");//b
  Serial.println("#2 P1750 T900");//c  
  delay(900);


////ETAPA 3
  //PATA 5
  //Tiempo 1: levanta
  Serial.println("#20 P1500 T900");//a
  Serial.println("#21 P1750 T900");//b
  Serial.println("#22 P1250 T900");//c
  delay(900);

  //Tiempo 2: adelante-arriba
  Serial.println("#20 P1500 T900");//a
  Serial.println("#21 P1750 T900");//b
  Serial.println("#22 P1700 T900");//c
  delay(900);


  //PATA 3
  //Tiempo 1: Levanta
  Serial.println("#8 P1400 T900");//a
  Serial.println("#9 P1200 T900");//b
  Serial.println("#10 P1300 T900");//c
  //delay(900);  

  //Tiempo 3: adelante-abajo
  Serial.println("#20 P1000 T900");//a
  Serial.println("#21 P1050 T900");//b
  Serial.println("#22 P1700 T900");//c
  delay(900);


  //Tiempo 2: adelante-arriba
  Serial.println("#8 P1400 T900");//a
  Serial.println("#9 P1200 T900");//b
  Serial.println("#10 P1000 T900");//c
  //delay(900);  
  
  //Tiempo 4: inicio
  Serial.println("#20 P1000 T900");//a
  Serial.println("#21 P1050 T900");//b
  Serial.println("#22 P1250 T900");//c
  delay(900);

  

  //Tiempo 3: adelante-abajo
  Serial.println("#8 P2000 T900");//a
  Serial.println("#9 P1900 T900");//b
  Serial.println("#10 P1000 T900");//c  
  delay(900);

  //Tiempo 4: inicio
  Serial.println("#8 P2000 T900");//a
  Serial.println("#9 P1900 T900");//b
  Serial.println("#10 P1300 T900");//c
  delay(900);

  
}



/*ORIGINAL
  ////IZQUIERDA
  //PATA 6
  //Tiempo 1: Levanta
  Serial.println("#24 P1500 T900");//a
  Serial.println("#25 P1800 T900");//b
  Serial.println("#26 P1100 T900");//c
  delay(900);

  //Tiempo 2: adelante-arriba
  Serial.println("#24 P1500 T900");//a
  Serial.println("#25 P1800 T900");//b
  Serial.println("#26 P1400 T900");//c
  delay(900);

  //Tiempo 3: adelante-abajo
  Serial.println("#24 P1000 T900");//a
  Serial.println("#25 P1100 T900");//b
  Serial.println("#26 P1400 T900");//c  
  delay(900);

  //Tiempo 4: inicio
  Serial.println("#24 P1000 T900");//a
  Serial.println("#25 P1100 T900");//b
  Serial.println("#26 P1100 T900");//c
  delay(900);

  //delay(1000);


  //PATA 4
  //Tiempo 1: levanta
  Serial.println("#16 P1500 T900");//a
  Serial.println("#17 P1700 T900");//b
  Serial.println("#18 P1600 T900");//c
  delay(900);

  //Tiempo 2: adelante-arriba
  Serial.println("#16 P1500 T900");//a
  Serial.println("#17 P1700 T900");//b
  Serial.println("#18 P1900 T900");//c
  delay(900);

  //Tiempo 3: adelante-abajo
  Serial.println("#16 P1000 T900");//a
  Serial.println("#17 P1000 T900");//b
  Serial.println("#18 P1900 T900");//c
  delay(900);

  //Tiempo 4: inicio
  Serial.println("#16 P1000 T900");//a
  Serial.println("#17 P1000 T900");//b
  Serial.println("#18 P1600 T900");//c
  delay(900);



  //PATA 5
  //Tiempo 1: levanta
  Serial.println("#20 P1500 T900");//a
  Serial.println("#21 P1750 T900");//b
  Serial.println("#22 P1250 T900");//c
  delay(900);

  //Tiempo 2: adelante-arriba
  Serial.println("#20 P1500 T900");//a
  Serial.println("#21 P1750 T900");//b
  Serial.println("#22 P1700 T900");//c
  delay(900);

  //Tiempo 3: adelante-abajo
  Serial.println("#20 P1000 T900");//a
  Serial.println("#21 P1050 T900");//b
  Serial.println("#22 P1700 T900");//c
  delay(900);

  //Tiempo 4: inicio
  Serial.println("#20 P1000 T900");//a
  Serial.println("#21 P1050 T900");//b
  Serial.println("#22 P1250 T900");//c
  delay(900);
  


////DERECHA

//PATA 3
  //Tiempo 1: Levanta
  Serial.println("#8 P1400 T900");//a
  Serial.println("#9 P1200 T900");//b
  Serial.println("#10 P1300 T900");//c
  delay(900);

  //Tiempo 2: adelante-arriba
  Serial.println("#8 P1400 T900");//a
  Serial.println("#9 P1200 T900");//b
  Serial.println("#10 P1000 T900");//c
  delay(900);

  //Tiempo 3: adelante-abajo
  Serial.println("#8 P2000 T900");//a
  Serial.println("#9 P1900 T900");//b
  Serial.println("#10 P1000 T900");//c  
  delay(900);

  //Tiempo 4: inicio
  Serial.println("#8 P2000 T900");//a
  Serial.println("#9 P1900 T900");//b
  Serial.println("#10 P1300 T900");//c
  delay(900);


  //PATA 2
  //Tiempo 1: Levanta
  Serial.println("#4 P1350 T900");//a
  Serial.println("#5 P1600 T900");//b
  Serial.println("#6 P1700 T900");//c
  delay(900);

  //Tiempo 2: adelante-arriba
  Serial.println("#4 P1350 T900");//a
  Serial.println("#5 P1600 T900");//b
  Serial.println("#6 P1100 T900");//c
  delay(900);

  //Tiempo 3: adelante-abajo
  Serial.println("#4 P2000 T900");//a
  Serial.println("#5 P2300 T900");//b
  Serial.println("#6 P1100 T900");//c
  delay(900);

  //Tiempo 3: inicio
  Serial.println("#4 P2000 T900");//a
  Serial.println("#5 P2300 T900");//b
  Serial.println("#6 P1700 T900");//c
  delay(900);


  //PATA 1
  //Tiempo 1: Levanta
  Serial.println("#0 P1200 T900");
  Serial.println("#1 P1050 T900");
  Serial.println("#2 P1700 T900");
  delay(900);

  //Tiempo 2: adelante-arriba
  Serial.println("#0 P1200 T900");//a
  Serial.println("#1 P1050 T900");//b
  Serial.println("#2 P1550 T900");//c  
  delay(900);

  //Tiempo 3: adelante-abajo
  Serial.println("#0 P2000 T900");//a
  Serial.println("#1 P1900 T900");//b
  Serial.println("#2 P1550 T900");//c  
  delay(900);

  //Tiempo 4: inicio
  Serial.println("#0 P2000 T900");//a
  Serial.println("#1 P1900 T900");//b
  Serial.println("#2 P1750 T900");//c  
  delay(900);
  
 */

