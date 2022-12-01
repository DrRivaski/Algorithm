#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2)
{
    vector<vector<int>> answer;

    for (int i = 0; i < arr1.size(); i++)
    {
        vector<int> tempAns;
        for (int j = 0; j < arr1[0].size(); j++)
        {
            tempAns.push_back(arr1[i][j] + arr2[i][j]);
        }
        answer.push_back(tempAns);
    }
    return answer;
}

int main(void)
{
    vector<vector<int>> arr1;
    vector<vector<int>> arr2;
    vector<vector<int>> answer;

    for (int i = 0; i < 2; i++)
    {
        vector<int> tempAns1;
        vector<int> tempAns2;
        for (int j = 0; j < 3; j++)
        {
            tempAns1.push_back(i + j);
            tempAns2.push_back(i * j);
        }
        arr1.push_back(tempAns1);
        arr2.push_back(tempAns2);
    }

    for (int i = 0; i < answer.size(); i++)
    {
        for (int j = 0; j < answer[0].size(); j++)
        {
            cout << answer[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}