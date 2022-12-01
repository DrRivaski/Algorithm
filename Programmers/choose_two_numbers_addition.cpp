#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> numbers)
{
    vector<int> answer;
    for (int i = 0; i < numbers.size() - 1; i++)
    {
        for (int j = i + 1; j < numbers.size(); j++)
        {
            answer.push_back(numbers[i] + numbers[j]);
        }
    }
    sort(answer.begin(), answer.end());
    answer.erase(unique(answer.begin(),answer.end()),answer.end());
    return answer;
}

int main(void)
{

    vector<int> input;
    int tempnum;

    for (int i = 0; i < 5; i++)
    {
        cin >> tempnum;
        input.push_back(tempnum);
    }
    vector<int> answer = solution(input);
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << ", ";
    }
    return 0;
}