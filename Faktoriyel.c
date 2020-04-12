#include <stdio.h>

int main()
{
    int i;
    int input=1;
    while (input<=10){
        int faktoriyel=1;
        i=1;
        while (input>=i){
        faktoriyel=faktoriyel*i;
        i++;
        }
    
    printf("\n %d", faktoriyel);  
    input++;  
    }
   return 0;
}