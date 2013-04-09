/****************************************************************************
 * letters.c
 * Computer Science 50
 * Nataliia Vynogradenko
 *
 * Printing letters with different cases
 ***************************************************************************/
 
 #include <stdio.h>
 #include <cs50.h>
 #include <string.h>
 
int main(void)
{
    // ask user for phrase
    bool userInputIsCorrect = false;
    string phrase = "";
    do 
    {
        printf("Print any message using lovercase letters:\n");
        phrase = GetString();
        for (int i = 0; i < strlen(phrase) ; i++) 
        {   
            if (!CurrentCharIsInLowercase(phrase[i])) 
            {
                break;
            }
            else
            {
                userInputIsCorrect = true;
            }

        }
    }
    while (!userInputIsCorrect);
    
    for (int i = 0; i < strlen(phrase) ; i++) 
    {
        if (CurrentCharIsInLowerCase(phrase[i]) && i%2 == 0)
        {
            printf("%c", phrase[i] - 32);
        }
        else 
        {
            printf("%c", phrase[i]);
        }
    }
    printf("\n");
        // check every letters blah blah

    return 0;
}

bool CurrentCharIsInLowercase(char currentCharacter)
{
   return currentCharacter >= 97 && currentCharacter <= 122;
}
