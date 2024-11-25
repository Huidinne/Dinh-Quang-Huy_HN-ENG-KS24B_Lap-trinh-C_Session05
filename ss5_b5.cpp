#include<stdio.h>
int main(){
	int n;
	for (n=1 ; n<=9; n++){
		printf("----------\n");
		for(int i=1; i<=10; i++){
			printf("%d x %d = %d\n",n,i,n*i);
		}
	}
}
