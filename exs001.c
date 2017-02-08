#include<stdio.h>
int star(int i, char c);

int main(void) {
    int num;
    char j = '*';
    printf("Enter Number : ");
    scanf("%d", &num);

    for(int cnt = 0; cnt > num; cnt++) {
        printf("%c", star(cnt, j));
    }
    return 0;
}

int star(int i, char c) {
    c = '*';
    return i * c;
}
