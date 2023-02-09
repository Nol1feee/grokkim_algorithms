#include "grokkim.h"

int bin_search(const int *array, int val, size_t len_arr) {
  size_t left = 0;
  size_t right = len_arr;
  size_t mid = 0;
  while (left < right) {
    mid = (left / 2) + (right / 2);
    if (*(array + mid) == val) {
      return (int)mid;
    } else if (*(array + mid) > val) {
      right = mid;
    } else if (*(array + mid) < val) {
      left = mid + 1;
    }
  }
  return -1;
}