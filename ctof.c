/****************************************************************************
 * celsius_to_farenheit.c
 * Computer Science 50
 * Nataliia Vynogradenko
 *
 * Convert temperature in Celsius to Farenheit
 ***************************************************************************/
 #include <stdio.h>
 #include <cs50.h>
 
 int main(void)
 {
    // ask user for tempreture in Celsius
    printf("Input temperature in Celsius:\n");
    float i = GetFloat();
    
    // convert tempreture
    float j = (i * 9 / 5) + 32;
    
    // display the result
    printf("This number in Farenheit is: %.1f\n", j);
    return 0;
 }
 
