//Sam Carlson
//CIS1202.501
//2022-05-01
//Templates
#include <iostream>
using namespace std;

template <typename T>
T half (T num)
{
	return num / 2;
}

int half(int num)
{
	return static_cast<float>(round(num / 2.0));
}



int main()
{
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;
}


