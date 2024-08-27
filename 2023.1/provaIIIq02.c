/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define QTD_STR 8
int main()
{
    char fita1[QTD_STR];
    char fita2[QTD_STR];
    char fita3[QTD_STR];
    char fita4[QTD_STR];
    char fita5[QTD_STR];
    char consenso[QTD_STR];
    
    fgets(fita1, QTD_STR, stdin);
    fgets(fita2, QTD_STR, stdin);
    fgets(fita3, QTD_STR, stdin);
    fgets(fita4, QTD_STR, stdin);
    fgets(fita5, QTD_STR, stdin);
    
    char DNA[4]={'C', 'G', 'A', 'T'};
    int iCont, jCont;
    int maior=0;
    int aux=0;
    int c, g, a, t;
    c=g=a=t=0;
    
    for(iCont=0; iCont<QTD_STR; iCont++){
        c=g=a=t=0;
        for(jCont=0; jCont<4; jCont++){
            if(fita1[iCont]==DNA[jCont]){
                switch(fita1[iCont]){
                    case 'C' : c++;
                    case 'G' : g++;
                    case 'A' : a++;
                    case 'T' : t++;
                }
            }if(fita2[iCont]==DNA[jCont]){
                switch(fita2[iCont]){
                    case 'C' : c++;
                    case 'G' : g++;
                    case 'A' : a++;
                    case 'T' : t++;
                }
            }if(fita3[iCont]==DNA[jCont]){
                switch(fita3[iCont]){
                    case 'C' : c++;
                    case 'G' : g++;
                    case 'A' : a++;
                    case 'T' : t++;
                }
            }if(fita4[iCont]==DNA[jCont]){
                switch(fita4[iCont]){
                    case 'C' : c++;
                    case 'G' : g++;
                    case 'A' : a++;
                    case 'T' : t++;
                }
            }if(fita5[iCont]==DNA[jCont]){
                switch(fita5[iCont]){
                    case 'C' : c++;
                    case 'G' : g++;
                    case 'A' : a++;
                    case 'T' : t++;
                }
            }
        }
        maior=c;
        maior = c < g? g : c; 
        maior = c < a? g : c; 
        maior = c < t? g : c; 
        maior = maior = g? 99 : maior; 
        maior = maior = a? 99 : maior; 
        maior = maior = t? 99 : maior;
        
        for(jCont=0; jCont<QTD_STR; jCont++){
            if(maior==99)
                consenso[jCont]='?';
            else
                consenso[jCont]=maior-32;
        }
    }
}
