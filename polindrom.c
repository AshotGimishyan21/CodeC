#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    int count = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    for (int j = 0; j < n / 2; j++) {

        if (arr[j] == arr[n - j - 1]) {
            count++;
            continue;
        }

        else {
            printf("%s\n", "NO");
            break;
        }
    }

    if (count == n / 2) {
        printf("%s\n", "YES");
    }

    return 0;
}

