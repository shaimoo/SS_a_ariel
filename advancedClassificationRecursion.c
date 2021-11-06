#include <stdio.h>
#include "math.h"
#include "NumClass.h"


int isArmstrong(int num){
int temp=num,size=0,ans=0;
while(temp!=0){
size++;
temp/=10;
}
ans=check(num,size);
if(ans==num)
return num;

return 0;
}

	int check(int num,int len){
		 int r;
		if(num>0){
		r=num%10;
		return pow(r,len)+check(num/10,len);
		}
		return 0;
		}


int revers(int num){
int r = (int)log10(num);
if(num==0)
return 0;

return ((num%10*(int)pow(10,r))+revers(num/10));
}

int isPalindrome(int num){
if(num==revers(num))
return num;

return 0;
}


