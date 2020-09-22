// Шифр Цезаря
#include <stdio.h>
#include <cs50.h> // get_string()
#include <stdlib.h> // exit()
#include <ctype.h> // atoi()
#include <string.h> // strlen()

int main(int argc, char const* argv[])
{

    if (argc != 2) {
        printf("%s", "Open the program as: ./name k");
        printf("\n%s", "Where k is an integer-key.\n");
        printf("%s\n", "Now you can try again :)");
        exit(1);
    }

    int key = atoi(argv[1]);
    string s = get_string("Give me a string: ");

    for (int i = 0, n = strlen(s); i < n; i++) {

        if (!isalpha(s[i]))
            continue;

        else if (isupper(s[i]))
            s[i] = (s[i] + key - 'A') % 26 + 'A';

        else if (islower(s[i]))
            s[i] = (s[i] + key - 'a') % 26 + 'a';
    }

    printf("Your string after using key=%i: %s\n", key, s);
    return 0;
}
