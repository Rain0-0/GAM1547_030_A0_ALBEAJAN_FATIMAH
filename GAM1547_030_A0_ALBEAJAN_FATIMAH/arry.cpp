#include "arry.h"
#include <iostream>
#include <algorithm>

using namespace std;
void arry::makeArry(int arrySize)
{
    int arrySize = 0;
    cout << "Enter a size for the array : ";
    cin >> arrySize;

    float* m_arry = new float[arrySize];

    for (int i = 0; i < arrySize; i++) {
        cout << "enter a float";
        cin >> m_arry;

    }

    arry::highest();
}
float arry::highest(float* m_arry[])
{
    sort()
}


