#include <stdio.h>
#define N 10000
int main() {
    int vetOriginal[N], vetInvert[N];
    int i;
    for(i = 0; i < N; i++) {
        //printf("Digite um número!\n");
        scanf("%d", &vetOriginal[i]);
    }
    for(i = 0; i < N; i++) {
        vetInvert[i] = vetOriginal[N-i-1];
        printf("\n%d", vetInvert[i]);
    }
    return 0;
}
