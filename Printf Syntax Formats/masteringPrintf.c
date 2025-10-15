#include <stdio.h>
#include <stdbool.h>

int main() {
    printf("Just a Simple C Program to Master Printf() function and it's format specifiers.");
    bool isLoggedIn = true;
    bool isAdmin = false;
    
  printf("Regular user: %s\n", (isLoggedIn && !isAdmin) ? "true" : "false");
  printf("Has access: %s\n", (isLoggedIn || isAdmin) ? "true" : "false");
  printf("Not logged in: %s\n", (!isLoggedIn) ? "true" : "false");

  return 0;
}