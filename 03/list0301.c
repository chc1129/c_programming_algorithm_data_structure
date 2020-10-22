/* ポインタを使って参照渡しのパラメータを表現する */

//・関数は1つの値だけを関数値として関数ことができる.2つ以上の値を関数
//  から呼び出し側に返すには,関数に,偏すへのポインタを渡して,そこに値
//  をセットするようにする.
//・関数fooは,2つのint型の数を受け取り,その和と積を返すものである.
//・このように変数の値ではなく,変数のアドレスによってパラメータを受け渡
//  しすることを,参照私(call by reference)という.
//  また,変数の値を渡す方法を値渡し(call by value)という.
foo(int a, int b, int *sum, int *prod)
{
  *sum = a + b;
  *prod = a * b;
}