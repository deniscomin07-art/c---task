/*Коминцев Денис 302ис-23*/
/* Задания.
3. Является ли массив палиндромом?
*/
#include <stdio.h>
#define CAPACITY 100
int main() {
	int ar[CAPACITY];
	int n;
	scanf("%d", &n);
	int i;
	for (i = 0; i < n; i = i + 1) {
		scanf("%d", &ar[i]);
	}
	
	int max = ar[0];
	i = 1;
	while (i < n) {
		if (ar[i] > max) max = ar[i];
		i = i + 1;
	}
	printf("max=%d\n", max);
	
	int isPalindrome = 1;  
	for (i = 0; i < n / 2; i = i + 1) {
		if (ar[i] != ar[n - 1 - i]) {
			isPalindrome = 0; 
			break;
		}
	}
	
	if (isPalindrome) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	
	for (i = 0; i < n; i = i + 1) {
		printf("%d%c", ar[i], i < n-1 ? '_' : '\n');
		/*
		if (i < n - 1) printf("%d_", ar[i]);
		else printf("%d\n", ar[i]);
		*/
	}
	return 0;
}
