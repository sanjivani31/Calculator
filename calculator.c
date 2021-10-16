#include <stdio.h>

int main()
{
   int n1, n2;
   char op;
   
   
   printf("Enter an operator:\n");
   scanf("%c",&op);
   
   printf("Enter values for n1 and n2:");
   scanf("%d%d",&n1,&n2);
   
   // To check which operation have to perform
   switch(op)
   {
      case '+':
       
         printf("The sum is: %d\n",n1+n2);
         break;
      
      case '-':
         
         printf("The substration is: %d\n",n1-n2);
         break;
         
      case '*':
         
         printf("The multipkication is: %d\n",n1*n2);
         break;
         
      case '/':
         
         printf("The division is: %d\n",n1/n2);
         break;
      //ans = n1 % n2;
         printf("The remainder is: %d\n",n1%n2);
         break;
         
      default: printf("Enter a valid operator.\n");
      
   }
   
   printf("Thank you!");
   
}

