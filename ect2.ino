const int lpin =18;
const int rpin=11;
int val=0;
int preval=0;

void setup() {
  
pinMode(18,INPUT);
pinMode(11,OUTPUT);

}

void loop() {
  
  val=analogRead(lpin);
  
   if(val-preval>0)
   
   { if(val>0.8)
   
   digitalWrite(rpin,HIGH);
   
   else
   
   digitalWrite(rpin,LOW);
   }

 if(val-preval<0)
 
   { if(val<0.7)
   
   digitalWrite(rpin,LOW);
   
   else
   
   digitalWrite(rpin,HIGH);
   }

   preval=val;
   
   val=0;

}

