#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[])
{
  printf("Hello world\n");
  

  if (argc != 2) {
    fprintf (stderr, "Incorrect number of parameters\n");
    return -1;
  }

  int num = atoi(argv[1]);

  fprintf (stdout,          "Hello world with number %d!!!\n", num);

  return 0;
}
