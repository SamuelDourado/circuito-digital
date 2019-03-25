void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  andDoTRabalho();
  orDoTRabalho();
  nandTRabalho();
  norTRabalho();
  xorDoTRabalho();
  xnorTRabalho();
  
}/*AND*/
void andDoTRabalho()
{
    int i = 0;
  
  	for(i = 0; i < 4; i++)
    {
      	if(i==0)
        {/* 0 0*/
         delay(2000);
          
        }
		if(i==1){
        /* 0  1*/
        	digitalWrite(12, HIGH);
            delay(2000);
            digitalWrite(12, LOW);
  	   		delay(2000);	
        }
        if(i==2){/*1  0*/
        	digitalWrite(13, HIGH);
            delay(2000);
            digitalWrite(13, LOW);
  	   		delay(2000);	
        }
      	if(i==3){/*1 1 */
        	digitalWrite(13, HIGH);
           	digitalWrite(12, HIGH);
           	digitalWrite(11, HIGH);
  	   		delay(2000);
          	digitalWrite(13, LOW);
          	digitalWrite(12, LOW);
         	digitalWrite(11, LOW);
        }
    }
}/*OR*/
void orDoTRabalho()
{
    int i = 0;
  
  	for(i = 0; i < 4; i++)
    {
      	if(i==0){/* 0 0*/
            delay(2000);
          
        }
		if(i==1){/* 0  1*/
        	digitalWrite(12, HIGH);
          	digitalWrite(11, HIGH);
            delay(2000);
          	digitalWrite(11, LOW);
            digitalWrite(12, LOW);
  	   		delay(2000);
        }
        if(i==2){/*1  0*/
        	digitalWrite(13, HIGH);
            digitalWrite(11, HIGH);
            delay(2000);
          	digitalWrite(11, LOW);
            digitalWrite(13, LOW);
          	delay(2000);
        }
      	if(i==3){/*1 1 */
        	digitalWrite(13, HIGH);
           	digitalWrite(12, HIGH);
           	digitalWrite(11, HIGH);
  	   		delay(2000);
          	digitalWrite(13, LOW);
          	digitalWrite(12, LOW);
         	digitalWrite(11, LOW);
          	delay(2000);
        }
    }
}
/*NAND*/
void nandTRabalho()
{
    int i = 0;
  
  	for(i = 0; i < 4; i++)
    {
      	if(i==0){/* 0  0*/
         	digitalWrite(11, HIGH);
  	   		delay(2000);
          	digitalWrite(11, LOW);
          	delay(2000);
        }
		if(i==1){/* 0  1*/
        	digitalWrite(12, HIGH);
            digitalWrite(11, HIGH);
  	   		delay(2000);
          	digitalWrite(11, LOW);
            digitalWrite(12, LOW);
  	   		delay(2000);	
        }
        if(i==2){/*1  0*/
        	digitalWrite(13, HIGH);
            digitalWrite(11, HIGH);
  	   		delay(2000);
          	digitalWrite(11, LOW);
            digitalWrite(13, LOW);
  	   		delay(2000);	
        }
      	if(i==3){/*1 1 */
        	digitalWrite(13, HIGH);
           	digitalWrite(12, HIGH);
  	   		delay(2000);
          	digitalWrite(13, LOW);
          	digitalWrite(12, LOW);
          	delay(2000);
         	
        }
    }
}
/*NOR*/
void norTRabalho()
{
    int i = 0;
  
  	for(i = 0; i < 4; i++)
    {
      	if(i==0){/* 0 0*/
            digitalWrite(11, HIGH);
  	   		delay(2000);
          	digitalWrite(11, LOW);
          	delay(2000);
        }
		if(i==1){/* 0  1*/
        	digitalWrite(12, HIGH);
            delay(2000);
            digitalWrite(12, LOW);
  	   		delay(2000);
        }
        if(i==2){/*1  0*/
        	digitalWrite(13, HIGH);
            delay(2000);
            digitalWrite(13, LOW);
          	delay(2000);
        }
      	if(i==3){/*1 1 */
        	digitalWrite(13, HIGH);
           	digitalWrite(12, HIGH);
  	   		delay(2000);
          	digitalWrite(13, LOW);
          	digitalWrite(12, LOW);
          	delay(2000);
        }
    }
}
/*XOR*/
void xorDoTRabalho()
{
    int i = 0;
  
  	for(i = 0; i < 4; i++)
    {
      	if(i==0){/* 0 0*/
          	delay(2000);
        }
		if(i==1){/* 0  1*/
        	digitalWrite(12, HIGH);
            digitalWrite(11, HIGH);
  	   		delay(2000);
          	digitalWrite(11, LOW);
            digitalWrite(12, LOW);
  	   		delay(2000);
        }
        if(i==2){/*1  0*/
        	digitalWrite(13, HIGH);
            digitalWrite(11, HIGH);
  	   		delay(2000);
          	digitalWrite(11, LOW);
            digitalWrite(13, LOW);
          	delay(2000);
        }
      	if(i==3){/*1 1 */
        	digitalWrite(13, HIGH);
           	digitalWrite(12, HIGH);
  	   		delay(2000);
          	digitalWrite(13, LOW);
          	digitalWrite(12, LOW);
          	delay(2000);
        }
    }
}/*XNOR*/
void xnorTRabalho()
{
    int i = 0;
  
  	for(i = 0; i < 4; i++)
    {
      	if(i==0){/* 0 0*/
          	digitalWrite(11, HIGH);
  	   		delay(2000);
          	digitalWrite(11, LOW);
        }
		if(i==1){/* 0  1*/
        	digitalWrite(12, HIGH);
  	   		delay(2000);
            digitalWrite(12, LOW);
  	   		delay(2000);
        }
        if(i==2){/*1  0*/
        	digitalWrite(13, HIGH);
  	   		delay(2000);
            digitalWrite(13, LOW);
          	delay(2000);
        }
      	if(i==3){/*1 1 */
        	digitalWrite(13, HIGH);
           	digitalWrite(12, HIGH);
  	   		digitalWrite(11, HIGH);
  	   		delay(2000);
          	digitalWrite(11, LOW);
          	digitalWrite(13, LOW);
          	digitalWrite(12, LOW);
          	delay(2000);
        }
    }
}