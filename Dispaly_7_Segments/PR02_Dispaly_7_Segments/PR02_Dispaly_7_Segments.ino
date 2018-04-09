/**********************************************************************************
**                                                                               **
**                             DISPLAY 7 SEGMENTS                                **
**                                                                               **
** MOURAD EL FILALI                                                  12/03/2018  **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
const int led5  = 5;          
const int led6  = 6;          
const int led7  = 7;          
const int led8  = 8;          
const int led9  = 9;          
const int led10  = 10;         
const int led11  = 11;
const int led12  = 12;
const int buttonPin = 2;  



//********** Setup ****************************************************************
void setup()
{
  pinMode(led5, OUTPUT);     
  pinMode(led6, OUTPUT);     
  pinMode(led7, OUTPUT);     
  pinMode(led8, OUTPUT);     
  pinMode(led9, OUTPUT);     
  pinMode(led10, OUTPUT);     
  pinMode(led11, OUTPUT);
  pinMode(led12, OUTPUT);
  pinMode(buttonPin, INPUT);
  
  
}
//********** Loop *****************************************************************
void loop()
{
  if (digitalRead(buttonPin) == 1)

  {
    
  digitalWrite(led5, LOW);    
  digitalWrite(led6, LOW);    
  digitalWrite(led7, HIGH);    
  digitalWrite(led8, LOW);   
  digitalWrite(led9, LOW);    
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led12, HIGH);    

 }

 else

{
  digitalWrite(led5, LOW);    
  digitalWrite(led6, LOW);    
  digitalWrite(led7, HIGH);    
  digitalWrite(led8, LOW);   
  digitalWrite(led9, LOW);    
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led12, HIGH);    
 
  delay(1000);                  
  
  digitalWrite(led5, HIGH);     
  digitalWrite(led6, LOW);     
  digitalWrite(led7, HIGH);     
  digitalWrite(led8, LOW);     
  digitalWrite(led9, HIGH);     
  digitalWrite(led10, HIGH);     
  digitalWrite(led11, HIGH);
  digitalWrite(led12, HIGH);
  
  delay(1000);

  
  digitalWrite(led5, LOW);    
  digitalWrite(led6, LOW);    
  digitalWrite(led7, HIGH);    
  digitalWrite(led8, HIGH);    
  digitalWrite(led9, LOW);   
  digitalWrite(led10, LOW);
  digitalWrite(led11, HIGH);
  digitalWrite(led12, LOW);   
 
  
  delay(1000);                 
  
  digitalWrite(led5, LOW);     
  digitalWrite(led6, LOW);     
  digitalWrite(led7, HIGH);     
  digitalWrite(led8, LOW);     
  digitalWrite(led9, LOW);     
  digitalWrite(led10, HIGH); 
  digitalWrite(led11, HIGH);
  digitalWrite(led12, LOW);   
 
  
  delay(1000); 

  digitalWrite(led5, HIGH);    
  digitalWrite(led6, LOW);    
  digitalWrite(led7, HIGH);     
  digitalWrite(led8, LOW);     
  digitalWrite(led9, HIGH);     
  digitalWrite(led10, HIGH); 
  digitalWrite(led11, LOW);
  digitalWrite(led12, LOW);    

  delay(1000);

  digitalWrite(led5, LOW);     
  digitalWrite(led6, HIGH);     
  digitalWrite(led7, HIGH);     
  digitalWrite(led8, LOW);     
  digitalWrite(led9, LOW);    
  digitalWrite(led10, HIGH);
  digitalWrite(led11, LOW);
  digitalWrite(led12, LOW);     

  
  delay(1000);

  digitalWrite(led5, LOW);     
  digitalWrite(led6, HIGH);     
  digitalWrite(led7, HIGH);     
  digitalWrite(led8, LOW);     
  digitalWrite(led9, LOW);    
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led12, LOW);
  
  delay(1000);

  digitalWrite(led5, LOW);     
  digitalWrite(led6, LOW);     
  digitalWrite(led7, HIGH);     
  digitalWrite(led8, LOW);     
  digitalWrite(led9, HIGH);    
  digitalWrite(led10, HIGH);
  digitalWrite(led11, HIGH);
  digitalWrite(led12, HIGH);

  delay(1000);

  digitalWrite(led5, LOW);    
  digitalWrite(led6, LOW);    
  digitalWrite(led7, HIGH);    
  digitalWrite(led8, LOW);   
  digitalWrite(led9, LOW);    
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led12, LOW);

  delay(1000);

  digitalWrite(led5, LOW);    
  digitalWrite(led6, LOW);    
  digitalWrite(led7, HIGH);    
  digitalWrite(led8, LOW);   
  digitalWrite(led9, LOW);    
  digitalWrite(led10, HIGH);
  digitalWrite(led11, LOW);
  digitalWrite(led12, LOW);

   delay(1000);
    
  }
}
  
  
    
  
 
//********** Funcions *************************************************************


