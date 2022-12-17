#include <stdio.h>
#include <stdlib.h>
typedef struct Masina{
    char *marca;
    char *model;
    char tokenMasina[11];
    int pretAchizitie;
    int pretVanzare;
}Masina;

int main(int argc, char *argv[])
{
    //argc -> numarul de parametrii
    //argv -> parametri
    // Va folisiti de conditia de executie de mai sus
    // argv[0] = parcAuto -> numele fisierului
    // argv[1] = cerinte.in 
    // argv[2] = date.in
    // argv[3] = rezultate.out
    // argv[4] = marci.in

    FILE *inputCerinte = fopen(argv[1], "r");
    
    FILE *inputDate = fopen(argv[2], "r");
     
    while ((scanf(inputDate,"%s%s%s%d%d",
            &Masina.marca,&Masina.model,&Masina.tokenMasina,&Masina.pretAchizitie,&Masina.pretVanzare)
            Masina.marca=malloc(14*sizeof(char));
            Masina.model=malloc(14*sizeof(char));
            Masina.tokenMasina=malloc(11*sizeof(char));
            Masina.pretAchizitie=malloc(2*sizeof(int);
            Masina.pretVanzare=malloc(2*sizeof(int));
            )
}
//sortarea masinilor
sort(){

}