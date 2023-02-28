//
// Created by gueas on 28/02/2023.
//

/*
Scrivi una funzione che prenda in input due array di interi
e le loro lunghezze e restituisca il numero di elementi
comuni ai due array. Ad esempio, se gli array di input
sono {1, 2, 3, 4} e {2, 4, 6, 8}, la funzione dovrebbe
restituire 2 perché ci sono due elementi comuni: 2 e 4.
*/

#include <iostream>

using namespace std;

int main()
{
    int array1[4] = {1, 2, 3, 4};
    int array2[4] = {2, 4, 6, 8};
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (array1[i] == array2[j])
            {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
