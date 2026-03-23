/*Коминцев Денис 302ис-23*/
/* задание. вводятся координаты x, y точек на плоскости.
найти максимальное расстояние до начала координат */
#include <stdio.h>

/*выводит квадрат расстояния*/
int main() {
	int n;
	scanf("%d", &n);
	
	int x, y;
	scanf("%d %d", &x, &y);
	
	int max = x * x + y * y;
	
	int i;
	for (i = 2; i <= n; i = i + 1) {
		scanf("%d %d", &x, &y);
		
		if (x * x + y * y > max) {
			max = x * x + y * y;
		}
	}
	
	printf("max = %d\n", max);
	return 0;
	
}





