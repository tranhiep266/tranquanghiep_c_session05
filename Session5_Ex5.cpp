#include <stdio.h>
int main(){
	int n, i, product;
	for(i = 1 ; i <=9;i++){
		for(n=1;n<=10;n++){
			product = n * i;
		printf("%d * %d = %d\n", i, n, product);
		}
		printf("\n");
	}
	return 0;
}
