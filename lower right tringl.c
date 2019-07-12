#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,k=3,sum=0,x[4][4];
	//clrscr();
	for(i=0;i<=3;i++)
	{
		printf("Enter numbers for row %d:\n",i+1);
		for(j=0;j<=3;j++)
		scanf("%d",&x[i][j]);
	}
	printf("\n");
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		printf("%4d",x[i][j]);
		printf("\n");
	}
	printf("\n");
	for(i=0;i<=3;i++)
	{
		for(j=3;j<=k;j++)
		sum=sum+x[i][j];
		k--;
	}

	printf("\nSummation of lower right triangle=%d\n",sum);
	getch();
	return 0;
}
