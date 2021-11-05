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
int r=0, ans=0,temp,k;
temp=num;
while(temp>0){
k=temp%10;
r=power(k,(int)sizeof(num));
ans=ans+r;
temp=temp/10;
}
if(ans==num)
{
return num;
}
return 0;
}

int power(int num,int p){
int ans=1;
while(p>0)
{
ans=ans*num;
p--;
}
return ans;
}
