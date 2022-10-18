#include "main.h"

void print_alphabet_x10(void){
    int limit;
    char letter;
    for (limit = '0'; limit <= '9'; limit++){
        for ( letter = 'a'; letter <= 'z'; letter++)
        {
            _putchar(letter);
        }
    _putchar('\n');
    }
}
