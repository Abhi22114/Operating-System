#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{

  
pid_t p;
printf("before fork\n");
p=fork();
if(p==0)
{
printf("i am child having id %d\n",getpid());
printf("my parent's id is %d\n",getppid());
}else{
printf("my child's id is %d\n",p);
printf("i am parent having id %d\n",getpid());
}
printf("common\n");
}

