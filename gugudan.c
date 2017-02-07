#include<stdio.h>

int main(void) {
    int i = 0, j = 1;
    printf("Enter Gugudan Number : ");
    scanf("%d", &i);

    while(j < 10) {
        printf("%d X %d = %d\n", i, j, i * j);
        j++;
    }
    return 0;
}
