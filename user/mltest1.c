#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main()
{
  printf("MLFQ Basic Test\n");
  
  // Create a few processes
  for(int i = 0; i < 3; i++) {
    int pid = fork();
    if(pid == 0) {
      // Child process
      printf("Child %d started\n", getpid());
      for(int j = 0; j < 1000000; j++) {
        // Do some work
      }
      printf("Child %d finished\n", getpid());
      exit(0);
    }
  }
  
  // Parent waits for all children
  for(int i = 0; i < 3; i++) {
    wait(0);
  }
  
  printf("MLFQ test completed successfully!\n");
  return 0;
}
