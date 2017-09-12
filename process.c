#include <stdio.h>
#include <unistd.h>

int
main(int argc, char** argv)
{
  pid_t process_id;
  process_id = fork();

  if(process_id == 0) printf("This is child process\n");
  else printf("This is parent process\n");
  
  return 0;
}
