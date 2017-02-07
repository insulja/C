#include<stdio.h>
int multi();

int main(void) {
    int i = 0, j = 1;
    printf("Enter Gugudan Number : ");
    scanf("%d", &i);

    while(j < 10) {
        printf("%d X %d = %d\n", i, j, multi(i, j));
        j++;
    }
    return 0;
}
    int multi(i, j) {
    return i * j;
    }
