#define ir1 8
#define ir2 7
#define bulb 5
int count=0;
void setup()
{
  pinMode(ir1,INPUT);
  pinMode(ir2,INPUT);
  pinMode(bulb,OUTPUT);
  Serial.begin(9600);
  
  }
void loop()
{
    
  if(!digitalRead(ir1))
  { delay(500);
    if(!digitalRead(ir2))
  {
    Serial.println("Entering the room");
    count=count+1;
    Serial.println("Number of people in the room:");
    Serial.println(count);}
     if (count==0){
    digitalWrite(bulb,LOW); }
    else
    {
      digitalWrite(bulb,HIGH);}

    }

  else if(!digitalRead(ir2))
  { delay(500);
    if(!digitalRead(ir1))
  {
    Serial.println("Exiting the room");
    count=count-1;
    Serial.println("Number of people in the room:");
    Serial.println(count);}
     if (count==0){
    digitalWrite(bulb,LOW);  }
    else
    {
      digitalWrite(bulb,HIGH);}
 
    }
   
  
 
  }
