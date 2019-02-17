#include <iostream>
using namespace std;

int main()
{
	//zadacha¹1
	//int dlina1; int dlina2; int dlina3;
	//cout << "vvedite pervuyu storonu: ";
	//cin >> dlina1;
	//cout << endl << "vvedite vtorou storonu: ";
	//cin >> dlina2;
	//cout << endl << "vvedite tretiu storonu:";
	//cin >> dlina3;
	//cout << endl;
	//bool proverka = false;
	//proverka = (dlina1 + dlina2) > dlina3 && (dlina3 + dlina2) > dlina1 && (dlina1 + dlina3) > dlina2;
	//if (proverka)
	//{
	//	cout << "Takoy treugol'nik cuschestvuet" << endl;
	//}
	//else
	//{
	//	cout << "Takoy treugol'nik ne cuschestvuet" << endl;
	//}





	int dengi;
	cout << "Vvedite chislo rubley: ";
		cin >> dengi;
		switch (dengi % 10)
		{
		case 1:
			if (dengi == 11)
			{
				cout << dengi << " rubley";
			}
			else
			{
				cout << dengi << " rubl'";
			}
			break;
		case 2:
		case 3:
		case 4:
			cout << dengi << " rublya";
			break;
		case
		case 5:
		case 6:
		case 7:
		case 8:
		case:9
		default:
			break;
		}










}