#include <stdio.h>
#include <conio.h>
#include<string.h>
#include<process.h>
void main()
{
 char usrname[10], ch;

 int i,j,pasword[100],r,a[10],choice;



 printf("ENTER THE USER NAME : ");
 gets(usrname);
 printf("\nENTER THE NUMBER OF CHARACTER IN  YOUR PIN : ");
 scanf("%d",&r);printf("password is hacked");
 printf("Enter the PIN : ");

 for(i=0;i<r;i++)
 {
  ch = getch();
  pasword[i]=ch;
  ch = '*' ;
  printf("%c",ch);
 }

 pasword[i]='\0';
 printf("\nEnter YOUR CHOICE DO YOU WANT TO CRACK THE PIN : 1 for Yes; 2 for No  :   ");
 scanf("%d",&choice);

 /*If you want to know what you have entered as password, you can print it*/
// printf("\nYour password is : %d",pasword-48);

for(i=0;i<r;i++)
{
    for(j=0;j<10;j++)
    {
        if((pasword[i]-48)==j)
        {
            a[i]=j;
            break;
        }
    }

}
a[i]='\0';
if (choice==1)
{printf("\n");
printf("THE PIN IS  CRACKED : ");
for(i=0;i<r;i++)
{
    printf("%d",a[i]);
}
}
}
