#include <stdio.h>
int main(){
	int n, i, product;
	for(;;){
		printf("Nhap vao so nguyen duong tu 1 den 10:");
	    scanf("%d", &n);
	    if(1<=n && n<=10){
	    	break;
		}
	}
	for(i =1 ; i <=10 ;i++){
		product = n * i;
		printf("%d * %d = %d\n", n, i, product);
	}                                                    
	return 0;
}
