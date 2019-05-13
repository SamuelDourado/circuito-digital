//definindo as portas correspondentes
#define seg_6 6
#define seg_7 7
#define seg_8 8
#define seg_9 9
#define seg_10 10
#define seg_11 11
#define seg_12 12
//declaração das variáveis
int estBot1;
int estBot2;
int estBot3;
int estBot4;
bool val1;
bool val2;
bool val3;
bool val4;

void setup()
{
//pinos de entrada e saida
  pinMode(seg_6, OUTPUT);
  pinMode(seg_7, OUTPUT);
  pinMode(seg_8, OUTPUT);
  pinMode(seg_9, OUTPUT);
  pinMode(seg_10, OUTPUT);
  pinMode(seg_11, OUTPUT);
  pinMode(seg_12, OUTPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
}

void loop()
{
  estBot1 = digitalRead(2);
  estBot2 = digitalRead(3);
  estBot3 = digitalRead(4);
  estBot4 = digitalRead(5);
  /*O interruptor DIP é usado como se fosse a tabela vdd dos 
  numeros hexadecimal*/
  if (estBot1 == HIGH){
    val1 = true;
  }
  else{
  	val1 = false;
  }
  
  if (estBot2 == HIGH){
    val2 = true;
  }
  else{
  	val2 = false;
  }
  
  if (estBot3 == HIGH){
    val3 = true;
  }
  else{
  	val3 = false;
  }
  
  if (estBot4 == HIGH){
    val4 = true;
  }
  else{
  	val4 = false;
  }
/*vão acender conforme a tabela vdd do hexadecimal de 0 à 15*/
  /*Aparece 0*/
  	if(val1 == false && val2 == false && val3 == false && val4 == false){
		digitalWrite(seg_6, HIGH);
		digitalWrite(seg_7, HIGH);
		digitalWrite(seg_8, HIGH);
		digitalWrite(seg_9, HIGH);
		digitalWrite(seg_10, HIGH);
		digitalWrite(seg_11, HIGH);
		digitalWrite(seg_12, LOW);
		
  }/*Aparece 1*/
	if(val1 == true && val2 == false && val3 == false && val4 == false){
		digitalWrite(seg_6, LOW);
		digitalWrite(seg_7, HIGH);
		digitalWrite(seg_8, HIGH);
		digitalWrite(seg_9, LOW);
		digitalWrite(seg_10, LOW);
		digitalWrite(seg_11, LOW);
		digitalWrite(seg_12, LOW);
		
    }/*Aparece 2*/
	if(val1 == false && val2 == true && val3 == false && val4 == false){
		digitalWrite(seg_6, HIGH);
		digitalWrite(seg_7, HIGH);
		digitalWrite(seg_8, LOW);
		digitalWrite(seg_9, HIGH);
		digitalWrite(seg_10, HIGH);
		digitalWrite(seg_11, LOW);
		digitalWrite(seg_12, HIGH);
		
    }/*Aparece 3*/
	if(val1 == true && val2 == true && val3 == false && val4 == false){
		digitalWrite(seg_6, HIGH);
		digitalWrite(seg_7, HIGH);
		digitalWrite(seg_8, HIGH);
		digitalWrite(seg_9, HIGH);
		digitalWrite(seg_10, LOW);
		digitalWrite(seg_11, LOW);
		digitalWrite(seg_12, HIGH);
		
    }/*Aparece 4*/
	if(val1 == false && val2 == false && val3 == true && val4 == false){
		digitalWrite(seg_6, LOW);
		digitalWrite(seg_7, HIGH);
		digitalWrite(seg_8, HIGH);
		digitalWrite(seg_9, LOW);
		digitalWrite(seg_10, LOW);
		digitalWrite(seg_11, HIGH);
		digitalWrite(seg_12, HIGH);
		
    }/*Aparece 5*/
	if(val1 == true && val2 == false && val3 == true && val4 == false){
		digitalWrite(seg_6, HIGH);
		digitalWrite(seg_7, LOW);
		digitalWrite(seg_8, HIGH);
		digitalWrite(seg_9, HIGH);
		digitalWrite(seg_10, LOW);
		digitalWrite(seg_11, HIGH);
		digitalWrite(seg_12, HIGH);
		
    }/*Aparece 6*/
	if(val1 == false && val2 == true && val3 == true && val4 == false){
		digitalWrite(seg_6, HIGH);
		digitalWrite(seg_7, LOW);
		digitalWrite(seg_8, HIGH);
		digitalWrite(seg_9, HIGH);
		digitalWrite(seg_10, HIGH);
		digitalWrite(seg_11, HIGH);
		digitalWrite(seg_12, HIGH);
		
    }/*Aparece 7*/
	if(val1 == true && val2 == true && val3 == true && val4 == false){
		digitalWrite(seg_6, HIGH);
		digitalWrite(seg_7, HIGH);
		digitalWrite(seg_8, HIGH);
		digitalWrite(seg_9, LOW);
		digitalWrite(seg_10, LOW);
		digitalWrite(seg_11, LOW);
		digitalWrite(seg_12, LOW);
	
    }/*Aparece 8*/
	if(val1 == false && val2 == false && val3 == false && val4 == true){
		digitalWrite(seg_6, HIGH);
		digitalWrite(seg_7, HIGH);
		digitalWrite(seg_8, HIGH);
		digitalWrite(seg_9, HIGH);
		digitalWrite(seg_10, HIGH);
		digitalWrite(seg_11, HIGH);
		digitalWrite(seg_12, HIGH);
		
    }/*Aparece 9*/
	if(val1 == true && val2 == false && val3 == false && val4 == true){
		digitalWrite(seg_6, HIGH);
		digitalWrite(seg_7, HIGH);
		digitalWrite(seg_8, HIGH);
		digitalWrite(seg_9, HIGH);
		digitalWrite(seg_10, LOW);
		digitalWrite(seg_11, HIGH);
		digitalWrite(seg_12, HIGH);
		
    }/*Aparece 10=A*/
	if(val1 == false && val2 == true && val3 == false && val4 == true){
		digitalWrite(seg_6, HIGH);
		digitalWrite(seg_7, HIGH);
		digitalWrite(seg_8, HIGH);
		digitalWrite(seg_9, LOW);
		digitalWrite(seg_10, HIGH);
		digitalWrite(seg_11, HIGH);
		digitalWrite(seg_12, HIGH);
		
    }/*Aparece 11=b*/
	if(val1 == true && val2 == true && val3 == false && val4 == true){
		digitalWrite(seg_6, LOW);
		digitalWrite(seg_7, LOW);
		digitalWrite(seg_8, HIGH);
		digitalWrite(seg_9, HIGH);
		digitalWrite(seg_10, HIGH);
		digitalWrite(seg_11, HIGH);
		digitalWrite(seg_12, HIGH);
		
    }/*Aparece 12=C*/
	if(val1 == false && val2 == false && val3 == true && val4 == true){
		digitalWrite(seg_6, HIGH);
		digitalWrite(seg_7, LOW);
		digitalWrite(seg_8, LOW);
		digitalWrite(seg_9, HIGH);
		digitalWrite(seg_10, HIGH);
		digitalWrite(seg_11, HIGH);
		digitalWrite(seg_12, LOW);
		
    }/*Aparece 13=d*/
	if(val1 == true && val2 == false && val3 == true && val4 == true){
		digitalWrite(seg_6, LOW);
		digitalWrite(seg_7, HIGH);
		digitalWrite(seg_8, HIGH);
		digitalWrite(seg_9, HIGH);
		digitalWrite(seg_10, HIGH);
		digitalWrite(seg_11, LOW);
		digitalWrite(seg_12, HIGH);
		
    }/*Aparece 14=E*/
	if(val1 == false && val2 == true && val3 == true && val4 == true){
		digitalWrite(seg_6, HIGH);
		digitalWrite(seg_7, LOW);
		digitalWrite(seg_8, LOW);
		digitalWrite(seg_9, HIGH);
		digitalWrite(seg_10, HIGH);
		digitalWrite(seg_12, HIGH);
		digitalWrite(seg_12, HIGH);
		
    }/*Aparece 15=F*/
	if(val1 == true && val2 == true && val3 == true && val4 == true){
		digitalWrite(seg_6, HIGH);
		digitalWrite(seg_7, LOW);
		digitalWrite(seg_8, LOW);
		digitalWrite(seg_9, LOW);
		digitalWrite(seg_10, HIGH);
		digitalWrite(seg_11, HIGH);
		digitalWrite(seg_12, HIGH);
	
    }
  
}