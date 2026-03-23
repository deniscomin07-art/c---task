/*Коминцев Денис 302ис-23*/
/* Задания.
5. Удалить из массива элемент с индексом idx
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
	

	int idx;
	scanf("%d", &idx);
	
	int max = ar[0];
	i = 1;
	while (i < n) {
		if (ar[i] > max) max = ar[i];
		i = i + 1;
	}
	printf("max=%d\n", max);
	

	if (idx >= 0 && idx < n) {
		for (i = idx; i < n - 1; i = i + 1) {
			ar[i] = ar[i + 1];
		}
		n = n - 1;  
	}
	

	for (i = 0; i < n; i = i + 1) {
		printf("%d%c", ar[i], i < n-1 ? '_' : '\n');
	}
	
	return 0;
}
