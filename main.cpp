/*3) �������� ���������, ����������� ������������ ����������� �� n �� �. �
��������� ������ ������������ �����, ����������� �������� ��������.*/
#include <iostream>
using namespace std;

long long C(int q, int w)
{
	if ((w < 1) || (q == w))
	{
		return 1;
	}
	else
	{
		return (C(q - 1, w - 1) + C(q - 1, w));
	};
}

int main()
{
	int n, k;
	cin >> n >> k;
	if (k > n)
	{cout << "???";
	}
	else
	{cout << C(n, k);
	};
}
