#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define STAPLE_SMALL  1
#define STAPLE_MEDIUM 2
#define STAPLE LARGE  3


typedef struct _tagstaple {
    int line; /*カッコのある行*/
    int column; /*カッコのある列(行頭からの文字数)*/
    int type; /*カッコの種類*/
    
    /*リストにあるスタック構造*/
    struct _tagstaple *staple_next;
    struct _tagstaple *staple_prev;
} staple;


/*リストにあるスタック構造*/
staple *staple_head = NULL;
staple *staple_last = NULL;

/*スタックへのpush*/
void stack_push(int line, int column,int type) {
    staple *staple_new;
    
    /*新しい領域を確保*/
    staple_new = (staple*)malloc(sizeof(staple));
    if(staple_new == NULL) {
        printf("スタックオーバーフローです。メモリが足りません。");
        exit(EXIT_FAILURE);
        return;
    }
    
    /*渡された値をスタックに積む*/
    staple_new->line;
    staple_new->column;
    staple_new->type;
    
    /*リストの最後に追加する*/
    staple_new->staple_next = NULL;
    staple_new->staple_prev = staple_last;
    staple_last = staple_new;
    if(staple_head == NULL) {
        staple_head = staple_new;
    }
    
    
}