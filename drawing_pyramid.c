#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Initializing variables.
    unsigned int height = 0;
    unsigned int b_spaces = 0;
    //Change the following value to 1 for the fullsized pyramid version (i.e. b_blocks = 1).
    unsigned int b_blocks = 2; //Number of building blocks to use.

    /*
    Prompt the user for the half-pyramid's height.
    Must be a non-negative integer no grater than 23.
    */
    do
    {
        height = get_int("Height: ");
    }
    while (height >= 24);

    //Building the half-pyramid
    if (height > 0 && height <= 23)
    {
        b_spaces = height - 1;
        for (int rounds = 0; rounds < height; rounds++)
        {
            printf("%.*s", b_spaces, "                        "); //Adding the blank spaces.
            printf("%.*s", b_blocks + rounds, "########################"); //Adding the building blocks.
            /* Uncomment this for fullsized pyramid version.
            printf("  ");
            printf("%.*s", b_blocks + rounds, "########################"); //Adding the building blocks.
            */
            printf("\n");
            b_spaces--;
        }
    }
}