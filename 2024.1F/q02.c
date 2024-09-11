/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define MAX_PRI 255
int main()
{
    int num, aux;
    int primos[MAX_PRI];
    int iCont, jCont, kCont=0, divisores=0;
    
    scanf("%d", &num);
    
    for(iCont=0; iCont<MAX_PRI; iCont++)
        primos[iCont]=0;
    
    for(iCont=1; iCont<=num; iCont++){
        divisores=0;
        for(jCont=1; jCont<=iCont; jCont++)
            if(iCont%jCont==0)
                divisores++;
        if(divisores<=2){
            primos[kCont]=iCont;
            kCont++;
        }
    }for(iCont=1, aux=0; primos[iCont]!=0; iCont++){
        if(primos[iCont]-primos[iCont-1]>aux)
            aux=primos[iCont]-primos[iCont-1];
    }
    printf("%d", aux);
}
