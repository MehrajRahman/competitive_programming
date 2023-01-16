#include <stdio.h>

int searchElement(int *p, int s, int e, int k){
	int mid = (s + e)/2;

	if(s > e ){
		return -1;
	}
	if(*(p + mid) == k){
		printf("Found!\n");
		return mid;
	}
	else if( *(p + mid) > k){
		e = mid - 1;
	}
	else{
		s = mid + 1;
	}

	return searchElement(p, s, e, k);
}


int main(){
	int n;

	scanf("%d", &n);
	int arr[n];

	printf("N is: %d\n", n);

	for(int i = 0; i < n ; i++){
		scanf("%d", &arr[i]);
	}

	int *p;

	p = arr;
	

	for(int i = 0 ; i < n - 1; i++){
		for(int j = i; j < n; j++){
			if(*(p + i) > *(p + j)){
				int test = *(p + i);
				*(p + i) = *(p+j);
				*(p + j) = test;
			}
		}
	}


	for(int i = 0; i < n; i++){
		printf("%d  ", *(p + i));
	}


	// Binary Search With Recursion

	printf("Enter The Element You Want to Search: ");
	int k;
	scanf("%d", &k);

	int start = 0;
	int end = n - 1;


	int index = searchElement(p, start, end , k);

	if(index != -1){
		printf("%d is found at array !", k );
	}

	return 0;
}