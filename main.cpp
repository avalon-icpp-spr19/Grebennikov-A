#include <iostream>
#include <limits>//������� ����� ������

using namespace std;


int main()
{
	/*cout << (int)numeric_limits<char>::max() << endl;*/
	cout << (int)numeric_limits<char>::digits << endl;
	unsigned int a = 10;
	long long int c = 1llu;//8 ���� � ������
	cout << sizeof(c) << endl;
	cout << &a << endl;//& - �����, ������ ������
	int b;
	cout << &b << endl;
	int d = 0xAA;
	cout << d << endl;
	cout<<sizeof(unsigned int) << endl;//������� � ������ �������� ����� 
	cout << sizeof(a) << endl;


	//for (int i= 100; i >= 0; i--)//unsigned int -����������� ����
	//{
	//	cout << i << endl;
	//}

	bool n = true;//logicheskiy
	//������������
	0.5F;
	float t = 2.2e2;
	double m = 0.5;

	//char s = 'g';
	char s = 1;
	cout << s << endl;
	setlocale(0, "");
	/*for (unsigned char u = 1; u < 225; u++)
	{
		cout << u << endl;

}*/

}


