/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void sort(int array[], int size) {
    bool swap;
    int temp;

    do {
        swap = false;
        for (int i = 0; i < size-1; i++) {
            if (array[i] > array[i+1]) {
                temp = array[i];
                array[i] = array[i + 1];
                array[i+1] = temp;
                swap = true;
            }
        }
    } while (swap);
}

int main()
{
    int s = 5;
    int a[s] = {5, 27, 0, 9, 33};

    sort(a, s);
    for (int i = 0; i < s; i++) {
        cout << a[i] << endl;
    }
    return 0;
}
