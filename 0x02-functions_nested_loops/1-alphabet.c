#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This function print_alphabet() prints all of the alphabets in lower case
 * Return: Always 0 (Success)
 */
    void print_alphabet(void)
    {
    char c ;
      for(c = 'a'; c <= 'z'; c++)
      {
          putchar(c);
          putchar('\n');
      }
    }
    int main (void)
    {
    return (0);
    }
