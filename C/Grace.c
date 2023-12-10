#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#define FILE "Grace_kid.c"
#define CODE "#include <stdio.h>%c#include <unistd.h>%c#include <fcntl.h>%c#define FILE %c%s%c%c#define CODE %c%s%c%c#define FT(x) int main(){x}%cFT(int fd=open(FILE,O_WRONLY|O_CREAT|O_TRUNC,0644);if(fd<0)return 1;dprintf(fd,CODE,10,10,10,34,FILE,34,10,34,CODE,34,10,10,10,10,10,10);close(fd);return 0;)%c/*%c  meow%c*/%c"
#define FT(x) int main(){x}
FT(int fd=open(FILE,O_WRONLY|O_CREAT|O_TRUNC,0644);if(fd<0)return 1;dprintf(fd,CODE,10,10,10,34,FILE,34,10,34,CODE,34,10,10,10,10,10,10);close(fd);return 0;)
/*
  meow
*/
