#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "calc.h"

/*0からi番目の要素をランダムに選ぶ*/
void shuffle(int array[], int size)
{
    for (int i=0;i<size;i++)
    {
        int a=rand()%size;
        int b=array[i];
        array[i]=array[a];
        array[a]=b;
    }
}