#include <iostream>

using namespace std;

int main(void)
{
    int N, M, temp;
    int maxSum = 0;

    cin >> N >> M;
    int *cards = new int[N];

    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        cards[i] = temp;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {   
            if (i == j)
                continue;
            for (int k = 0; k < N; k++)
            {
                if (k == j || i == k)
                    continue;
                temp = cards[i] + cards[j] + cards[k];
                if (temp > maxSum && temp <= M)
                    maxSum = temp;
                if (maxSum == M)
                {
                    cout << maxSum << endl;
                    return 0;
                }
            }
        }
    }
    cout << maxSum << endl;
}