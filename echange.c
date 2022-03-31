#include <stdio.h>

void echange(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x, y;
    x = 5;
    y = 3;
    //passage par valeur

    printf("Avant l'échange x = %d, y = %d \n", x, y);
    echange(&x, &y);
    printf("Après l'échange x = %d, y = %d \n", x, y);
}



