#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
int main ()
{ 
  int estado;
  pid_t child_pid;
 
  child_pid = fork ();
  if (child_pid > 0) {
    wait(&estado);
    printf("Soy el proceso padre, mi proceso hijo ha terminado y yo ahora espero 60 segundos antes de terminar\n");
    sleep (60);
  }
  else {
    exit (0);
  }
  return 0;
}