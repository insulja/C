#include<stdio.h>
int multi();

int main(void) {
    int i = 0, j = 1, cnt;
    printf("Enter Gugudan Number : ");
    scanf("%d", &i);

    for(cnt = 0; cnt < 9; cnt++) {
        printf("%d X %d = %d\n", i, j, multi(i, j));
        j++;
    }

    // while(j < 10) {
    //     printf("%d X %d = %d\n", i, j, multi(i, j));
    //    j++;
    return 0;
}

    int multi(i, j) {
    return i * j;
    }
