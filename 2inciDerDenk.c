#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    
    printf("Ikinci Dereceden koku giriniz: \n");
    scanf("%f", &a );
        
    printf("Birinci dereceden koku giriniz: \n");
    scanf("%f", &b );
        
    printf("Sifirinci dereceden koku giriniz: \n");
    scanf("%f", &c );
        
    int delta = pow(b,2)-4*a*c; 
    
    // printf("\n %d", delta);

    if (delta >= 0){
        float kokdelta = sqrt (delta);
        float x1 = (-b/(2*a)) + (kokdelta/(2*a));
        // printf("\n %f", x1);
        float x2 = (-b/(2*a)) - (kokdelta/(2*a));
        // printf("\n %f", x2);
        if (delta == 0){
            printf("Denkleminizin tek koku vardir. Kok: %.2f dir.", x1);
        }
        else{
            printf("Denkleminizin iki koku vardir. Birincisi %.2f , ikincisi %.2f dir.", x1, x2);
        }
        
    }
    if (delta < 0){
            printf("Denkleminizin hic koku yoktur.");
        }            
    return 0;

}