#include <stdio.h>

int main() {
    int a, b;
    while(1){
    printf("");
    scanf("%d %d", &a, &b);

    if (a <= b) {
            printf("%d %d \n", a, b);
    } else if (b <= a) {
            printf("%d %d\n", b, a);
        }
    }

    return 0;
}