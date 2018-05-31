#include <stdio.h>
#include "kgv.h"
#include <string.h>

struct vars{
    Rational a;
    Rational b;
};
struct commands{
    char set[10];
};
static struct commands cmdlist = {"set"};

int main(){
    while (1){
        char cmd[10];
        scanf("%s", &cmd);
        if (strcmp(cmd, cmdlist.set) == 0){
            printf("set\n");
        }
        return 0;
    }
}