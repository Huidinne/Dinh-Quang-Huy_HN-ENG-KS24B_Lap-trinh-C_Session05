#include<stdio.h>
int main(){
	int n;
	printf("nhap vao mot so nguyn duong tu 1 den 10: ");
	scanf("%d",&n); 
	if(n>=1 && n<=10){
		for(int i = 1; i <= 10; i++){
			printf("%d x %d = %d\n", n, i, n*i);
		}
	}
}
