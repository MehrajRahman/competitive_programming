#include <stdio.h>
#include <string.h>

int checkPalindrome(char *p , int s, int l, int mid){
	if(*(p+s) != *(p + l) ){
		return 0;
	}
	else if(l == mid){
		return 1;
	}
	else{
		return checkPalindrome(p ,s + 1,  l - 1, mid);
	}

	 
}


int main(){
	char test[200];

	fgets(test, sizeof test, stdin);

	int l = strlen(test);

	char *p;

	p = test;

	for(int i = 0; i < l  - 1; i++ ){
		printf("%d ", *(p+i));
		if(*(p+i) >= 97 && *(p + i) <= 122){
			*(p+i) = (*(p+i) - 32);
			
		}
	}

	for(int i = 0; i < l  - 1; i++ ){
		printf("%c", *(p+i));
		
	}



	// REMOVE THE SPACE!!







	return 0;
}