#include <stdio.h>
#include <string.h>

void TrimRight(char* s){
    char *s2 = s;
    int counter = 0;
    while (*s2 == ' '){
        s2++;
        counter++;
    }
    
    char* right = s2;
    while(*s2){
        if(*s2 != ' ')
            right = s2 + 1;
        s2++;
    }        
    *right = 0;
    
    while(*(s + counter) != 0){
        *s = *(s + counter);
        s++;
    }
    *s = 0;
}

int main(){
    char s[] = {' ',' ',' ',' ', 'H', 'e', 'l',' ',' ',' ', '\0'};
    TrimRight(s);
    printf("%s asdf\n", s);
    return 0;
}
