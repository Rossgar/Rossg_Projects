#include <stdio.h>

int main (void){
    
    float amounts[10] = {0};
    printf("How many cups of flour?\n");
    scanf( "%f" , &amounts[0] );
    printf( "%.2f", amounts[0]);
    return 0;
}
