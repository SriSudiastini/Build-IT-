#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,b;
    scanf ("%d", &a);
    scanf ("%d", &b);
    int jumlah =0;
    for (int i=a; i<=b; i++){
        jumlah +=i;
    }
    printf ("%d", jumlah);
    return 0;
}