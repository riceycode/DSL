#include <stdio.h>
int Stack[100];
int top = -1;
void push(int x)
{
   Stack[++top] = x;
}

void pop()
{
   top--;
}

void d2b(int num) {
   if (num == 0) {
      printf("0");
      return;
   }
   
   while (num > 0)
   {
      push(num % 2);
      num /= 2;
   }

   while (top != -1)
   {
      printf("%d", Stack[top]);
      pop();
   }
}

int main() 
{
   int num;
   printf("Enter number: ");
   scanf("%d",&num);
   d2b(num);
   printf("\n");
   return 0;
}
