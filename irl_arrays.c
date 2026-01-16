#include <stdio.h>

int main() {

    // In real life array examples 

    int ages[] = {20,22,18,35,48,26,87,70};

    float avg, sum = 0;

    // Find the average of different ages :

    int length = sizeof(ages) / sizeof(ages[0]);

    int i;

    // Multidimensional arrays 

    int matrix[2][3] = {{1,2,3}, {4,5,6}};

    printf("%d", matrix[0][2]);

    return 0;

}