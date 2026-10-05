#include<stdio.h>
int main()
{
int a,b,choice,res;
printf("OPERATOR AND EXPESSION\n");
printf("enter the first number:");
scanf("%d",&a);
printf("enter the second number:");
scanf("%d",&b);
printf("\n MENU\n");
printf("1.addition\n");
printf("2.subraction\n");
printf("3.multiplication\n");
printf("4.division\n");
printf("5.modulus\n");
printf("\n enter your chioce");
scanf("%d",&choice);
switch(choice)
{
case 1:
res=a+b;
printf("result=%d",res);
break;
case 2:
res=a-b;
printf("result=%d",res);
break;
case 3:
res=a*b;
printf("result=%d",res);
break;
case 4:
if(b!=0)
{
res=a/b;
print("result=%d",res);
}
else:
printf("division by zero is not possible");
}
break;
case 5:
if(b!=0)
{
res=a%b;
printf("result=%d",res);
}
else
{
printf("modulus by zero is not possible");
}
break;
default:
printf("invalid choice");
}
return 0;
}
