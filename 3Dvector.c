#include "3Dvector.h"


vector vectorInit()
{
    vector result;
    result.x = 0.0;
    result.y = 0.0;
    result.z = 0.0;

    return result;
}


vector vectorSet(double x, double y, double z)
{
    vector result;
    result.x = x;
    result.y = y;
    result.z = z;

    return result;
}


vector vectorSum(vector A, vector B)
{
    vector result;
    result.x = A.x + B.x;
    result.y = A.y + B.y;
    result.z = A.z + B.z;

    return result;
}


vector vectorSub(vector A, vector B)
{
    vector result;
    result.x = A.x - B.x;
    result.y = A.y - B.y;
    result.z = A.z - B.z;

    return result;
}


double vectorDot(vector A, vector B)
{
    return A.x * B.x + A.y * B.y + A.z * B.z;
}


vector vectorCross(vector A, vector B)
{
    vector result;
    result.x = A.y * B.z - A.z * B.y;
    result.y = - A.x * B.z - A.z * B.x;
    result.z = A.x * B.y - A.y * B.x;

    return result;
}


int vectorPrint(vector V)
{
    printf("<%.2f,% .2f,% .2f> \n", V.x, V.y, V.z);
    
    return 0;
}


