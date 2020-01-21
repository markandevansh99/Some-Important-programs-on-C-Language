#include <stdio.h>

int main()
{

    int size=5;


     int i, flag=0;
     char bin[size + 1], ones_Comp[size + 1];


    printf("Enter %d bit binary value: ", size);

    gets(bin);

   printf("\n");
    
  // This is the for loop which is responsible for the required conversion  
  for(i=0; i<size; i++)
    {
        if(bin[i] == '1')
        {
            ones_Comp[i] = '0';
        }
        else if(bin[i] == '0')
        {
            ones_Comp[i] = '1';
        }
        else
        {
            printf("Enter only 5 size input");
            flag = 1;
            break;
        }
    }

    ones_Comp[size] = '\0';     // null value at the end. It is important

    if(flag == 0)
    {
        printf("The binary number input by user := %s\n\n", bin);
        printf("Ones complement of that binary number := %s", ones_Comp);
        printf("\n");
    }

    return 0;
}

