#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool solution(int x) 
{
	int tempX = x;
	int dec = 0;
	vector<int> numVec;

	while (tempX != 0)
	{
		numVec.push_back(tempX % 10);
		tempX = tempX / 10;
		dec++;
	}

	int sum = 0;
	for (int i = 0; i < numVec.size(); i++)
		sum += numVec[i];

	cout << "x = " << x << "sum = " << sum << endl;
	cout << x % sum << endl;

	bool answer;
	if (x%sum == 0)
		answer = true;
	else
		answer = false;
	return answer;
}

int main(void)
{
	if (solution(11))
		cout << "true\n";
	else
		cout << "false\n";
	return 0;
}