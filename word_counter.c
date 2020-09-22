// How many words are in the source string
#include <stdio.h>

int main()
{
    char str[100];
    int counter = 0;

    fgets(str, 100, stdin);
    fflush(stdin); // clear stdin

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\n'))
            counter++;
    }
    printf("%i\n", counter);
    return 0;
}
