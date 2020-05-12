#include <stdio.h>
#include <stdlib.h>

int main()
{
	char character, fileName[25];
	FILE *filePointer;
	
	printf("Enter the file name (with extension): ");
	gets(fileName);

	filePointer = fopen(fileName, "r");

	if (filePointer == NULL) {
		printf("File does not exist.");
		exit(1);	// or any exit code
	}
	printf("File contents:\n", fileName);

	while ((character = fgetc(filePointer)) != EOF) {
		printf("%c", character);
	}

	fclose(filePointer);
	return 0;
}
