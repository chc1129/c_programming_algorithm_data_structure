#include <stdio.h>
#include <stdlib.h>

struct {
  int key;
  int data;
} table[100];

int   n;      /* tableに登録されているデータの個数 */

int binary_search(int key)
{
  int   low, high, middle;

  low = 0;
  high = n - 1;

  while (low <= high) {
    middle = (low + high) / 2;
    if (key == table[middle].key)
      return (table[middle].data);      /* 見つかった */
   else if (key < table[middle].key)
     high = middle - 1;
   else /* key > table[middle].key である */
     low = middle + 1;
  }
  return (-1);                          /* 見つからなかった */
}
