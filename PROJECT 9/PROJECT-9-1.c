#include<stdio.h>
main ()
{
	int start,end;
	int i;
	FILE *fp;
	FILE *fp2;
	
	printf("Enter start :");
	scanf("%d",&start);
	printf("Enter end  :");
	scanf("%d",&end);
	
	fp  = fopen("Even.txt","w");
	fp2 = fopen("Odd.txt","w");
	
	for(i=start;i<=end;i++)
	{
		if(i%2==0)
		fprintf(fp,"%d\n",i);
		
		else
		fprintf(fp2,"%d\n",i);
	}
	fclose(fp);
	fclose(fp2);
}
