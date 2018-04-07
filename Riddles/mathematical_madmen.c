#include <stdio.h>

/*from the year 2000 to the year 2099 inclusive how many times will the last two digits of the year be equal to the product of the day*month?*/
//2000, 2004, 2008, 2012, 2096 leap years, feb = 29
//so from 0 to 96 going by fours

int main (void){
    int days_regular [13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days_leap [13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int regular_sum = 0;
    int leap_sum = 0;
    int count = 0;
    
    for (int i = 0; i <=96; i = i+4){
        for (int j = 1; j <=12; j++){
            for (int k = 1; k <= days_leap[j]; k++){
                if (j*k == i){
                    leap_sum ++;
                    //printf("year = %d, month = %d, day = %d, sum = %d\n", i, j, k, leap_sum);
                }
            }
        }
    }
    for (int l = 1; l <= 95; l++){
        count++;
        if (count == 4){
            count = 0;
            continue;
        }
        else{
            printf("%d\n", l);
        }
    }
    //printf("%d\n", leap_sum);
}


