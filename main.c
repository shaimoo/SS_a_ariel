#include <stdio.h>
#include <math.h>
#include "my_mat.h"
#define SIZE 10


int main(){
        int a,b;
        char word;
        int arr [SIZE][SIZE];
        while(1) {
        scanf("%c",&word);
        switch(word)
        {

        case 'A':{
        Build(arr);
        break;
		}

        case'B':{
	scanf("%d%d",&a,&b);
	CheckRoad(arr,a,b);
        break;
		}
        case 'C':{
        scanf("%d%d",&a,&b);
       if(ShortRoad(arr,a,b)==-1){
	printf("-1\n");
	break;
				}
	printf("%d\n",ShortRoad(arr,a,b));
        break;
		}
        case 'D':
        return 0;
        }

        }
        return 0;
}






