
int flag=0;
int count=0;
int a[]={0,0,0,0,0,0,0,0,0};
int b[]={0,0,0,0,0,0,0,0,0};
void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);		//setup for 
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, INPUT);
  pinMode(10,INPUT);
  pinMode(11,INPUT);    
  pinMode(12,INPUT);
  pinMode(13,INPUT);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
}

void loop()
{ 
  digitalWrite(0,HIGH);
  digitalWrite(1,HIGH);
  digitalWrite(2,HIGH);
  delay(1);
  button(a,b);
  ticr(a);
  ticb(b);
}

void button(int a[],int b[]){
  
    if(a[0]==0 & b[0]==0){
    int read=digitalRead(9);
    if(read==1 && flag==1){
      a[0]=1;
      flag=0;
      count++;
    }else if(read==1 && flag==0){
      b[0]=1;
      flag=1;
      count++;
    }
  }
  
    if(a[1]==0 && b[1]==0){
    int read1=digitalRead(10);
    if(read1==1 && flag==1){
      a[1]=1;
      flag=0;
      count++;
    }else if(read1==1 && flag==0){
      b[1]=1;
      flag=1;
      count++;
    }
  }
    if(a[2]==0 && b[2]==0){
    int read2=digitalRead(11);
    if(read2==1 && flag==1){
      a[2]=1;
      flag=0;
      count++;
    }else if(read2==1 && flag==0){
      b[2]=1;
      flag=1;
      count++;
    }
  }
  if(a[3]==0 && b[3]==0){
    int read=digitalRead(12);
    if(read==1 && flag==1){
      a[3]=1;
      flag=0;
      count++;
    }else if(read==1 && flag==0){
      b[3]=1;
      flag=1;
      count++;
    }
  }
  
  if(a[4]==0 && b[4]==0){
    int read3=digitalRead(13);
    if(read3==1 && flag==1){
      a[4]=1;
      flag=0;
      count++;
    }else if(read3==1 && flag==0){
      b[4]=1;
      flag=1;
      count++;
    }
  }
  if(a[5]==0 && b[5]==0){
    int read=digitalRead(A0);
    if(read==1 && flag==1){
      a[5]=1;
      flag=0;
      count++;
    }else if(read==1 && flag==0){
      b[5]=1;
      flag=1;
      count++;
    }
  }
  if(a[6]==0 && b[6]==0){
    int read4=digitalRead(A1);
    if(read4==1 && flag==1){
      a[6]=1;
      flag=0;
      count++;
    }else if(read4==1 && flag==0){
      b[6]=1;
      flag=1;
      count++;
    }
  }
   if(a[7]==0 && b[7]==0){
    int read4=digitalRead(A2);
    if(read4==1 && flag==1){
      a[7]=1;
      flag=0;
      count++;
    }else if(read4==1 && flag==0){
      b[7]=1;
      flag=1;
      count++;
    }
  }
   if(a[8]==0 && b[8]==0){
    int read4=digitalRead(A3);
    if(read4==1 && flag==1){
      a[8]=1;
      flag=0;
      count++;
    }else if(read4==1 && flag==0){
      b[8]=1;
      flag=1;
      count++;
    }
  }
  
  if(count>4){
        if(check(a)==1){
          digitalWrite(0,LOW);
  		  digitalWrite(1,LOW);
 		  digitalWrite(2,LOW);
          digitalWrite(3,HIGH);
  		  digitalWrite(4,HIGH);
 		  digitalWrite(5,HIGH);
          delay(5000);
          for(int i=0; i<9;i++)
          {
            a[i]=0; b[i]=0;
          }
          digitalWrite(0,HIGH);
  		  digitalWrite(1,HIGH);
 		  digitalWrite(2,HIGH);
          digitalWrite(3,LOW);
  		  digitalWrite(4,LOW);
 		  digitalWrite(5,LOW);

        }
    if(check(b)==1){
          digitalWrite(0,LOW);
  		  digitalWrite(1,LOW);
 		  digitalWrite(2,LOW);
          digitalWrite(6,HIGH);
  		  digitalWrite(7,HIGH);
 		  digitalWrite(8,HIGH);
          delay(5000);
          for(int i=0; i<9;i++)
          {
            a[i]=0; b[i]=0;
          }
          digitalWrite(0,HIGH);
  		  digitalWrite(1,HIGH);
 		  digitalWrite(2,HIGH);
          digitalWrite(6,LOW);
  		  digitalWrite(7,LOW);
 		  digitalWrite(8,LOW);
        }
  }
}

void ticr(int a[]){
 
  if(a[0]==1){
  	digitalWrite(3, HIGH);
  	digitalWrite(0,LOW);
  }
  delay(1);
  if(a[0]==1){
  	digitalWrite(3, LOW);
    digitalWrite(0,HIGH);
  }
  if(a[1]==1){
  	digitalWrite(3, HIGH);
  	digitalWrite(1,LOW);
  }
  
  delay(1);
  if(a[1]==1){
  	digitalWrite(3, LOW);
  	digitalWrite(1,HIGH);
  }
  if(a[2]==1){
  	digitalWrite(3, HIGH);
  	digitalWrite(2,LOW);
  }
  
  delay(1);
  if(a[2]==1){
  	digitalWrite(3, LOW);
  	digitalWrite(2,HIGH);
  }
  if(a[3]==1){
  	digitalWrite(4, HIGH);
  	digitalWrite(0,LOW);
  }
  delay(1);
  if(a[3]==1){
  	digitalWrite(4, LOW);
  	digitalWrite(0,HIGH);
  }
  if(a[4]==1){
  	digitalWrite(4, HIGH);
  	digitalWrite(1,LOW);
  }
  
  delay(1);
  if(a[4]==1){
  	digitalWrite(4, LOW);
  	digitalWrite(1,HIGH);
  }
  if(a[5]==1){
  	digitalWrite(4, HIGH);
  	digitalWrite(2,LOW);
  }
 
  
  delay(1);
  if(a[5]==1){
  	digitalWrite(4, LOW);
  	digitalWrite(2,HIGH);
  }

  if(a[6]==1){
  	digitalWrite(5, HIGH);
  	digitalWrite(0,LOW);
  }
  
  delay(1);
  if(a[6]==1){
  	digitalWrite(5, LOW);
  	digitalWrite(0,HIGH);
  }
  if(a[7]==1){
  	digitalWrite(5, HIGH);
  	digitalWrite(1,LOW);
  }
  
  delay(1);
  if(a[7]==1){
  	digitalWrite(5, LOW);
  	digitalWrite(1,HIGH);
  }
  if(a[8]==1){
  	digitalWrite(5, HIGH);
  	digitalWrite(2,LOW);
  }
  delay(1);
   if(a[8]==1){
    digitalWrite(5, LOW);
 	digitalWrite(2,HIGH);
  }
}
void ticb(int b[]){
 
  if(b[0]==1){
  	digitalWrite(8, HIGH);
  	digitalWrite(0,LOW);
  }
  delay(1);
  if(b[0]==1){
  	digitalWrite(8, LOW);
    digitalWrite(0,HIGH);
  }
  if(b[1]==1){
  	digitalWrite(8, HIGH);
  	digitalWrite(1,LOW);
  }
  
  delay(1);
  if(b[1]==1){
  	digitalWrite(8, LOW);
  	digitalWrite(1,HIGH);
  }
  if(b[2]==1){
  	digitalWrite(8, HIGH);
  	digitalWrite(2,LOW);
  }
  
  delay(1);
  if(b[2]==1){
  	digitalWrite(8, LOW);
  	digitalWrite(2,HIGH);
  }
  if(b[3]==1){
  	digitalWrite(7, HIGH);
  	digitalWrite(0,LOW);
  }
  delay(1);
  if(b[3]==1){
  	digitalWrite(7, LOW);
  	digitalWrite(0,HIGH);
  }
  if(b[4]==1){
  	digitalWrite(7, HIGH);
  	digitalWrite(1,LOW);
  }
  
  delay(1);
  if(b[4]==1){
  	digitalWrite(7, LOW);
  	digitalWrite(1,HIGH);
  }
  if(b[5]==1){
  	digitalWrite(7, HIGH);
  	digitalWrite(2,LOW);
  }
  
  delay(1);
  if(b[5]==1){
  	digitalWrite(7, LOW);
  	digitalWrite(2,HIGH);
  }

  if(b[6]==1){
  	digitalWrite(6, HIGH);
  	digitalWrite(0,LOW);
  }
  
  delay(1);
  if(b[6]==1){
  	digitalWrite(6, LOW);
  	digitalWrite(0,HIGH);
  }
  if(b[7]==1){
  	digitalWrite(6, HIGH);
  	digitalWrite(1,LOW);
  }
  
  delay(1);
  if(b[7]==1){
  	digitalWrite(6, LOW);
  	digitalWrite(1,HIGH);
  }
  if(b[8]==1){
  	digitalWrite(6, HIGH);
  	digitalWrite(2,LOW);
  }
  
  delay(1);
  if(b[8]==1){
  	digitalWrite(6, LOW);
  	digitalWrite(2,HIGH);
  }
}
int check(int a[]){
  if(a[0]+a[1]+a[2]==3) return 1;
  else if(a[3]+a[4]+a[5]==3) return 1;
  else if(a[6]+a[7]+a[8]==3) return 1;
  else if(a[0]+a[3]+a[6]==3) return 1;
  else if(a[1]+a[4]+a[7]==3) return 1;
  else if(a[2]+a[5]+a[8]==3) return 1;
  else if(a[0]+a[4]+a[8]==3) return 1;
  else if(a[2]+a[4]+a[6]==3) return 1;
  else{
    return 0;
  }
}

