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

	int mid ;
 
	if(l % 2 == 0){
		mid = (l - 2) / 2;
	}
	else{
		mid = (l - 2) / 2 + 1;
	}


	int status = checkPalindrome(p, 0,  l - 2, mid );
	if(status){
		printf("%s\n", "Palindrome!!");

	}else{
		printf("%s\n", "Not Palindrome!!");
	}







	return 0;
}