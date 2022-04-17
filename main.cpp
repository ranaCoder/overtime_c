#include <cstdio>
int main(){
    int i,hour, extra;
    for(i = 1 ; i <= 10 ; i++)
    {
        printf("Enter the total working hours : ");
        scanf("%d", &hour);
        if(hour>40)
        {
            extra = (hour - 40)*12;
            printf("\nOvertime pay:%d\n", extra);
        }
        else
            printf("\nno overtime.\n");
    }
    return 0;
}

