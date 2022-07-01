#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp1, *fp2;
	char filename[100], c;

	// Open one file for reading
	fp1 = fopen("originalFile.txt", "r");
	if (fp1 == NULL)
	{
		printf("Cannot open file \n");
		exit(0);
	}

	// Open another file for writing
	fp2 = fopen("copiedFile.txt", "w");
	if (fp2 == NULL)
	{
		printf("Cannot open file\n", filename);
		exit(0);
	}

	// Read contents from file
	c = fgetc(fp1);
	while (c != EOF)
	{
		fputc(c, fp2);
		c = fgetc(fp1);
	}

	printf("\nContents copied successfully");

	fclose(fp1);
	fclose(fp2);
	return 0;
}
