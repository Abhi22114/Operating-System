#include <stdio.h>
#include <direct.h>
#include <unistd.h>
#include < sys/types.h>
#inlude <sys/stat.h>

int main() {

DIR 'dp';
struct dirent direntPt;
dp=opendir(",");
if (dp==NULL)
printf("error\n");
while((direntPt = readdir(dp)) != NULL){
printf("DIRECTORY NAME:%s




}
