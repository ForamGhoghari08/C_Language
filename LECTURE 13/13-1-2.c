#include <stdio.h>

int main()
{
   FILE *fp;
   char email[50], psw[30];
   fp = fopen("cmp.txt", "w");
   if (fp != NULL)
     { 
           printf("Your file created successfully!!\n");

     }
   fprintf(fp, "Number that are divisible by both 3 & 5 ");
    for(int i=1; i<=50; i++)
        {
             if(i%3==0 && i%5==0)
        {
        }
     fprintf(fp, "%d", i);
     fclose(fp);
        }
   else
        {
            printf("Your file not created successfully!!\n");
        }
return 0;
}
