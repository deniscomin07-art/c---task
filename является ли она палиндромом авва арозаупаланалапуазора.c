/*Коминцев Денис 302ис-23*/
/*Является ли она палиндромом?
ABBA, АРОЗАУПАЛАНАЛАПУАЗОРА, 121, 22, 1 */
#include <stdio.h>
#include <string.h>
#define SIZE 1000
int main() {
	char s[SIZE] = {0};
	scanf("%s", s);
	
	int len = strlen(s);
	int isPalindrome = 1;
	
	for (int i = 0; i < len / 2; i = i + 1) {
		if (s[i] != s[len - 1 - i]) {
			isPalindrome = 0;
			break;
		}
	}
	
	if (isPalindrome) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	
	return 0;
}
