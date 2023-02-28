//
// Created by gueas on 28/02/2023.
//
/*

Scrivi una funzione che prenda in input un array di interi e
la sua lunghezza e restituisca la somma di tutti gli
elementi dell'array.


*/

#include <iostream>

using namespace std;

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