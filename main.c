#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*
    Para compilar o codigo em c digite no terminal: gcc main.c -o torreDeHanoi
*/

int numeroDePassos(int n){
    return pow(2,n)-1; // retorna ( (2^n) -1 ) que é o número mínimo de passos
}

void torreDeHanoi(int n, char *from, char *temp, char *to) {
    if ( n == 0 ) return ;

    torreDeHanoi(n-1, from, to, temp) ;

    printf(" Mova disco %d de %s para %s\n", n, from, to) ;

    torreDeHanoi(n-1, temp, from, to) ;
}

/*
    Tamanho dos discos: estão representados por valores inteiros 
    Posições: representadas pelas letras A,B,C
*/


int main(int argc, char **argv){
    int n = 0; // número de discos 

    printf("Digite o numero de discos:  ");
    scanf("%d",&n);

    printf("Numero minimo de passos para %d discos:  %d",n,numeroDePassos(n)); 
    printf("\n");


    torreDeHanoi(n, "A", "B", "C") ; /* A:ORIGEM , B:AUXILIAR, C:DESTINO */

    return 0;
}
