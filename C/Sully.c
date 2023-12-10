#define X 5
#define XS "5"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
void error(){printf("Error\n");exit(1);}
int main(){
if(X <= 0)return 0;
char *file;
asprintf(&file,"Sully_%d.c",X-1);
int fd=open(file,O_WRONLY|O_CREAT|O_TRUNC,0644);
free(file);
if(fd<0)error();
dprintf(fd,"#define X %d\n#define XS \"%d\"\n",X-1,X-1);
dprintf(fd,"#include <stdio.h>\nint main(){printf(\"wow!\\n\");return 0;}");
close(fd);
if(system("clang -Wall -Wextra -Werror -o Sully_"XS" Sully_"XS".c"))error();
if(system("./Sully_"XS))error();
return 0;}
