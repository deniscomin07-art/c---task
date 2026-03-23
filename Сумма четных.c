/*Коминцев Денис 302ис-23*/
/* Задания.
1. Сумма четных*/

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
	
	int sum = 0;
	for (i = 0; i < n; i = i + 1) {
		if (ar[i] % 2 == 0) {
			sum = sum + ar[i];
		}
	}
	printf("%d\n", sum);
	
	/*int max = ar[0];
	i = 1;
	while (i < n) {
		if (ar[i] > max) max = ar[i];
		i = i + 1;
	}
	printf("max=%d\n", max);
	*/
	
	for (i = 0; i < n; i = i + 1) {
		printf("%d%c", ar[i], i < n-1 ? '_' : '\n');
		/*
		if (i < n - 1) printf("%d_", ar[i]);
		else printf("%d\n", ar[i]);
		*/
	}
	return 0;
}

