#include <iostream>
using namespace std;

int main()
{
	//zadacha�1
	int dlina1; int dlina2; int dlina3;
	cout << "vvedite pervuyu storonu: ";
	cin >> dlina1;
	cout << endl << "vvedite vtorou storonu: ";
	cin >> dlina2;
	cout << endl << "vvedite tretiu storonu:";
	cin >> dlina3;
	cout << endl;
	bool proverka = false;
	proverka = (dlina1 + dlina2) > dlina3 && (dlina3 + dlina2) > dlina1 && (dlina1 + dlina3) > dlina2;
	if (proverka)
	{
		cout << "Takoy treugol'nik cuschestvuet" << endl;
	}
	else
	{
		cout << "Takoy treugol'nik ne cuschestvuet" << endl;
	}




	//zadacha�2
	int dengi;
	cout << "Vvedite chislo rubley: ";
		cin >> dengi;
		switch (dengi % 10)
		{
		case 1:
			if (dengi == 11)
			{
				cout << dengi << " rubley"<<endl;
			}
			else
			{
				cout << dengi << " rubl'"<<endl;
			}
			break;
		case 2:
		case 3:
		case 4:
			cout << dengi << " rublya"<<endl;
			break;
		case 0:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			cout << dengi << " rubley"<<endl;
		}



    //zadacha3
 �������� ������, �������� � ����������.
	cout << "true - 1, false - 0" << endl;
	bool enemyInFront;
	cout << "enemyInFront? "<<endl;
	cin >> enemyInFront;
	bool isBoss;
	cout << "Is it a boss? " << endl;
	cin >> isBoss;
	int robotHealth;
	cout << "How many heaith have robot? " << endl;
	cin >>robotHealth;
	cout << endl;
	//isprqavlenniy ��� ����
	bool shouldFire = true;
	if (enemyInFront || isBoss || robotHealth>100)
	{
          shouldFire = true;
		  cout << "Fire" << endl;
	}



	//zadacha4
	int ya; int vacya; int petya;
	int max; int min; int vsego;
	cout << "Vasha ocinka -  ";
	cin >> ya;
	cout << "Vacina ocinka -  ";
	cin >> vacya;
	cout << "Petina ocinka -  ";
	cin >>petya;
	max = ya;
		if (vacya > ya)
		{
			if (petya > vacya)
			{
				max = petya;
				min = ya;
			}
			else
			{
				max = vacya;
				if (petya>ya)
				{
					min = ya;
				}
				else
				{
					min = petya;
				}
			}
		}
		else if (petya > ya)
		{
			if (petya > vacya)
			{
				max = petya;
				if (vacya>ya)
				{
					min = ya;
				}
				else
				{
					min = vacya;
				}
			}
			else
			{
				max = vacya;
				min = ya;
			}
		}
		else
		{
			max = ya;
			if (petya>vacya)
			{
				min = vacya;
			}
			else
			{
				min = petya;
			}
		}
		cout << "Rezul'tat - " << ya + vacya + petya - min - max << endl;


    //zadacha5
int mesyac; int god; int den;
bool proverka= true;
cout << "Vvedite god: ";
cin >> god;
cout << "Vvedite mesyac: ";
cin >> mesyac;
cout << "Vvedite den': ";
cin >> den;
if (mesyac > 12 || mesyac < 1 || god<1 || den < 1)
{
	proverka = false;
}
else
switch (mesyac)
{
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
	if ( den>31)
	{
		proverka = false;
	}
	break;
case 2:
	if (god % 400 == 0 || god % 4 ==0 && god % 100 !=0)
	{
		if (den > 29)
		{
			proverka = false;
		}
    }
	else if (den > 28)
	{
		proverka = false;
	}
	break;
case 4:
case 6:
case 9:
case 11:
	if (den > 30)
	{
		proverka = false;
	}
	break;
}
if (proverka)
{
	cout << "True";
}
else
{
	cout << "false";
}



//zadacha6
int xNach; int yNach; int xStalo; int yStalo;
cout << "pozisiya figuri v nachale('x' i 'y' cherez probel)"<<endl;
cin >> xNach;
cin >> yNach;
cout << "pozisiya figuri posle peredvigeniya('x' i 'y' cherez probel)"<<endl;
cin >> xStalo;
cin >> yStalo;

if (xNach == xStalo || yNach == yStalo || (xNach - xStalo) == (yNach - yStalo))
{
	cout << "figura moget";
}
else
{
	cout << "figura ne moget";
}




}