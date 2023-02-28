//
// Created by gueas on 28/02/2023.
//

/*

Scrivi una funzione che prenda in input un array di interi e
la sua lunghezza e restituisca l'elemento più grande
dell'array.

*/

#include <iostream>

using namespace std;

int maxNumber(int arr[],int len){
    int max = 0;
    for(int i = 0; i < len;i++){
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int arr[5] = {0,1,2,10,4};
    int len = sizeof(arr)/sizeof(arr[0]);

    cout<<"L elemento piu' grande dell'array e': "<<maxNumber(arr, len)<<endl;
}