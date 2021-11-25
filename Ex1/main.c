#include <stdio.h>
#include <math.h>
#include "NumClass.h"


int main(void){

	int minum=0,maxnum=0,temp=0;
	
	scanf("%d%d",&maxnum, &minum );
	if(minum>maxnum){
	temp=maxnum;
	maxnum=minum;
	minum=temp;
	}
	else{
	temp=minum;
	}
	maxnum++;
	printf("The Armstrong numbers are:");
	while(temp<maxnum) {
	if(isArmstrong(temp)){
	printf(" %d",isArmstrong(temp));
	}
	temp++;
	}



	printf("\nThe Palindromes are:");
	temp=minum;
	while(temp<maxnum){
	if(isPalindrome(temp)){
	printf(" %d",isPalindrome(temp));
	                  }
	temp++;
 	}


        printf("\nThe Prime numbers are:");
	temp=minum;
	while(temp<maxnum){
	if(isPrime(temp)){
	printf(" %d",isPrime(temp));
	                  }
	temp++;
 	}


	printf("\nThe Strong numbers are:");
	temp=minum;
	while(temp<maxnum){
	if(isStrong(temp)){
	printf(" %d",isStrong(temp));
	                  }
	temp++;
 	}
	printf("\n");
	return 0;
}

