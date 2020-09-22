#include <stdio.h>

int main()
{
    char c;
    scanf("%c\n", &c);

    char str[100];
    fgets(str, 100, stdin);
    fflush(stdin);

    int flag = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (c == str[i]) {
            flag = 1;
            printf("%i\n", i);
            break;
        }
    }

    if (flag == 0) {
        printf("-1\n");
    }
    return 0;
}
