/*Коминцев Денис 302ис-23*/
/* 2. strcat. Вводятся две строки. "Склеить" их,
то есть дописать вторую в клнец первой
sample input: 
Hello,
world
sample output:
Hello, world;
*/


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
	

	s1[len1] = ' ';
	s1[len1 + 1] = '\0';
	len1 = len1 + 1;
	

	int i;
	for (i = 0; i <= len2; i = i + 1) {
		s1[len1 + i] = s2[i];
	}
	

	printf("%s\n", s1);
	
	return 0;
}
