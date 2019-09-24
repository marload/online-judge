#include <iostream>

using namespace std;

int main(void)
{
    int sumOfBooks;
    int temp;

    cin >> sumOfBooks;
    for (int i = 0; i < 9; i++)
    {
        cin >> temp;
        sumOfBooks -= temp;
    }

    cout << sumOfBooks << endl;
}