#include <stdio.h>
#include <string.h>

int main()
{
    int myNumbers[] = {25,50,75,100};
    // myNumbers is a variable which is an array 

    printf("%d\n", myNumbers[0]); // Accessing the first element
    myNumbers[0] = 6; // Changing the element 

    printf("%zu\n", sizeof(myNumbers)); 
    // sizeof operator returns size of a variable in bytes 

    // Get the number of elements in an array 

    int count = sizeof(myNumbers)/sizeof(myNumbers[0]);
    printf("The number of elements in this array is %d\n", count);



    // LOOPING THROUGH AN ARRAY 

    char names[] = "Pushpal";
    printf("The letter at position 0 is %c\n", names[0]);  
    printf("My name is %s\n", names);

    int numbers[] = {25,50,75,100};
    int i;

    for (i = 0; i < 4; i++) {
        printf("%d\n", myNumbers[i]);
    }

    // Making a better loop
    int length = sizeof(numbers)/sizeof(numbers[0]);
    for (i=0; i < length; i++)
    {
        printf("%d\n", numbers[i]);
    }

    // REAL LIFE EXAMPLES 

    


    return 0;
}