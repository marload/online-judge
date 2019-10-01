#include <iostream>

using namespace std;

int abs(int num) {
    if (num >= 0)
        return num;
    else
        return -1*num;
}

int main(void) {
    int score = 0;
    int temp;
    int arr[10];

    for (int i=0; i<10; i++) {
        cin >> temp;
        arr[i] = temp;
    }

    for (int i=0; i<10; i++) {
        temp = arr[i];
        score += temp;
        
        if (score >= 100) {
            if (score == 100) {
                cout << 100 << endl;
                break;
            }
            else if (abs(100-score) == abs(100-(score-temp))) {
                cout << score << endl;
                break;
            }
            else if (abs(100-score) > abs(100-(score-temp))) {
                cout << score-temp << endl;
                break;
            }
            else if (abs(100-score) < abs(100-(score-temp))) {
                cout << score << endl;
                break;
            }
        }
    }
}