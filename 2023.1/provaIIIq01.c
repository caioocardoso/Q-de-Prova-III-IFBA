/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define QTD_LIN 7
#define QTD_COL 18
int main()
{
    char cacaPalavra[QTD_LIN][QTD_COL] = {
        {'A','B','L','N','H','E','H','L','L','T','B','Q','J','F','R','G','Q','H'},
        {'K','J','U','L','O','C','A','L','I','Z','A','R','A','R','V','M','N','T'},
        {'F','E','O','G','E','Q','H','T','L','O','I','D','F','M','B','A','O','E'},
        {'R','W','B','N','U','S','G','E','V','I','X','O','I','O','X','G','U','S'},
        {'B','R','D','A','R','G','T','E','N','T','A','T','I','V','A','Y','J','T'},
        {'E','A','R','H','S','O','W','E','S','L','F','V','C','D','P','Z','J','E'},
        {'W','E','C','S','W','A','T','L','X','B','M','T','L','C','D','P','N','I'}};
    char str[QTD_COL];
    int iCont, jCont, kCont;
    int pontuacao=-5;
    int achou;
/*
    for (iCont = 0; iCont < QTD_LIN; iCont++)
        for (jCont = 0; jCont < QTD_COL; jCont++){
            printf("\nLetra [%d][%d] do caca palavras :\\> ", iCont, jCont);
            scanf("%c", &cacaPalavra[iCont][jCont]);
        } 
*/  
    scanf("%s", str);
        
    for (iCont = 0; iCont < QTD_LIN; iCont++)
        for (jCont = 0; jCont < QTD_COL; jCont++){
                achou = 0;
                while(str[achou] != '\0' &&
                      jCont+achou <  QTD_COL &&
                      str[achou] == cacaPalavra[iCont][jCont+achou]){
                        achou++;
                        if(!str[achou])
                            pontuacao = achou;
                }
                achou = 0;
                while(str[achou] != '\0' &&
                     iCont+achou < QTD_LIN &&
                     str[achou] == cacaPalavra[iCont+achou][jCont]){
                        achou++;
                        if(!str[achou])
                            pontuacao = achou;
                    }
        }
    printf("%d", pontuacao);
}
