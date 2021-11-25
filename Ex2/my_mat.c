#include <stdio.h>
#include <math.h>
#include "my_mat.h"
#include <limits.h>
#define SIZE 10

	int Build(int arr [][SIZE] ){
		int temp;
		for(int i=0; i<SIZE;i++){
			for(int j=0 ; j<SIZE;j++){
				scanf("%d",&temp);
				arr[i][j]=temp;
						}
					}
		return 0;

						}

	int ShortRoad(int arr[][SIZE],int a , int b){
		int ans [SIZE] [SIZE] ;

			for(int i =0 ; i<SIZE ;i++){
				for(int j=0;j<SIZE;j++){
					ans[i][j]=arr[i][j];
						if(i!=j && arr[i][j]==0){
							ans[i][j]=INT_MAX;
									}
								}
							}


		for(int k =0 ; k<SIZE ;k++){
			for(int i =0 ; i<SIZE ;i++){
					for(int j=0;j<SIZE;j++){

						if((ans[i][j]>ans[i][k]+ans[k][j])&&(ans[i][k]!=INT_MAX)&&(ans[k][j]!=INT_MAX)){
						ans[i][j]=ans[i][k]+ans[k][j];
					     	   				}
							}

						}
					}



			if(ans[a][b]==0||ans[a][b]==INT_MAX){
				return -1;
					}
			return ans[a][b];
							}

	int CheckRoad(int arr[][SIZE],int a ,int b){
		if(arr[a][b]!=0){
		printf("True\n");
		return 1;
				}
		if(ShortRoad(arr,a,b)==-1){
		printf("False\n");
		return -1;
					}
		printf("True\n");
		return 1;
						}
