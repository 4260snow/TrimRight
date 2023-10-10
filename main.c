#include <stdio.h>
#include <string.h>

void TrimRight(char* s){
    char* right = s;
    while(*s){
        if(*s != ' ')
            right = s + 1;
        s++;
    }        
    *right = 0;
}

int main(){
    char s[] = {' ',' ',' ',' ', 'H', 'e', 'l',' ',' ',' ', '\0'};
    TrimRight(s);
    printf("%s asdf\n", s);
    return 0;
}
