#include <iostream>
#include <string>
#include <vector>

using namespace std;

int numOfMeasure(int num)
{
    int cnt = 0;
    for (int i = num; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
                cnt++;
        }
    }
    
    return cnt;
}

int solution(int left, int right)
{
    int answer = 0;

    for (int i = left; i <= right; i++)
    {
        if (numOfMeasure(i) % 2 == 0)
            answer += i;
        else
            answer -= i;
    }
    return answer;
}

int main(void)
{
    int answer = solution(13, 15);

    cout << answer;
    return 0;
}