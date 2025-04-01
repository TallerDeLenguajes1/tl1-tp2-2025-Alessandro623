// codigo a completar
#define N 20
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int i;
    double vt[N];

    for(i = 0;i<N; i++)
    {
        vt[i]=1+rand()%100;
    }
    
    double *recorrer = vt;
    
    for (int i = 0; i < N; i++)
    {
        printf("%.2f\n", vt[i]);
    }

    return 0;
}