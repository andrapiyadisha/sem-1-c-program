
#include <stdio.h>
int main() {
    FILE *file;
    char ch;
    int characterCount = 0;
    int spaceCount = 0;
    int tabCount = 0;
    int newlineCount = 0;

    file = fopen("example.txt", "r");

    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        characterCount++;

        if (ch == ' ') {
            spaceCount++;
        }
        else if (ch == '\t') {
            tabCount++;
        }
        else if (ch == '\n') {
            newlineCount++;
        }
    }

    fclose(file);

    printf("Number of characters: %d\n", characterCount);
    printf("Number of spaces: %d\n", spaceCount);
    printf("Number of tabs: %d\n", tabCount);
    printf("Number of new lines: %d\n", newlineCount);

    return 0;
}

