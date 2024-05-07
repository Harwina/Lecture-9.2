#include <stdio.h>
#include <string.h>

int main() {
    char email[100];
    char password[100];
    
    char desiredEmail[] = "admin@gmail.com";
    char desiredPassword[] = "123456";
    printf("Enter your email: ");
    scanf("%s", email);

    printf("Enter your password: ");
    scanf("%s", password);

    if (strcmp(email, desiredEmail) == 0 && strcmp(password, desiredPassword) == 0) {
        printf("Login Successful...\n");
    } else {
        printf("Login Failed. Invalid Credentials.\n");
    }

    return 0;
}
