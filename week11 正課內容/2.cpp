2. typedef æ˜¯ struct çš„å¥½æœ‹å‹, å¯ä»¥æŠŠ type è®Šç°¡å–®, typedef struct data {char c; int ans; } DATA; å¯ä»¥ç”¨ç°¡å–®çš„åå­— DATA å–ä»£å¾ˆé•·çš„ struct dataã€‚è«‹è©¦è‘—åœ¨ CodeBlocks ç…§è‘—å¯¦ä½œä¸€ä¸‹

#include <stdio.h>
typedef struct data
{
    char c;///Â­Ã¾Â¤@Â­Ã“Â¦rÂ¥Ã€
    int ans;///Â¥XÂ²{Â´XÂ¦Â¸
}DATA;
///struct data listA;
DATA listA;
int main()
{
    listA.c='A';
    listA.ans=1;
    printf("%c %d\n",listA.c,listA.ans);
}
