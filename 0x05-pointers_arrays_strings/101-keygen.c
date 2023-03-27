#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - generates random valid passwords
  *Return: always 0
  */

int main(void)
{
    char password[7];
    int i, r;

    srand(time(NULL));

    for (i = 0; i < 6; i++) {
        r = rand() % 62;
        if (r < 26) {
            password[i] = 'A' + r;
        } else if (r < 52) {
            password[i] = 'a' + r - 26;
        } else {
            password[i] = '0' + r - 52;
        }
    }
    password[6] = '\0';

    printf("%s\n", password);

    return 0;
}

