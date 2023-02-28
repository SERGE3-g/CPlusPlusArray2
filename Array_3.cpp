//
// Created by gueas on 28/02/2023.
//

/*

Scrivi una funzione che prenda in input un array di interi e
la sua lunghezza e restituisca true se l'array è ordinato in
ordine crescente e false altrimenti.


*/

#include <iostream>

using namespace std;


bool isOrdered(int arr[],int len){ //  creo una funzione per verificare se l'array e' ordinato
    for(int i = 0; i < len -1;i++){
        if (arr[i] > arr[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    int arr[] = {1,2,5,6,7};
    int len =sizeof(arr)/sizeof(arr[0]);
    bool order =isOrdered(arr,len);
    if (order){
        cout<<"L array e' in ordine crescente"<<endl;
    }else
    {
        cout<<"L array non e' in ordine crescente"<<endl;
    }
    return 0;
}