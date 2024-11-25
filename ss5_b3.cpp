#include<stdio.h>
int main(){
	int n;
	printf("nhap vao mot so nguyen duong: ");
	scanf("%d",&n);
	int sum=0;
	for(int i=1; i<=n; i++){
		sum+=i;
	}
	printf("tong cua cac chu so tu 1 den %d la: %d",n,sum);
}
