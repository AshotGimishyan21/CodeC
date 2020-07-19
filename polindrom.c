#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int n;
  scanf("%d", &n);
  if(n==0) {
    printf("%s\n", "Give me number n and then n natural numbers");
    exit(1);
  }
  int arr[n];
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    scanf("%d", arr + i);
  }
  for (int j = 0; j < n/2; j++)
  {
    if(arr[j]==arr[n-j-1])
    {
      count++;
      continue;
    }
    else{
      printf("%s\n", "NO");
      break;
    }
  }
  if (count == n/2)
  {
    printf("%s\n", "YES");
  }
  return 0;
}
