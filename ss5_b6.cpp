#include<stdio.h>
int main(){
	int a, b;
	printf("nhap vao hai so bat ki: ");
	scanf("%d %d",&a, &b);
	
	printf("%20s\n","CALCULATOR");
	printf("1.Tong 2 so\n");
	printf("2.Hieu 2 so\n");
	printf("3.Tich 2 so\n");
	printf("4.Thuong 2 so\n");
	printf("5.Thoat\n");
	int chose_number;
	printf("%15s\n","Lua chon cua ban la:");
	scanf("%d",&chose_number);
	
	switch(chose_number){
		case 1:{
			int sum = a + b;
			printf("Tong hai so la: %d", sum);
			break;
		}
		case 2:{
			int minus = a - b;
			printf("Hieu hai so la: %d", minus);
			break;
		}
		case 3:{
			int multi = a * b;
			printf("Tich hai so la: %d", multi);
			break;
		}
		case 4:{
			int divide =a / b;
			printf("Thuong hai so la : %d", divide);
			break;
		}
		case 5:
			break;
	}
}
