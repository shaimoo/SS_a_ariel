#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include "my_prog.h"
#define TXT 1024
#define WORD 30

	int cal(char arr [] ){
	int result=0;
	for(int i = 0 ; i < WORD ; i++){
	if(arr[i]==0)
	return result;

	if((int)arr[i]>64 && (int)arr[i]<91)
		result+=(int)arr[i]-64;

	if((int)arr[i]>96 &&(int)arr[i]<123)
	result+=(int)arr[i]-96;

				}
	return result;
	}

	int calcult(char arr [], int j,int ans ){
	int result=0,conter=0;
	for(int i=j ; i < TXT ; i++){
		if((int)arr[i] >64 && (int)arr[i]<91)
			result+=(int)arr[i]-64;

		if((int)arr[i]>96 && (int)arr[i]<123)
		result+=(int)arr[i]-96;

		if(result==0)
		return 0;

		conter++;

		if(ans==result)
		return conter;

		if(result>ans)
		return 0;

		if(arr[i]==0)
		return -1;

				}
	return 0;
				}

	void gematria(char word []  ,char txt [] ){

		int ans = 0;
		ans=cal(word);
		bool end = false;
		for(int i=0; i<TXT;i++){

			if((int)txt[i]<97 && (int)txt[i]>124 && (int)txt[i]<65 && (int)txt[i]>90 ){
			continue;	}

			if(calcult(txt,i,ans)==-1)
			break;

			if(calcult(txt,i,ans) > 0 ){
				if((int)txt[i]<97 && (int)txt[i]>124 && (int)txt[i]<65 && (int)txt[i]>90 ){
				continue;	}

				if(txt[i]==0){
				break;}

				if(end!=false)
				printf("~");

				for(int j=i ; j < calcult(txt,i,ans)+i ;j++){

					printf("%c",txt[j]);			}
					end=true;

					}
							}




						}
		void revers(char word []){

		for(int i = 0 ; i < WORD ; i++ ){

		if((int)word[i]>96 && (int)word[i]<123){
			if(word[i]>97)
			word[i]=219-word[i];
			else
			word[i]=word[i]+25;
							}
		if((int)word[i]>64 && (int)word[i]<91){
			if(word[i]>65)
			word[i]=155-word[i];
			else
			word[i]=word[i]+25;


							}
						}

					}
		void revstr(char *str1)
		{
		    int i, len, temp;
		    len = strlen(str1);
		    for (i = 0; i < len/2; i++)
		    {
		        temp = str1[i];
		        str1[i] = str1[len - i - 1];
		        str1[len - i - 1] = temp;
		    }
		}

		int check(char word [] , char txt [] , int j , int size  ){
			int conter=0,i=0;
			if((int)word[i]!=(int)txt[j])
			return conter;
		else{
		i++;
		conter++;
		for(int k=j+1 ; k < TXT ; k++){

			if((int)txt[k]<97 && (int)txt[k]>124 && (int)txt[k]<65 && (int)txt[k]>90 ){
				continue;
				conter++; }
			if(word[i]!=txt[k])
			return 0;
			if(word[i]==txt[k]){
				i++;
				conter++;}

			if(i == size)
			return conter;

			if(txt[k] == 0 )
			return -1;



						}
					}
						return 0;	}

		void atbash(char word [] , char txt [] ){
		bool end=false;
		int size=strlen(word);
		int max=strlen(txt);
		char revword [WORD];
		revers(word);
		strcpy(revword,word);
		revstr(revword);
		for(int i=0 ;i < max ; i++ ){

			if(check(word,txt,i,size)>0){
				if(end==true){
				printf("~");
						}

				for(int j=i ; j< check(word,txt,i,size) + i ; j++){
					printf("%c",txt[j]);
					end=true;				}
						}
				if( check(revword,txt,i,size)>0){
					if(end==true){
					printf("~");
							}

					for(int j=i ; j<check(revword,txt,i,size) + i ; j++){
					printf("%c",txt[j]);
					end=true;				}


							}

						}
							}
		int find_index_of_char(char word [] , int word_len , char character ){
			for(int i=0 ; i < word_len ; i++){
			    if(word[i]==character)
				    return i;
            }
            return -1 ;
        }

        int is_additional_character(char word [] , int word_len, bool found_till_now [], char character ){
            for(int i=0 ; i < word_len ; i++){
                if(word[i]==character && found_till_now[i]==0)
                    return i;
            }
            return -1 ;
        }

		bool found_all_chars(bool *ans  , int size){
            for(int i = 0 ; i < size ; i++){
                if(ans[i]==0)
                    return 0;
            }
            return 1;
        }

        void print_word_and_ans(char word [], bool ans [] , int size, char txt [], int start_index, int end_index){
            return;
            printf("%s\n",word);
            for(int i = 0 ; i < size ; i++){
                printf("%d,",ans[i]);
            }
            for(int i = start_index ; i <= end_index ; i++){
                printf("%c",txt[i]);
            }

        }

		int find_word_to_print(char word [] , char txt [] , bool ans [], int word_len ,int txt_len,int start_index){

            for(int i = 0 ; i < word_len ; i++){
                ans[i]=0;
            }
			int counter=0;

			for(int i=start_index ; i<txt_len ; i++){
                //print_word_and_ans(word, ans, word_len, txt, start_index, i);
				if(found_all_chars(ans,word_len)){
				    return counter;
                }
				if(txt[i]==0 || txt[i]=='~')
					return 0;

                if(txt[i]==' ') {
                    if(i==start_index){
                        return 0;}
                    counter++;
                    continue;
                }
                int index_to_override = is_additional_character(word, word_len, ans, txt[i]);
                if(index_to_override > -1){
                    ans[index_to_override]=1;
                    counter++;
                }
                else{
                    return 0;
                }
            }
            return 0 ;
            }

		void  anagram(char word [] , char txt [] ){
		
            int word_len = strlen(word);
            int txt_len = strlen(txt);
            revers(word);

            bool should_print_delimeter=false;
            for(int i =0 ; i < txt_len-word_len ; i++){

                        bool* ans = (bool*) malloc(word_len * sizeof(bool));
                int print_len = find_word_to_print(word,txt,ans, word_len,txt_len,i);
                if(print_len>0){
                    if(should_print_delimeter!=false)
                        printf("~");
                    for(int j=i;j<i+print_len;j++){
                        printf("%c",txt[j]);
                    }
                    should_print_delimeter=true;
                }
            }
        }
