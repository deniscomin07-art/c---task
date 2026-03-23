#include <stdio.h>
//
// задание сделать для фиксированного числа переменных
// решить, например, для 4-х и 5-и значных чисел
int main(void) {
	
	int a = 2;
	int s = 2;
	a = 12;
	int c0 = a % 10;
	int c1 = a / 10;
	s = c0 + c1;
	printf("Symma cifr chisla %d: %d\n", a, s);
	
	a = 234;
	c0 = a % 10;
	c1 = a % 100 / 10;
	int c2 = a / 100;
	s = c0 + c1 + c2;
	printf("Symma cifr chisla %d: %d\n", a, s);
	
	
	int b = 1234;
	int d0 = b % 10;           
	int d1 = b % 100 / 10;     
	int d2 = b % 1000 / 100;   
	int d3 = b / 1000;         
	int s4 = d0 + d1 + d2 + d3;
	printf("Symma cifr chisla %d: %d\n", b, s4);
	
	
	int c = 12345;
	int e0 = c % 10;            
	int e1 = c % 100 / 10;      
	int e2 = c % 1000 / 100;    
	int e3 = c % 10000 / 1000;  
	int e4 = c / 10000;        
	int s5 = e0 + e1 + e2 + e3 + e4;
	printf("Symma cifr chisla %d: %d\n", c, s5);
	
	return 0;
}
