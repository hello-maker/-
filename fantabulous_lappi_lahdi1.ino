int RED_LED = 3;
int GREEN_LED = 6;
int YELLOW_LED = 9;

float sensor = 0;
float volt = 0;
float celsius =0;

void setup() {
	Serial.begin(9600);
  	pinMode(RED_LED, OUTPUT);
  	pinMode(GREEN_LED, OUTPUT);
  	pinMode(YELLOW_LED, OUTPUT);
}

void loop() {
	
	sensor = analogRead(A0); 
	volt = (sensor * 5000) / 1024;
	volt = volt - 500;
	celsius = volt / 10;  

	
	
	if (celsius >= 0 && celsius <= 20) {
    	digitalWrite(YELLOW_LED, HIGH); 
    	delay(1000);
    	digitalWrite(YELLOW_LED, LOW);
		delay(1000);
      	digitalWrite(YELLOW_LED, HIGH); 
    	delay(1000);
    	digitalWrite(YELLOW_LED, LOW);
		delay(1000);
      	digitalWrite(YELLOW_LED, HIGH); 
    	delay(1000);
    	digitalWrite(YELLOW_LED, LOW);
		delay(1000);
      	digitalWrite(YELLOW_LED, HIGH); 
    	delay(1000);
    	digitalWrite(YELLOW_LED, LOW);
		delay(1000);
      	digitalWrite(YELLOW_LED, HIGH); 
    	delay(1000);
    	digitalWrite(YELLOW_LED, LOW);
		delay(1000);
    
  	} else {
		digitalWrite(YELLOW_LED, LOW);
		delay(2000);
	} 
  
	
	if (celsius >= 20 && celsius <= 25) {
		digitalWrite(GREEN_LED, HIGH); 
    	delay(1000);
    	digitalWrite(GREEN_LED, LOW);
		delay(1000);
      	digitalWrite(GREEN_LED, HIGH); 
    	delay(1000);
    	digitalWrite(GREEN_LED, LOW);
		delay(1000);
      	digitalWrite(GREEN_LED, HIGH); 
    	delay(1000);
    	digitalWrite(GREEN_LED, LOW);
		delay(1000);
      	digitalWrite(GREEN_LED, HIGH); 
    	delay(1000);
    	digitalWrite(GREEN_LED, LOW);
		delay(1000);
      	digitalWrite(GREEN_LED, HIGH); 
    	delay(1000);
    	digitalWrite(GREEN_LED, LOW);
		delay(1000);
	
	} else {
		digitalWrite(GREEN_LED, LOW);
		delay(1000);
	} 
  
	
	if (celsius >= 25 && celsius <= 30) {
		digitalWrite(RED_LED, HIGH); 
    	delay(1000);
    	digitalWrite(RED_LED, LOW);
		delay(1000);
      	digitalWrite(RED_LED, HIGH); 
    	delay(1000);
    	digitalWrite(RED_LED, LOW);
		delay(1000);
      	digitalWrite(RED_LED, HIGH); 
    	delay(1000);
    	digitalWrite(RED_LED, LOW);
		delay(1000);
      	digitalWrite(RED_LED, HIGH); 
    	delay(1000);
    	digitalWrite(RED_LED, LOW);
		delay(1000);
      	digitalWrite(RED_LED, HIGH); 
    	delay(1000);
    	digitalWrite(RED_LED, LOW);
		delay(1000);
	
	} else {
		digitalWrite(RED_LED, LOW);
		delay(1000);
	} 

	if (celsius >= 30) {
        digitalWrite(RED_LED, HIGH); 
    	delay(1000);
    	digitalWrite(RED_LED, LOW);
		delay(1000);	
        digitalWrite(YELLOW_LED, HIGH); 
    	delay(1000);
    	digitalWrite(YELLOW_LED, LOW);
		delay(1000);
      	digitalWrite(GREEN_LED, HIGH); 
    	delay(1000);
    	digitalWrite(GREEN_LED, LOW);
		delay(1000);
     	
    }
}