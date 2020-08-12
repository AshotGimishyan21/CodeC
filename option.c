// Алгоритмы - Цена акции
#include <stdio.h>
#include <malloc.h>

int * find_diff_of_options(float * prices, int size);

int main(void) {
  float * prices = NULL;
  prices = (float * ) malloc(sizeof(float));

  int i = 0;
  while (scanf("%f", prices + i) == 1) {
    prices = (float * ) realloc(prices, (i + 2) * sizeof(float));
    i++;
  }

  int * days = find_diff_of_options(prices, i);

  for (int index = 0; index < i; index++) {
    printf("\nДень: %d \tЦена акции: %d", index, *(days + index));
  }

  printf("\n");
  free(days);
  free(prices);
  return 0;
}

int * find_diff_of_options(float * prices, int size) {
  int * new_arr = malloc(sizeof(size));

  for (int i = 0; i < size; i++) {
    int k = 1;
    int arr_end = 0;
    
    while (i - k >= 0 && arr_end != 1) {
      if (prices[i - k] <= prices[i])
        k += 1;
      else
        arr_end = 1;
    }
    new_arr[i] = k;
  }

  return new_arr;
}
