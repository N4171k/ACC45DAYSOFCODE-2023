#include <stdio.h>
#include <stdbool.h>

int main() {
  char n[50]; 
  int q;

  printf("Hello!\n");
  printf("I am Naitik. What is your good name?\n");
  
  scanf("%49s", n);

  printf("Nice to meet you, %s!\n", n);
  printf("Welcome to my Repository\n");
  printf("Do you wish to stay with me throughout this 45-day coding challenge? (enter 1 for yes or 0 for no)\n");
  
  
  scanf("%d", &q);

  
  if (q == 1) {
    printf("Happy to hear that! you can also track the progress @https://www.linkedin.com/in/iamnaitik/\n");
  } else {
    printf("Thank you for staying with me. Want to stay connected? Follow me on socials @ https://www.linkedin.com/in/iamnaitik/\n");
  }

  return 0;
}
