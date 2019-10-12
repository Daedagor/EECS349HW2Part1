#include <stdio.h>
#include <stdlib.h>

#define DATA_SIZE 1000

bool file_exists (char *filename){
  struct stat buffer;
  return (stat (filename, &buffer);
}

int main(void){
  
  char data[DATA_SIZE];
  
  FILE * fPtr;
  
  if (file_exists("PE-1.txt"){
   fopen("PE-1.txt","a");
       
    }
    else{
    
    }    
}
