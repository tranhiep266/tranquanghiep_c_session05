#include <stdio.h>
int main(){
	int number = 25, i;
	for(;;){
		printf("Nhap vao dung so:");
		scanf("%d", &i);
		if(i == number){
			printf("Dung so");
			break;
		}else{
			printf("Sai so\n");
		}
	}
	return 0;
}
