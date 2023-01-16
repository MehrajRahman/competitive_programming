#include <stdio.h>

int main(){
	int arr[4][5];

	for(int i = 0 ; i< 4; i++){
		for(int j = 0; j < 4 ; j++ ){
			scanf("%d", &arr[i][j]);

		}

	}



	for(int i = 0 ; i< 4; i++){
		int min = arr[i][0];
		int max = arr[i][0];
		for(int j = 0; j < 4 ; j++ ){
			if(arr[i][j] > max){
				max = arr[i][j];
			}
			if(arr[i][j] < min){
				min = arr[i][j];
			}
		}
		printf("%d", max - min);
		printf("\n");

	}

	return 0;
}
