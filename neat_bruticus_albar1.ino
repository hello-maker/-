int LED = 3;
int a=0;
int b=0;
int c=0;
void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{ 
  int cds = analogRead(A0);
  cds = map(cds, 0, 679, 0, 255);
  if (0<cds && cds<125) { 	
    Serial.print("A");
    while(a<5){
  	  a++;
  	  analogWrite(LED,51);
      delay(1000);
      analogWrite(LED,0);
      delay(1000);
    }
    
  }
  if (125<cds && cds<200) {  
    Serial.print("B");
    while(b<5){
  	  b++;
  	  analogWrite(LED, 127);  
      delay(1000);
      analogWrite(LED,0);
      delay(1000);
    } 	
  }
  if (200<cds && cds<255)  {
  	Serial.print("C");
    while(c<5){
  	  c++;
  	  analogWrite(LED, 255); 
      delay(1000);
      analogWrite(LED,0);
      delay(1000);
    } 	
    
  }	
Serial.print(cds);
Serial.print("\n ");
}  