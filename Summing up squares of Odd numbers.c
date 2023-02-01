#include<stdio.h>
void main()
{
int NUM,i,j,SUM=0;
clrscr();
printf(“\nENTER INTERGER NUMBER : “);
scanf(“%d”,&NUM);
for(i=1;i<NUM+1;i++)
{
if(i%2!=0)
{
SUM=SUM+(i*i);
}
}
printf(“\nTHE SUM OF SQUARE OF ODD NOS. TILL %d NO. IS : %d”,NUM,SUM);
getch();
}
