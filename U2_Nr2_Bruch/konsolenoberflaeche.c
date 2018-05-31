#include <stdio.h>
#include "kgv.h"
#include <string.h>
#include <ctype.h>

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
struct values{
    char a[5];
    char b[5];
    char all[5];
};
static struct vars vars = {{1, 0}, {1, 0}};
static struct commands cmdlist = {"print", "set", "reset", "execute", "exit"};
static struct values values = {"a", "b", "all"};

extern void print();

int main(){
    while (1){
        char cmd[10];
        scanf("%s", &cmd);
        if (strcmp(cmd, cmdlist.print) == 0){
            print();
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
            printf("Der Befehl \"%s\" ist unbekannt.\n", cmd);
        }
    }
}

void print(){
    char value[10];
    scanf("%s", &value);
    if (strcmp(value, values.a) == 0){
        ausgabe(vars.a);
    } else if (strcmp(value, values.b) == 0){
        ausgabe(vars.b);
    } else if (strcmp(value, values.all) == 0){
        ausgabe(vars.a);
        ausgabe(vars.b);
    } else if(isdigit(value[0] != 0)){
    } else {
    }
}