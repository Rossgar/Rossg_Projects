#include <stdio.h>

//Ross Gardner, April 7, 2018

/*
 paraphrased: from the year 2000 to the year 2099 inclusive how many times will the last two digits of
 the year be equal to the product of the day* and month? Original question from 538.com (https://fivethirtyeight.com/features/when-will-the-arithmetic-anarchists-attack/)

 Notes for solution:
 
 2000, 2004, 2008, 2012,..., 2096 leap years, feb = 29
 so from 0 to 96 going by fours
 
 Very brute force approach...
 
 My answer is 209.
 
*/

int main (void){
    int days_regular [13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};//index 0 placeholder
    int days_leap [13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};// index 0 placeholder and feb with 29 days
    int regular_sum = 0;
    int leap_sum = 0;
    int total_sum = 0;
    int count = 0;
    
    //all combination of leap months and their days, test to see if month*day = year
    for (int i = 0; i <= 96; i = i+4){
        for (int j = 1; j <= 12; j++){
            for (int k = 1; k <= days_leap[j]; k++){
                if (j*k == i){
                    leap_sum ++;
                }
            }
        }
    }
    //all combination of regular(non-leap) months and their days to see if month*day = year
    for (int l = 1; l <= 95; l++){
        count++;
        if (count == 4){
            count = 0;
            continue;
        }
        else{
            for (int m = 1; m <= 12; m++){
                for (int n = 1; n <= days_regular[m]; n++){
                    if (m*n == l){
                        regular_sum ++;
                    }
                }
            }
        }
    }
    total_sum = leap_sum + regular_sum;
    printf("%d\n", total_sum);
    return 0;
}


