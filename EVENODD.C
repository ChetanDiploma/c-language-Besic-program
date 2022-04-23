#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
        clrscr();
	printf("\n Enter The No:");
        scanf("%d",&a);
        if(a%2==0)
	{
        	printf("\n No is Even");

        }
        else
        {
        	printf("\n No is odd");
        }
        getch();
}