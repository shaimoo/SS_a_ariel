#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "my_prog.h"
#include <unistd.h>
#define WORD  30
#define TXT  1024

int main(){
    char word [WORD]={0};
    char txt [TXT]={0};
    char x = '\0';

    //scan the word by char until \n or \t ot ' '
    for(int i = 0 ; i < WORD ; i++){
        scanf("%c",&x);
    if(x==' '|| x=='\n' || x=='\t'){break;}
        word[i]=x;
    }
    //scan the txt until char '~'
    for(int i = 0 ; i < TXT ; i++){
        scanf("%c",&x);
        if(x=='~'){  txt[i]=x;
            break;}
        txt[i]=x;
    }

    printf("Gematria Sequences: ");
	gematria(word,txt);
	printf("\nAtbash Sequences: ");
	atbash(word,txt);
	printf("\nAnagram Sequences: ");
	anagram(word,txt);
}







