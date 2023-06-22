/*2. Case Handler:
Write a C program to copy a file by considering the user option to handle the text case
-u, to change file content to Upper Case
-l, to change file content to Lower Case
-s, to change file content to Purely Upper Case
if no options are passed then it should be a normal copy

Example, say we have a file f1 with the following content
f1:
-----------------------
This is the file data
testing Case copy
application
-----------------------

./cp -s f1 f2
f2:
-----------------------
This Is The Tile Data
Testing Case Copy
Application
-----------------------

./cp -l f1 f3
f3:
-----------------------
this is the tile data
testing case copy
application
-----------------------

./cp -u f1 f4
f4:
-----------------------
THIS IS THE FILE DATA
TESTING CASE COPY
APPLICATION
-----------------------

./cp f1 f5
Should perform a normal copy*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void copyFile(FILE *sourceFile, FILE *destinationFile, int option) {
    char ch;
    while ((ch = fgetc(sourceFile)) != EOF) {
        if (option == 1) {
            fputc(toupper(ch), destinationFile); 
        } else if (option == 2) {
            fputc(tolower(ch), destinationFile); 
        } else if (option == 3) {
            if (islower(ch)) {
                fputc(toupper(ch), destinationFile); 
            } else {
                fputc(ch, destinationFile);
            }
        } else {
            fputc(ch, destinationFile); 
        }
    }
}
int main(int argc, char *argv[]) {
    FILE *sourceFile, *destinationFile;
    char sourceFileName[100], destinationFileName[100];
    int option = 0;
    if (argc < 3) {
        printf("Insufficient arguments.\n");
        printf("Usage: ./cp [option] source_file destination_file\n");
        return 1;
    }
    if (argc >= 4) {
        if (strcmp(argv[1], "-u") == 0) {
            option = 1; 
        } else if (strcmp(argv[1], "-l") == 0) {
            option = 2; 
        } else if (strcmp(argv[1], "-s") == 0) {
            option = 3; 
        }
    }
    strcpy(sourceFileName, argv[argc - 2]);
    strcpy(destinationFileName, argv[argc - 1]);
    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        printf("Unable to open the source file.\n");
        return 1;
    }
    destinationFile = fopen(destinationFileName, "w");
    if (destinationFile == NULL) {
        printf("Unable to create the destination file.\n");
        fclose(sourceFile);
        return 1;
    }
    copyFile(sourceFile, destinationFile, option);
    printf("File copied successfully.\n");
    fclose(sourceFile);
    fclose(destinationFile);
    return 0;
}