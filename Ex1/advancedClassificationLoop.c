#include <stdio.h>
#include <math.h>
#include "NumClass.h"

int isPalindrome(int num ){
int k,ans=0,temp;
temp=num;
while(temp>0){
k=temp%10;
ans=(ans*10)+k;
temp=temp/10;
}
if(num==ans){
return ans;
           }
return 0;
}

int isArmstrong(int num){
int r=0, ans=0,temp,size=0;
temp=num;
while(temp!=0){
size++;
temp/=10;
}
temp=num;
while(temp>0){
r=temp%10;
ans+=pow(r,size);
temp/=10;
}
if(num==ans)
return num;

return 0;
}

