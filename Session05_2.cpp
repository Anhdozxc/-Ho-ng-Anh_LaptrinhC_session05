#include <stdio.h> 

 int main() {
    int correctNumber = 7; 
    int number;       

    
    while (1) { 
        printf("Moi ban nhap vao mot so: ");
        scanf("%d", &number); 

        if (number == correctNumber) { 
            printf("Chinh xac! Ban da nhap dung so %d.\n", number);
            break; 
        } else { 
            printf("Sai roi! Ban hay nhap thu lai.\n");
        }
    }

    return 0; 
}


