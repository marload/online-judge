#include <iostream>
#include <list>

using namespace std;

int main(void) {
    int num;
    int cardNum;
    cin >> num;
    list<int> line;
    list<int>::iterator backIter;

    for (int i=1; i<=num; i++) {
        backIter = line.begin();
        cin >> cardNum;
        for (int j=0; j<cardNum; j++)
            backIter++;
        
        line.insert(backIter, i);
    }

    const int size=line.size();
    for (int i=0; i < size ; i++) {
        cout << line.back() << " ";
        line.pop_back();
    }
    
}