/* 連結リストへの挿入 */

// (1) ポインタxで指されたセルの直後に新しいセルを挿入する
struct CELL *p;

if ((p = malloc(sizeof(struct CELL))) == NULL)
    fatal_error("メモリが足りない");
// セルに値をセットする
p->next = x->next;
x->next = p;


// (2) リストの先頭に新しいセルを挿入する
// ・変数headerがリストの先頭を指しているものとすｒ

struct CELL *header, *p;

if ((p = malloc(sizeof(struct CELL))) == NULL)
    fatal_error("メモリが足りない");
// セルに値をセットする
p->next = header;
header = p;
