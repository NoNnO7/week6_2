#include <stdio.h>
int main(){
    int n, i, j;
    scanf_s("%d", &n);
    i = n - 1;
    j = 1;
    for (int y = 1; y <= n; y++) {
        for (int x = 1; x <= i; x++) {
            printf(" ");
        }
        for (int i = 1; i <= j; i++)
            printf("*");
        j = j + 2;
        i--;
        printf("\n");
    }
    return 0;
}