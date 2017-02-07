#include<stdio.h>
int multi(int i, int j);

int main(void) {
    int num;
    printf("Enter Gugudan Number : ");
    scanf("%d", &num);

    for(int i = 1; i < 10; i++) {
        printf("%d X %d = %d\n", num, i, multi(num, i));
    }

    return 0;
}

int multi(int i, int j) {
    return i * j;
}
