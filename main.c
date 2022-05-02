#include <stdio.h>

int main() {
    int i, totalTime,overTime,overTimePay;
    i = 1;
    while (i<=10){
        printf("enter total Working Hours: ");
        scanf("%d",&totalTime);
        overTime = totalTime- 40;
        if (totalTime >40) {
            overTimePay = overTime * 12;
            printf("The total earning of %d for %d hours overtime\n", overTimePay, overTime);
        }
        else{
                printf("No overtime sorry!\n");
            }
            i++;
        }
    }


