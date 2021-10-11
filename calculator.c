#include <stdio.h>

int main()
{
   int n1, n2, ans;
   char op;
   
   
   printf("Enter an operator:\n");
   scanf("%c",&op);
   
   printf("enter values for n1 and n2:");
   scanf("%d%d",&n1,&n2);
   
   // To check which operation have to perform
   switch(op)
   {
      case '+':
         ans = n1 + n2;
         printf("The sum is: %d\n",ans);
         break;
      
      case '-':
         ans = n1 - n2;
         printf("The substration is: %d\n",ans);
         break;
         
      case '*':
         ans = n1 * n2;
         printf("The multipkication is: %d\n",ans);
         break;
         
      case '/':
         ans = n1 / n2;
         printf("The division is: %d\n",ans);
         break;
      
      case '%':
         ans = n1 % n2;
         printf("The remainder is: %d\n",ans);
         break;
         
      default: printf("Enter a valid operator.\n");
      
   }
   
   printf("Thank you!");
   
}

