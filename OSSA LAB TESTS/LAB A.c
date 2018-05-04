//OSSA lab test Version A
#include<stdio.h>
#include<sys/wait.h>
#include<stdlib.h>
int
main ()
{

  int pid = fork ();
  if (pid == 0)
    {
      printf ("child Process Id %d \n", getpid ());
      printf ("child ID  ; %d \n", pid);
    }
  else
    {
      printf ("Parent process Id :%d \n", getppid ());
      printf ("Parent Id :%d \n", pid);
      wait (NULL);

    }


}
