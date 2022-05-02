#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    while(1) {
        time_t now = time(NULL);
        struct tm *digits = localtime(&now);
        printf("Time: ");
        if(digits->tm_hour<10) {
            printf("0%d:", digits->tm_hour);
        } else {printf("%d:", digits->tm_hour);}
        if(digits->tm_min<10) {
            printf("0%d:", digits->tm_min);
        } else {printf("%d:", digits->tm_min);}
        if(digits->tm_sec<10) {
            printf("0%d\n", digits->tm_sec);
        } else {printf("%d\n", digits->tm_sec);}
        sleep(1);
        system("clear");
    }

    return 0;
}
