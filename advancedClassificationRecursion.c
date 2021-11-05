#include <stdio.h>
#include "math.h"
#include "NumClass.h"

int check(int num,int len){
if(num>0){
return((int)pow((int)num%10,len)+check(num/10,len));
}
return 0;
}

int isArmstrong(int num ){
int x=(int)sizeof(num);
if(check(num,x-1)==num)
return num;

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


