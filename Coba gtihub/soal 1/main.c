#include <stdio.h>
#include <stdlib.h>

int main()
{
    char i;
    while(i != 'X'){
        printf("masukkan karakter apa saja: ");
        scanf("%c", &i);
        fflush(stdin);
    }
    printf("SELESAI \n");
    return 0;
}
