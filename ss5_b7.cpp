#include <stdio.h>

int main(){
    int a, b, UCLN;

    printf("Moi ban nhap vao so nguyen duong thu nhat: ");
    scanf("%d", &a);
    printf("Moi ban nhap vao so nguyen duong thu hai: ");
    scanf("%d", &b);

    while (b != 0){
        UCLN = a % b;
        a = b;
        b = UCLN;
    }

    printf("Uoc chung lon nhat la: %d\n", a);
}

