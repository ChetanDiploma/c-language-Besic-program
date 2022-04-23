#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
        clrscr();
        printf("\n Enter The Aag:");
        scanf("%d",&age);
        if(age>=18)
        {
        	printf("\n You are Allowed For Driving");
        }
        else
        {
        	printf("\n You are Not Allowed For Driving");
        }

        getch();
}
