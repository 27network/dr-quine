#include <stdio.h>
/*
  This is an external comment.
*/
void print(){char* a="#include <stdio.h>%c/*%c  This is an external comment.%c*/%cvoid print(){char* a=%c%s%c;printf(a,10,10,10,10,34,a,34,10,10,10,10,10,10);}%cint main(){%c/*%c  This is an internal comment.%c*/%cprint();return 0;}%c";printf(a,10,10,10,10,34,a,34,10,10,10,10,10,10);}
int main(){
/*
  This is an internal comment.
*/
print();return 0;}
