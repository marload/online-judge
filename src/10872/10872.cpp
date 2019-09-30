#include <iostream>

using namespace std;

int main(void)
{
    int N;
    int result = 1;
    cin >> N;

    for (int i = N; i > 0; i--)
    {
        result *= i;
    }
    cout << result << endl;
}