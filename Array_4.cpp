//
// Created by gueas on 28/02/2023.
//

/*
scrivi nel main un algoritmo che su un array, calcola e
restituisce un nuovo array che contenga solo gli elementi
dell'array di input che sono pari.

*/

#include <iostream>

using namespace std;

// crea nel main un algoritmo che su un array, calcola e restituisce un nuovo array

int main(){
    int arr[] = {0,1,2,3,4 ,5 ,6};
    int len = sizeof(arr)/sizeof(arr[0]);
    int evenArr[] = {};
    int v = 0;

    for(int i=0; i<len; i++){ // calcolo la dimensione del nuovo array
        if (arr[i] %2 == 0)
        {
            evenArr[v] = arr[i];
            v++;
        }
    }
    for(int i=0; i<v; i++){  // calcolo il valore del v
        cout << evenArr[i] << endl;

    }
    return 0;
}
