#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int vacationPeriod;
    int koreanHomeworkPages;
    int mathHomeworkPages;
    int maxKoreanStudyPages;
    int maxMathStudyPages;

    cin >> vacationPeriod >> koreanHomeworkPages >> mathHomeworkPages >> maxKoreanStudyPages >> maxMathStudyPages;

    int fastestKorean = koreanHomeworkPages / maxKoreanStudyPages + ((koreanHomeworkPages % maxKoreanStudyPages != 0) ? 1 : 0);
    int fastestMath = mathHomeworkPages / maxMathStudyPages + ((mathHomeworkPages % maxKoreanStudyPages != 0) ? 1 : 0);

    cout << vacationPeriod - max(fastestKorean, fastestMath) << endl;
    return 0;
}