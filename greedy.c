#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void) {
    
    float x;
    do{
        printf("WHAT THe hell is on joey's HEAD? ($) \n");
        x = get_float();
    }while(x < 0);
    
    printf("ok, %.2f it is.\n", x);
    
    // use "change" for change amount
    int change = x * 100;
    
    //for coin count
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;
    
    //loop through each coin until indivisible by each
    do {
        if (change >= 25) {
        
            quarters = floor(change / 25); // means quarters = 0 + as many times 25 fits into given change
            change = change % 25;
            
            printf("%i quarters \n", quarters);
        }
        
        
        
        else if (change >= 10) {
            dimes = floor(change / 10); 
            change = change % 10;
            
            printf("%i dimes \n", dimes);
        }
        
        else if (change >= 5) {
            nickels = floor (change / 5); 
            change = change % 5;
            
            printf("%i nickelbacks\n", nickels);
        }
        
        else if (change >= 1) {
            pennies = floor(change / 1); 
            change = change % 1;
            
            printf("%i pennies\n", pennies);
        }
            
            
    } while(change>0);
    
    
}
    
    