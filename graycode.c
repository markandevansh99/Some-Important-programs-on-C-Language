// Conversion of a binary number into Gray Code

#include <stdio.h>
#include <math.h>
#include<stdlib.h>
 
 
// This is the function which converts into gray code
int grayconversion(int binary)
{
    int n1, n2;
    int answer = 0, counter = 0;

    while (binary != 0)
    {
        n1 = binary % 10;
        binary = binary / 10;
        n2 = binary % 10;
        if ((n1 && !n2) || (!n1 && n2))
        {
            answer = answer + pow(10, counter);
        }
        counter++;
    }
    return answer;
}

// main function

int main ()
{
    int binary, graycode;

    printf(" Enter a binary number: ");
    scanf("%d", &binary);
    graycode = grayconversion(binary);
    printf("The gray code of %d is %d\n", binary, graycode);
    return 0;
}
