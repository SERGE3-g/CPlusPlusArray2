//
// Created by gueas on 28/02/2023.
//
/*
Crea due array di due dimensioni diverse, riempili con
numeri consecutivi.
Crea e poi stampa a schermo i due array concatenati
Array1 [0,1,2,3,4]
Array2 [0,1,2]
ArrayRisultato [0,1,2,3,4,0,1,2]

*/

#include <iostream>

using namespace std;

 // creo una funzione array di due dimensioni diverse,
 // riempili con numeri consecutivi.

int main()
{
    int array1[5] = {0, 1, 2, 3, 4};
    int array2[3] = {0, 1, 2};
    int array3[8];
    for (int i = 0; i < 5; i++)// controla l'array1[i]'  e confronta l'array2[i]'
    {
        array3[i] = array1[i];
    }
    for (int i = 0; i < 3; i++) // controla l'array2[i]' e conto il numero di due dimensioni
    {
        array3[i + 5] = array2[i];
    }
    for (int i = 0; i < 8; i++) // conto il numero di due dimensioni
    {
        cout << array3[i] << endl;
    }

    return 0;
}