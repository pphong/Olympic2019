#include <iostream>

using namespace std;

int checkElementsODD(int num)
{
	if (num == 0 || num % 2 == 0)
	{
		return num;
	}
	else
	{
		return checkElementsODD(num / 10);
	}
}

void input(int &n, int a[100])
{
	cout << "input n :"; cin >> n;
	cout << endl;
	cout << "input elements : " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

void output(int n, int a[100]) 
{
	int maxODD = 0;
	for (int i = 0; i < n; i++)
	{
		int ODD = checkElementsODD(a[i]);
		if (ODD == 0 && a[i] > maxODD)
			maxODD = a[i];
	}
	
	if (maxODD != 0)
		cout << "max ODD : " << maxODD << endl;
	else
		cout << "have no odd number satisfies the problem!" << endl;
}

void main()
{
	int a[100];
	int n = 0;
	input(n, a);
	output(n, a);

	system("pause");
}