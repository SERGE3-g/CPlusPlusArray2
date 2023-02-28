//
// Created by gueas on 28/02/2023.
//

/*
Scrivere una funzione findLargestSumSubarray che, dato
un array di numeri interi, restituisce la somma massima di
un sottovettore consecutivo.
*/

#include <iostream>

using namespace std;
 int findLargestSumSubarray(int arr[], int n){
     int max = arr[0];
     for(int i = 1; i < n; i++){
         if(arr[i] > max){
             max = arr[i];
         }
     }
     return max;
 }


int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += array[i];
    }
    cout << sum << endl;
    return 0;
}
