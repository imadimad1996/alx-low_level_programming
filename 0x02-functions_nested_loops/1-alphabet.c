#include "main.h"

/**
 * main - function that prints the alphabet
 *
 * Return: 0 if success
 */
int main(void)
{
        char i;
        
        for (i = 'a'; i <= 'z'; i++)
        {
                print_alphabet(i);
        }
        
        return (0);
}

