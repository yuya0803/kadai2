#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../include/calc2.h"

int main()
{
    int size;

    srand((int)time(NULL));
    
    int list[16]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    shuffle(list,16);

    for(int i=0;i<16;i++)
    {
        printf("%d,",list[i]);
    }
    
    return 0;
}

