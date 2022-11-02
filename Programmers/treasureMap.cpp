#include <string>
#include <vector>
#include <iostream>

using namespace std;

int map[16][16];

void changeMap(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (map[i][j] == 1)
                map[i][j] = '#';
            else
                map[i][j] = ' ';
        }
    }
}

void calcBin(int n, vector<int> arr1, vector<int> arr2)
{
    for (int i = 0; i < n; i++)
    {
        int j = n - 1;
        int tempNum = arr1[i];
        while (tempNum > 0)
        {
            map[i][j] = tempNum % 2;
            tempNum = tempNum / 2;
            j--;
        }
        while (j >= 0)
        {
            map[i][j] = 0;
            j--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        int j = n - 1;
        int tempNum = arr2[i];
        while (tempNum > 0)
        {
            if (map[i][j] != 1)
                map[i][j] = tempNum % 2;
            tempNum = tempNum / 2;
            j--;
        }
        while (j >= 0)
        {
            if (map[i][j] != 1)
                map[i][j] = 0;
            j--;
        }
    }
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2)
{
    calcBin(n, arr1, arr2);
    changeMap(n);
    vector<string> answer;
    for (int i = 0; i < n; i++)
    {
        string tempAns = "";
        for (int j = 0; j < n; j++)
        {
            tempAns += map[i][j];
        }
        answer.push_back(tempAns);
    }
    return answer;
}

int main(void)
{
    int n;
    cin >> n;

    vector<int> arr1;
    vector<int> arr2;

    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        arr1.push_back(temp);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        arr2.push_back(temp);
    }
    solution(n, arr1, arr2);
}