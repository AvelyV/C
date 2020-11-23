//Create that pyramid in C, albeit in text, using hashes (#) for bricks.
//Each hash is a bit taller than it is wide, so the pyramid itself is also be taller than it is wide.
//Let’s allow the user to decide just how tall the pyramid should be by first prompting them for a positive integer between, say, 1 and 8, inclusive.

#include <stdio.h>
#include <cs50.h>


int main(void)
{

    int height;

    do
    {
        //getting int with value from 1 to 8 from the user
        height = get_int("Pyramid's height: ");
       
    }
    while (height < 1 || height > 8);
     
     
    for (int i = 0; i < height; i++)
    {
        // printing out spaces, 1 less in every row
        for (int space = (height - i); space > 1; space--)
        {
            printf(" ");
        }
        //printing out #, 1 more in every row
        for (int hashes = 0; hashes < i + 1; hashes++)
        {
            printf("#");
        }
        printf("\n");
    }

}
