#include <stdio.h> 

 int main() {
    int a, b, i, ucln = 1; 

    printf("Moi ban nhap vao so nguyen duong thu nhat: ");
    scanf("%d", &a);
    printf("Moi ban nhap vao so nguyen duong thu hai: ");
    scanf("%d", &b);   
    
    if (a <= 0 || b <= 0) {
        printf("Vui long ban nhap hai so nguyen duong!\n");
    } else {
        
        int min;
        if (a < b) {
            min = a;
        } else {
            min = b;
        }
       
        for (i = 1; i <= min; i++) { 
            if (a % i == 0 && b % i == 0) { 
                ucln = i; 
            }
        }      
        printf("Uoc chung lon nhat cua %d va %d la: %d\n", a, b, ucln);
    }
    return 0; 
}

