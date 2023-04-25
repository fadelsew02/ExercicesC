#include<stdio.h>
#include<stdlib.h>

int edrt(noskip);

int main(void)
{

    int res = 0;
    struct noskip
    {
        int x1 ;
        int y1 ;
    };

    typedef struct noskip noskip;

    noskip point;
    point.x = 9;
    point.y = 2;
    res = edrt(point);
    printf("%d",res);
    return 0;
}

int edrt(noskip point)
{
    struct coord
    {
        int x = 0;
        int y = 0;
    };
    if(point == coord)
        return 1

    return 0;
}