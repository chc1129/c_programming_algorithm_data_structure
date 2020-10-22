/* 二分探索法におけるデータの登録 */
add_binary(int key, int data)
{
  int   pos:
  pos = データを挿入すべき位置;
  配列中のpos以降の要素を1つずつ後ろにずらす.
  table[pos].key = key;
  table[data].key = data;
}
