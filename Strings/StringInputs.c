        #include <stdio.h>

        int main() {
            char name[50];
            printf("Enter your name: ");
            gets(name); // Reads a string
            printf("Hello, %s!\n", name);
            return 0;
        }