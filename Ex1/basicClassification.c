#include <stdio.h>
#include <math.h>
#include "NumClass.h"


int isStrong(int num){

int ans=0,temp=0,num2=num;
while(num2!=0){
temp = num2%10;
int i=factor(temp);
ans=ans+i;
num2=num2/10;
}

if(ans==num){
return num;
}
return 0;
}

int factor(int num)
{
int i,f=1;
for(i=1;i<=num;i++)
{
f=f*i;
}
return f;
}


int isPrime(int num){
if(num<1)
return 0;
	if(num==1||num==2)
	return num;
	if(num%2==0)
	return 0;
int i=3;
for(;i<num/2;i+=2){
     if(num%i==0){
      return 0;
                 }
}
return num;
}

