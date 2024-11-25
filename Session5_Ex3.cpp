#include <stdio.h>
int main(){
	int number, sum = 0;
	printf("So can tinh tong cac chu so: ");
	scanf("%d", &number);
	while(number != 0){
		sum += number % 10;
		number /= 10;
	}
	printf("Tong chu so : %d\n", sum);
	return 0;
}
