/*Коминцев Денис 302ис-23*/
/* 1. strcpy Вводятся 2 строки Записать вторую на место
первой*/
#include <stdio.h>
#include <string.h>
#define SIZE 1000
int main() {
	char s1[SIZE] = {0};
	char s2[SIZE] = {0};
	

	scanf("%s", s1);
	scanf("%s", s2);
	

	int len1 = strlen(s1);
	int len2 = strlen(s2);
	printf("len1=%d len2=%d\n", len1, len2);
	
	
	int i;
	for (i = 0; i <= len2; i = i + 1) {
		s1[i] = s2[i];
	}
	

	printf("Результат: %s\n", s1);
	
	return 0;
}
