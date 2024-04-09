
#include <stdio.h>
int main() {
    FILE *file;
    file = fopen("new 1.txt", "w");

    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    
    fprintf(file, "Hellojdshfefure ");

   
    fclose(file);

    return 0;
}

