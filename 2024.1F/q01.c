/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define ALF 26
#define MAX_STR 255
int main()
{
    int alfabeto[ALF];
    int contagem, iCont, jCont;
    char str[MAX_STR];
    int valor;
    
    fgets(str, MAX_STR, stdin);
    
    for(iCont=0; str[iCont]; iCont++)
        if(str[iCont]>='a' && str[iCont]<='z')
            str[iCont]=(str[iCont]-'a')+'A';
    for(iCont=0; iCont<ALF; iCont++)
        alfabeto[iCont]=0;
    for(iCont=0; str[iCont]; iCont++){
        valor=str[iCont]-'A';
        alfabeto[valor]=1;
    }for(iCont=0, contagem=0; iCont<ALF; iCont++)
        contagem+=alfabeto[iCont];
    if(contagem==26)
        printf("comp");
    else if(contagem>=13)
        printf("quase");
    else if(contagem<13)
        printf("incomp");
}
