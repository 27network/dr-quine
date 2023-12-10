#define X 5
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define CODE "#define CODE %c%s%c%c#include <stdio.h>%c#include <stdlib.h>%c#include <unistd.h>%c#include <fcntl.h>%cchar *file;char *name;char *cmd;char *exec;%cvoid error(){if(name)free(name);if(file)free(file);if(cmd)free(cmd);if(exec)free(exec);printf(%cError%c%c%c);exit(1);}%cint main(){file=cmd=name=exec=NULL;if(X<=0)return 0;asprintf(&file,%cSully_%%d.c%c,X-1);int fd=open(file,O_WRONLY|O_CREAT|O_TRUNC,0644);if(fd<0)error();dprintf(fd,%c#define X %%d%%c%c,X-1,10);dprintf(fd,CODE,34,CODE,34,10,10,10,10,10,10,34,92,110,34,10,34,34,34,34,34,34,34,34,34,34,10);close(fd);asprintf(&name,%cSully_%%d%c,X-1);asprintf(&cmd,%cclang -Wall -Wextra -Werror -o %%s %%s%c,name,file);asprintf(&exec,%c./%%s%c,name);if(system(cmd))error();if(system(exec))error();free(name);free(file);free(cmd);free(exec);return 0;}%c"
char *file;char *name;char *cmd;char *exec;
void error(){if(name)free(name);if(file)free(file);if(cmd)free(cmd);if(exec)free(exec);printf("Error\n");exit(1);}
int main(){
file=cmd=name=exec=NULL;
if(X <= 0)return 0;
asprintf(&file,"Sully_%d.c",X-1);
int fd=open(file,O_WRONLY|O_CREAT|O_TRUNC,0644);
if(fd<0)error();
dprintf(fd,"#define X %d%c",X-1,10);
dprintf(fd,CODE,34,CODE,34,10,10,10,10,10,10,34,92,110,34,10,34,34,34,34,34,34,34,34,34,34,10);
close(fd);
asprintf(&name,"Sully_%d",X-1);
asprintf(&cmd,"clang -Wall -Wextra -Werror -o %s %s",name,file);
asprintf(&exec,"./%s",name);
if(system(cmd))error();
if(system(exec))error();
free(name);free(file);free(cmd);free(exec);
return 0;}
