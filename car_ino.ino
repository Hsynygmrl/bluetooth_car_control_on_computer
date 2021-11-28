#define motorSolGeri 5
#define motorSagGeri 6
#define motorOE 8 // Motor pinlerini tanımlıyoruz.
#define motorSagIleri 10
#define motorSolIleri 9
#define motorAE 3
#define lazer1 13
#define lazer2 4
#define led1 12
#define led2 11
#define anaisik 2
int state;

void setup() {
    
    Serial.begin(9600);  
    pinMode(motorSolGeri, OUTPUT);
    pinMode(motorSagGeri, OUTPUT);
    pinMode(motorSagIleri, OUTPUT);
    pinMode(motorSolIleri, OUTPUT);    
    pinMode(motorOE, OUTPUT); 
    pinMode(motorAE, OUTPUT); 
     pinMode(led1,OUTPUT);
      pinMode(lazer2,OUTPUT);
       pinMode(lazer1,OUTPUT);
      pinMode(led2,OUTPUT);
      pinMode(anaisik,OUTPUT);
      
    // 9600 baud hızında bir seri port açalım


    
  /***********************İleri****************************/
  //Gelen veri 'F' ise araba ileri gider.
    
}
 
void loop() {
  if(Serial.available() > 0){     
      state = Serial.read();   
    }
    if (state == 'B') {
          digitalWrite(motorSolGeri, LOW); digitalWrite(motorSagGeri, LOW);
          digitalWrite(motorSagIleri, HIGH);      digitalWrite(motorSolIleri,HIGH); 
          digitalWrite(motorOE, HIGH);  digitalWrite(motorAE, HIGH);
        
    }
  /***********************Geri****************************/
  //Gelen veri 'B' ise araba geri gider.
    else if (state == 'F') {
   
      digitalWrite(motorSolGeri, HIGH); digitalWrite(motorSagGeri, HIGH);
        digitalWrite(motorSagIleri, LOW);      digitalWrite(motorSolIleri, LOW);
        digitalWrite(motorOE, HIGH);  digitalWrite(motorAE, HIGH);
       
    }
  /***************************Sol*****************************/
  //Gelen veri 'L' ise araba sola gider.
    else if (state == 'R') {
      digitalWrite(motorSolGeri, LOW); digitalWrite(motorSagGeri, HIGH);
        digitalWrite(motorSagIleri,LOW );     digitalWrite(motorSolIleri, LOW);
        digitalWrite(motorOE, HIGH);  digitalWrite(motorAE, HIGH); 
    }
  /***************************Sağ*****************************/
  //Gelen veri 'R' ise araba sağa gider
    else if (state == 'L') {
      digitalWrite(motorSolGeri, HIGH); digitalWrite(motorSagGeri, LOW);
        digitalWrite(motorSagIleri, LOW);      digitalWrite(motorSolIleri, LOW);
        digitalWrite(motorOE, HIGH);  digitalWrite(motorAE, HIGH);
    }
  
  /************************Stop*****************************/
  //Gelen veri 'S' ise arabayı durdur.
    else if (state == 'S'){
      digitalWrite(motorSolGeri, LOW); digitalWrite(motorSagGeri, LOW);
        digitalWrite(motorSagIleri, LOW);      digitalWrite(motorSolIleri, LOW);
        digitalWrite(motorOE, LOW);  digitalWrite(motorAE, LOW);
    }

       if (state == 'W'){
digitalWrite(lazer1,HIGH);
digitalWrite(lazer2,HIGH);
         
        }
        else if (state == 'W'){

     digitalWrite(lazer1,LOW);
digitalWrite(lazer2,LOW);
          }
          
         else if (state == 'U'){
        digitalWrite(led1,HIGH);
digitalWrite(led2,HIGH);
          
     
           
        }
          else if (state == 'u'){
           digitalWrite(led1,LOW);
digitalWrite(led2,LOW);
        }
         else if (state == 'V'){
       
 
        }
        else if (state == 'v'){
     
          
      }
        else if (state == 'X'){
               digitalWrite(anaisik,HIGH);

      }
        else if (state == 'x'){
                         digitalWrite(anaisik,LOW);

        }
        

}
  



 
