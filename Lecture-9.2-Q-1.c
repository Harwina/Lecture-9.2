#include<stdio.h>
#include<string.h>

int main() {
    char a[100];
    int i, l, cu = 0, cl = 0, cd = 0, cs = 0;
    
    printf("Enter the password: ");
    gets(a);
    l = strlen(a);
    
    if (l < 6) {
        printf("NOT STRONG PASSWORD\n");
    } else {
        for (i = 0; i < l; i++) {
            if (a[i] >= 'A' && a[i] <= 'Z') {
                cu++;
            } else if (a[i] >= 'a' && a[i] <= 'z') {
                cl++;
            } else if (a[i] >= '0' && a[i] <= '9') {
                cd++;
            } else {
                cs++;
            }
        }
        
        if (cu != 0 && cl != 0 && cd != 0 && cs != 0) {
            printf("YOUR PASSWORD IS STRONG\n");
        } else {
            printf("NOT STRONG PASSWORD\n");
        }
    }
    
    return 0;
}
