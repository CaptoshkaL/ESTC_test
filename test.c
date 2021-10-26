
#include "3Dvector.h"

int main(int argc, char const *argv[])
{

    vector A = vectorSet(1.0, 2.0, 0.0); 
    vector B = vectorSet(0.0, 1.0, 3.0);


    printf("Vector A,B\n");
    vectorPrint(A); 
    vectorPrint(B); 

        
    printf("\nSUM, SUB, DOT, CROSS\n");
    printf("<Sum> ");
    vectorPrint(vectorSum(A, B));  // < 1.00, 3.00, 3.00> 
    printf("<Sub> ");
    vectorPrint(vectorSub(A, B));  // < 1.00, 1.00,-3.00> 
    printf("Dot ");
    printf("% .2f\n",vectorDot(A, B)); // 2.00
    printf("<Cross> ");
    vectorPrint(vectorCross(A, B));  // < 6.00,-3.00, 1.00> 

    return 0;
}
