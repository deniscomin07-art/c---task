/*Коминцев Денис 302ис-23*/
/* Задания.
2. Дано число X. Найти позицию первого вхождения или -1
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
	

	int X;
	scanf("%d", &X);
	
	int max = ar[0];
	i = 1;
	while (i < n) {
		if (ar[i] > max) max = ar[i];
		i = i + 1;
	}
	printf("max=%d\n", max);
	
	int position = -1;
	for (i = 0; i < n; i = i + 1) {
		if (ar[i] == X) {
			position = i;
			break;
		}
	}
	printf("%d\n", position);
	
	for (i = 0; i < n; i = i + 1) {
		printf("%d%c", ar[i], i < n-1 ? '_' : '\n');
		/*
		if (i < n - 1) printf("%d_", ar[i]);
		else printf("%d\n", ar[i]);
		*/
	}
	return 0;
}
