#include <stdio.h>

bool file_exists (char *filename){
  struct stat buffer;
  return (stat (filename, &buffer)
}

int main(void){
    if (file_exists("PE-1.txt")
      
}
