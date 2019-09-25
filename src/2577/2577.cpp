#include <iostream>

using namespace std;

int main(void)
{
    int A, B, C;
    int multipleResult;
    int numberTable[10] = {
        0,
    };

    cin >> A >> B >> C;
    multipleResult = A * B * C;

    while (multipleResult > 0)
    {
        numberTable[multipleResult % 10] += 1;
        multipleResult /= 10;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << numberTable[i] << endl;
    }
}