//Ask for user for text and grade the input using Coleman-Liau index. Print out the grade. 

#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    //asking for user input
    string text = get_string("Text: ");

    //stating variables
    int sentence = 0;
    int word = 1;
    int letter = 0;


    //counting sentences, words and letters
    for (int i = 0; text[i]; i++)
    {
        if (isalpha(text[i]))
        {
            letter++;
        }

        if (isspace(text[i]))
        {
            word++;
        }

        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentence++;
        }
    }

    //printing counting results
    printf("%i letter(s)\n", letter);
    printf("%i word(s)\n", word);
    printf("%i sentence(s)\n", sentence);

    //calculating letters and sentences per 100 words
    float L = (float)letter / (float)word * 100;
    float S = (float)sentence / (float)word * 100;

    //calc Coleman-Liau index, rounding it into grade
    float index = 0.0588 * L - 0.296 * S - 15.8;
    int grade = round(index);

    //printing grade
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }

    else if (index > 16)
    {
        printf("Grade 16+\n");
    }

    else
    {
        printf("Grade %i\n", grade);
    }
}
