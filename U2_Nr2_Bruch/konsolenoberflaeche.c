#include <stdio.h>
#include "kgv.h"
#include <string.h>

struct vars{
    Rational a;
    Rational b;
};
struct commands{
    char print[10];
    char set[10];
    char reset[10];
    char execute[10];
    char exit[10];
};
static struct commands cmdlist = {"print", "set", "reset", "execute", "exit"};

int main(){
    while (1){
        char cmd[10];
        scanf("%s", &cmd);
        if (strcmp(cmd, cmdlist.print) == 0){
            printf("print\n");
        } else if (strcmp(cmd, cmdlist.set) == 0){
            printf("set\n");
        } else if (strcmp(cmd, cmdlist.reset) == 0){
            printf("reset\n");
        } else if (strcmp(cmd, cmdlist.execute) == 0){
            printf("execute\n");
        } else if (strcmp(cmd, cmdlist.exit) == 0){
            printf("exit\n");
            return 0;
        } else{
            printf("Der Befehl %s ist unbekannt.\n", cmd);
        }
    }
}