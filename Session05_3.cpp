#include <stdio.h> 

 int main() {
    int n, sum = 0, i = 1;

    printf("Nhap vao mot so nguyen duong: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Moi ban nhap mot so nguyen duong!\n");
    } else {
        while (i <= n) {
            sum += i; 
            i++;      
        } 
        printf("Tong cac so tu 1 den %d la: %d\n", n, sum);
    }

    return 0; 
}

