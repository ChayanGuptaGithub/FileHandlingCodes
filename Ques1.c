#include <stdio.h>
int main()
{
   char ch, examplefile[25];
   FILE *fp;   // file pointer

   printf("Enter a file name present in your system\n");
   gets(examplefile);

   fp = fopen(examplefile, "r"); // file opened in read mode

   if (fp == NULL)  // To check if this file exist or not
   {
      printf("Error Message \n");
      exit(1);
   }
   while((ch = fgetc(fp)) != EOF)
   {
      printf("%c", ch); // printing the stuffs present in this file
   }
   fclose(fp);
   return 0;
}
