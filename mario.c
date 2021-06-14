#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Height:");
    }
    while (n < 1 || n > 8);
    // i reps number of rows
    for (int i = 0; i < n; i++)
    {
        //j reps number of #
        for (int j = 0; j < n; j++)
        {
            if (i + j >= n -1)
            printf("#");
            {
              // aligns space to the right 
                if (i + j < n -1)
                printf(" ");
            }
            
        }
        printf("\n");
    }
    
}