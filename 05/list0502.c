/* 連結リストからの削除 */

// (1) ポインタxで指されたセルの直後のセルを削除する
struct CELL *p;

if (x->next == NULL)
    fatal_error("最後の次にはセルはないので削除できない");
p = x->next;
x->next = p->next;
// pで指されたセルの内容を取り出す
free(p);


// (2) リストの先頭のセルを削除する
// ・変数headerがリストの先頭を指しているものとする
struct CELL *p;

if (header == NULL)
    fatal_error("リストがからなので削除できない");
p = header;
header = p->next;
// pで指されたセルの内容を取り出す
free(p);
