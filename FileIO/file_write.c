#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    // File Pointer declared
    FILE* ptr;
  
      // File opened
    ptr = fopen("./text.txt", "w");
    
    if (ptr == NULL) {
        printf("Error Occurred While creating a "
               "file !");
    }
    char str[] = "This string is written by C";
    fputs(str,ptr);
    fwrite(str,sizeof(str),1,ptr);


    // File closed
    fclose(ptr);
  
    return 0;
}