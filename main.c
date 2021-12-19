#include <stdio.h>
#include <math.h>
#include <string.h>
#include "my_prog.h"
#define WORD  30
#define TXT  1024

int main(){
        char word[WORD];
	char txt[TXT];
        scanf("%[^\n^\t^' ']s",word);
        scanf("%[^EOF]s",txt);
	printf("Gematria Sequences: ");
	gematria(word,txt);
	printf("\nAtbash Sequences: ");
	atbash(word,txt);
	printf("\nAnagram Sequences: ");
	anagram(word,txt);
}







