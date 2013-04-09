/****************************************************************************
 * song.c
 * Computer Science 50
 * Nataliia Vynogradenko
 *
 * Printing song
 ***************************************************************************/
 #include <stdio.h>
 #include <cs50.h>
 
 
 int main(void)
 {
    string lastForFirst[10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
    string lastForSecond[10] = {"thumb", "shoe", "knee", "door", "hive", "sticks", "heaven", "gates", "spine", "again"};

    for (int i = 0; i < 10; i++)
    {              
        printf("This old man, he played %s", lastForFirst[i]);
        printf("\n");
        if (i == 6)
        {
            printf("He played knick-knack up in %s", lastForSecond[i]);
        }  
        else if (i == 9)
        {
            printf("He played knick-knack once %s", lastForSecond[i]);
        }
        else
        {
             printf("He played knick-knack on my %s", lastForSecond[i]);
        }
        printf("\n");
        printf("Knick-knack paddywhack, give your dog a bone\nThis old man came rolling home \n");
    }
    return 0;
}





