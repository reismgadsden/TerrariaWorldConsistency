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
            system("batch/push.bat");
            loopCondition = false;
        }
        else if (choice == '2') {
            system("batch/pull.bat");
            loopCondition = false;
        }
        else {
            printf("Invalid Input! Please Try Again.");
        }
    }
}
