/*Коминцев Денис 302ис-23*/
/* Задания.
4. Равны ли два массива?
*/
#include <stdio.h>
#define CAPACITY 100
int main() {
	int ar1[CAPACITY];
	int ar2[CAPACITY];
	int n1, n2;
	

	scanf("%d", &n1);
	int i;
	for (i = 0; i < n1; i = i + 1) {
		scanf("%d", &ar1[i]);
	}
	
	
	scanf("%d", &n2);
	for (i = 0; i < n2; i = i + 1) {
		scanf("%d", &ar2[i]);
	}
	
	
	int max = ar1[0];
	i = 1;
	while (i < n1) {
		if (ar1[i] > max) max = ar1[i];
		i = i + 1;
	}
	printf("max=%d\n", max);
	
	
	int rav = 1;
	if (n1 != n2) {
		rav = 0;
	} else {
		for (i = 0; i < n1; i = i + 1) {
			if (ar1[i] != ar2[i]) {
				rav = 0;
				break;
			}
		}
	}
	
	printf(rav ? "YES\n" : "NO\n");
	

	for (i = 0; i < n1; i = i + 1) {
		printf("%d%c", ar1[i], i < n1-1 ? '_' : '\n');
	}
	
	
	for (i = 0; i < n2; i = i + 1) {
		printf("%d%c", ar2[i], i < n2-1 ? '_' : '\n');
	}
	
	return 0;
}
