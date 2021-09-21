#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n;
	int count=0;
	printf("Enter the number of people : ");
	scanf("%d", &n);
	
	for (int i = n; i > 0; i--) {
		for (int j = 1; j <= i - 1; j++) { 
			count++; 
		}
	}

	printf("%d times", count);
	return 0;
}