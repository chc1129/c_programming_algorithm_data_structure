/* 線形探索法におけるデータ登録 */
add(int key, int data)
{
  if (n >= 100)
    error("要素数が多すぎる");
  table[n].key  = key;
  table[n].data = data;
  n++;
}
