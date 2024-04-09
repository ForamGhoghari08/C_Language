#include <stdio.h>

int main() {
    FILE *inputFile, *outputFile;
    char ch;

    inputFile = fopen("input.txt", "r");
    
    if (inputFile == NULL) 
	{
        printf("Error opening the input file.\n");
        return 1;
    }
 
    outputFile = fopen("output.txt", "w");
    
    if (outputFile == NULL) 
	{
        printf("Error creating the output file.\n");
        fclose(inputFile);
        return 1;
    }
    
    while ((ch = fgetc(inputFile)) != EOF) {
        fputc(ch, outputFile);
    }

    
    fclose(inputFile);
    fclose(outputFile);

    printf("File copy successful.\n");

    return 0;
}

