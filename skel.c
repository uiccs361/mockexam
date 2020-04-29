#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
// add header files if necessary


int main(int argc, char ** argv)
{
  if (argc < 2) {
    printf("Usage: <filename>\n");
    exit(0);
  }
  // open the INPUT file with open() (man 2 open)
  int fdin = open(argv[1], O_RDONLY);
  if (fdin < 0) {
    printf("open input file (%s): failed\n", argv[1]);
    exit(0);
  }
  // open the OUTPUT file for write
  // you can freely choose open (use fd) or fopen (use FILE *)
  // man 2 open; man feopn
  // (for open, use 0777 as the third argument)
  // check the returned value and exit(0) on failure
  // the output file name is "<input-filename>.myzip"
  // example: input: 1.txt
  //          output: 1.txt.myzip
  // TODO: Your code here:




  // encrypt the input file with your login and magic number, and write to the output file:
  // below we use [] to indicate the byte-offset in the input/output files
  // output[i] = input[i] ^ magic-number ^ your_login[i % login_length]
  //
  // THIS IS AN EXAMPLE! USE YOUR OWN NETID AND MAGIC NUMBER
  // example: Student A's login is cs361 (email: cs361@uic.edu)
  //          Student A's magic number is 24
  // output[0] = input[0] ^ 24 ^ 'c';
  // output[1] = input[1] ^ 24 ^ 's';
  // output[2] = input[2] ^ 24 ^ '3';
  // output[3] = input[3] ^ 24 ^ '6';
  // output[4] = input[4] ^ 24 ^ '1';
  // output[5] = input[5] ^ 24 ^ 'c';
  // output[6] = input[6] ^ 24 ^ 's';
  // ...
  // ...
  // the output and input file must have the same size
  // TODO: Your code here:





  return 0;
}
