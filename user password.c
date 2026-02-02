#include <stdio.h>
void main()
{
 int uid=5371;
 int upwd=9647;
 int id;
 int pwd;
 printf("enter the user id\n");
 scanf("%d",&id);
 printf("enter the pwd\n");
 scanf("%d",&pwd);
 if(uid==id)
 {
     if(upwd=pwd)
     {
         printf("login successful\n");
     }
     else
     {
         printf("incorrect pwd\n");
     }
 }
 else
     {
         printf("incorrect user id\n");
     }
    
     
     
 