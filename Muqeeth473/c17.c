#include <stdio.h>
int main()
{
int choice;
int a=10,b=5;
printf("1.Addition/n");
printf("2.Subraction/n");
printf("3.Multiplication/n");
printf("4.Division/n");
printf("Enter your choice: ");
scanf("%d",&choice);

switch(choice)
{
case 1:
printf("Sum=%d",a+b);
break;

case 2 :
printf("Differece=%d,a-b");
break;

case 3:
printf("Product=%d",a*b);
break;

case 4:
printf("Divison=%d,a/b");
break;

case 5:
printf("Invalid choice");


}

return 0;

}
