#include <stdio.h>
#include <string.h>

int main(){

    //simple madlibs game
    char place[30] = "";
    char adjective[30] = "";
    char noun[30] = "";

    printf("--------Game has started----------\n");

    printf("Today, I went to the [place] and saw a [adjective][noun]. \n");

    printf("Place: ");
    scanf(" %s", place);

    printf("adjective: ");
    scanf("%s", adjective);

    printf("noun: ");
    scanf("%s", noun);

    printf("Today, I went to the %s and saw a %s %s \n", place, adjective, noun);

    return 0;
}