#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

#define DATA_SIZE 1000

int main(void){
  
	char data[DATA_SIZE];
	char ch;
  	int i = 0;
	FILE * fPtr;
  
   	if((fPtr = fopen("PE-1.txt","r")) != NULL){
		struct stat st;
		stat("PE-1.txt",&st);
		int size = st.st_size; 
		char s1[size];
   		
   		while((ch = fgetc(fPtr)) != EOF ){
   			s1[i] = ch;
   			i = i + 1;
   		};
		char s2[] = "I want to learn PE file format!";
		int n = 0;
   		int m = 0;
   		int times = 0;
   		int len = strlen(s2);      
		
		while(s1[n] != '\0') {

	      if(s1[n] == s2[m]) {     // if first character of search string matches

         // keep on searching

    	    while(s1[n] == s2[m]  && s1[n] !='\0') {
            	n++;
            	m++;
         	}

         // if we sequence of characters matching with the length of searched string
         	if(m == len && (s1[n] == ' ' || s1[n] == '\0')) {
				times++;
         	}
      	}
		else {            // if first character of search string DOES NOT match
        	while(s1[n] != ' ') {        // Skip to next word
            	n++;
            	if(s1[n] == '\0')
            		break;
         	}
      	}
      	n++;
      	m=0;  // reset the counter to start from first character of the search string.
   	}	
		if (times > 0){
			while((ch = fgetc(fPtr)) != EOF ){
   				s1[i] = ch;
		   		fprintf(stdout, s1[i]);
		   	   			i = i + 1;
   			};
		   fclose(fPtr);
		   }
   		else{
   			fclose(fPtr);
	    	fPtr = fopen("PE-1.txt","a");
   			fprintf(fPtr, "I want to learn PE file format!");
   			fclose(fPtr);
		   }
       
    }
    else{
    fPtr = fopen("PE-1.txt","w");
    fputs("I want to learn PE file format!", fPtr);
    fclose(fPtr);
    
    }    
}
