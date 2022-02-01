/**
 * C code for an exe that pushes and pulls terraria worlds if a github is set up for it
 *
 * author: Reis Gadsden
 * version: v1.04
 */
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main() {
    printf("Would you like to push or pull the world?\nPlease enter value (1 = Push, 2 = Pull):");
    fflush(stdin);
    char choice = getchar();

    bool loopCondition = true;
    while (loopCondition) {
        if (choice == '1') {
            system("push.bat");
            loopCondition = false;
        }
        else if (choice == '2') {
            system("pull.bat");
            loopCondition = false;
        }
        else {
            printf("Invalid Input! Please Try Again.");
        }
    }
}
