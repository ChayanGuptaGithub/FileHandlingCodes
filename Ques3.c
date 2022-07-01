#include <stdio.h>
#include <stdlib.h>

int main()
{
FILE *fp1,*fp2;// Open two files to be merged

fp1 = fopen("firstFile.txt", "r");
fp2 = fopen("secondFile.txt", "r");

FILE *fp3;
fp3 = fopen("thirdFile.txt", "w");// Open file to store the result
char c;
if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
{
		puts("Could not open files");
		exit(0);
}

// Copy contents of first file to file3.txt
while ((c = fgetc(fp1)) != EOF)
	fputc(c, fp3);

// Copy contents of second file to file3.txt
while ((c = fgetc(fp2)) != EOF)
	fputc(c, fp3);

printf("Merging two files completed");
fclose(fp1);
fclose(fp2);
fclose(fp3);
return 0;
}
