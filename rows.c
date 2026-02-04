#include <stdio.h>
int main () 
{
int rows;
int col;
printf(" enter  the no. of rows:\n");
scanf("%d",&rows);
printf("enter the no.of columns:\n");
scanf("%d",&col);
for(int i=1;i<=rows;i++)
{
for(int j=1;j<=col;j++)
{
if(i==1||j==col||i==j||i<j)
{
printf("*");
}
else
{
printf(" ");
}
}
printf("\n");
}
}


    