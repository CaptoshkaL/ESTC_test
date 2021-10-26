#ifndef _3DVECTOR_
#define _3DVECTOR_

#define vec vector

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef struct Vector{
    double x;
    double y;
    double z;
}vector;

vector vectorInit();
vector vectorSet(double x, double y, double z);

vector vectorSum(vector A, vector B);
vector vectorSub(vector A, vector B);

double vectorDot(vector A, vector B);
vector vectorCross(vector A, vector B);

int vectorPrint(vector V);

#endif
