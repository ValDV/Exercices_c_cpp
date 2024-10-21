#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

typedef struct {
    double x, y, z;
} Point3D;

int main()
{
    Point3D tab[100];

    for (int i = 0; i < 100; i++)
    {
        tab[i].x = 0;
        tab[i].y = 0;
        tab[i].z = 0;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("Point %d : \n", i + 1);
        printf("X = ");
        scanf("%.2lf", tab[i].x);
        printf("Y =");
        scanf("%.2lf", tab[i].y);
        printf("Z =");
        scanf("%.2lf", tab[i].z);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("Point %d : x = %.2lf, y = %.2lf, z = %.2lf\n",
            i + 1,
            tab[i].x,
            tab[i].y,
            tab[i].z );
    }
}
