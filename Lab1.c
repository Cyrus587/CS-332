#include <stdio.h>
#include<math.h> 

int main() {
 int givenNumber = 0;
  int i = 0;
  int flag = 1;
  printf("enter a number:");
  scanf("%d", &givenNumber);
    for(i=2;i<=sqrt(givenNumber);i++)
   {
      if(givenNumber%i == 0)
      {
         flag = 0;
         break;
      }
   }
  

  if (flag == 1 && givenNumber > 0) {
        printf("The given number is prime.");
  }
  else {
         printf("the given number is not a prime number");
  }
    
}
