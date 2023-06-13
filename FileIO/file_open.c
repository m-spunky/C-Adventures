#include <stdio.h>
#include <stdlib.h>

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
  
    // File closed
    fclose(ptr);
  
    return 0;
}