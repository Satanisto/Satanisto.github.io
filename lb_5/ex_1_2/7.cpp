#include <iostream>
#include <cstring> 
#include <vector> 
#include <iomanip>
#include <windows.h>
#include <ctime>
using namespace std;
char country[10][10] = {"Ukrain", "Russia", "USA", "Russia", "Ukrain", "Ukrain", "Russia", "USA", "Ukrain", "Russia"};
char firm[10][10] = {"Iti", "DrYgiy", "Iakist", "Neyman", "Vafli", "Pusir", "Ruslo", "Lopital", "Microsoft", "Meshkov"};
char vestovar[10][10] = {"Komp", "Piki", "Tochilki", "Stooliya", "Telek", "Monitor", "Komp", "Knife", "Knigi", "Komp"};
 // ׀½׀°��ˆ ��¿½��¿½׀¿׀¸��¿½��¿½׀¾׀÷ ����׀¸��€׀¼ , ׀° ׀²׀²׀µ��€��…��ƒ ׀½׀°��¿½��¿½ ��¿½��¿½׀¿׀¸��¿½��¿½׀¾׀÷ ׀²��¿½��¿½׀µ��… ׀¸׀¼��‘׀½ ׀¿׀¾����׀¾׀¼��ƒ ��‡����׀¾ ��¿½��¿½ ׀¿׀¾׀´׀·׀°׀µ׀±׀°׀»��¿½��¿½��¿½��¿½ ׀÷׀°׀¶׀´��‹׀¹ ��€׀°׀· ��¿½��¿½����׀¾ ׀²׀±׀¸׀²׀°������¿½��¿½ ��€��ƒ��‡��‘׀½׀÷׀°׀¼׀¸

struct Tov // ��¿½��¿½������€��ƒ׀÷��€��ƒ��€׀° ��¿½��¿½ ׀½׀°׀·׀²׀°׀½׀¸׀µ׀¼ ׀¢׀¾׀²(����׀¾׀²׀°��€)
{
	char name[12]; //׀¸׀¼��¿½��¿½ ����׀¾׀²׀°��€׀°
	char phyrm[12]; //׀½׀°׀·׀²׀°׀½׀¸׀µ ����׀¸��€׀¼��‹
	char count[12]; // ��¿½��¿½������€׀°׀½׀°
	int value; // ��†׀µ׀½׀° ����׀¾׀²׀°��€׀°
	int kolvo; // ׀÷׀¾׀»׀¸��‡׀µ��¿½��¿½����׀²׀¾
	int year; // ׀³׀¾׀´
	int month; // ׀¼׀µ��¿½��¿½��¿½��¿½��†
	int day; // ׀´׀µ׀½��¿½��¿½
};

void z10(Tov *str, const int n)
{
	cout << "Firma kotra v 2013 year iz Ukrain dostavila kompu :\n" ;
	int i;
	for(i = 0; i < n; i++)
		if(str[i].year == 2013 && !strcmp(str[i].count, "Ukrain") && !strcmp(str[i].name, "Komp"))
		{
			cout << str[i].phyrm << endl;
			break;
		}
}

void z9(Tov *str, const int n)
{
	const int q = 10;
	int i, j;
	vector<int> a(q); //��¿½��¿½׀¾׀·׀´׀°��‘׀¼ ׀²׀µ׀÷����׀¾��€ (׀÷׀°׀÷ ׀¼׀°��¿½��¿½��¿½��¿½׀¸׀² ����׀¾׀÷ ׀»��ƒ��‡��ˆ׀µ )
	for(j = 0; j < q; j++)
		for(i = 0; i < n; i++)
			if(!strcmp(str[i].phyrm, firm[j]))
				a[j] += str[i].kolvo;
	j = 0;
	for(i = 0; i < q; i++)
		if(a[i] > j)
			j = a[i];

	for(i = 0; i < q; i++)
		if(a[i] == j)
			cout << "Firma s max kolvom tovarov :\n" << firm[i] << endl;

}

void z8(Tov *str, const int n) // ������ƒ���� ׀¿��€׀¾׀±׀»׀µ׀¼׀° , ׀¸��¿½��¿½׀¿��€׀°׀²��¿½��¿½����׀µ, ׀¼׀½׀µ ׀² ׀³׀¾׀»׀¾׀²��ƒ ׀½׀¸��‡׀µ׀³׀¾ ׀´��€��ƒ׀³׀¾׀³׀¾ ׀½׀µ ׀¿��€׀¸��ˆ׀»׀¾ ׀÷��€׀¾׀¼׀µ ׀÷׀°׀÷ ������ƒ׀¿׀¾ ׀½׀°׀¿׀¸��¿½��¿½׀°������¿½��¿½ ��¿½��¿½����׀¾ ׀²��¿½��¿½��‘ ��€��ƒ��‡׀÷׀°׀¼׀¸
{
	const int q = 10;
	int i, j;
	vector<int> a(q);//��¿½��¿½׀¾׀·׀´׀°��‘׀¼ ׀²׀µ׀÷����׀¾��€ (׀÷׀°׀÷ ׀¼׀°��¿½��¿½��¿½��¿½׀¸׀² ����׀¾׀÷ ׀»��ƒ��‡��ˆ׀µ )
	for(j = 0; j < q; j++)
		for(i = 0; i < n; i++)
			if(str[i].year == 2013)
				if(!strcmp(str[i].phyrm, firm[j]))
					a[j] += str[i].value * str[i].kolvo;
	j = 0;
	for(i = 0; i < q; i++)
		if(a[i] > j)
			j = a[i];

	for(i = 0; i < q; i++)
		if(a[i] == j)
			cout << "Firma s max kolvom summi value tovarov za 2013 year :\n" << firm[i] << endl;
}

void z7(Tov *str, const int n)
{
	int i, sum = 0;

	for(i = 0; i < n; i++)
		if(str[i].year == 2013 && !strcmp(str[i].count, "USA")) //׀µ��¿½��¿½׀»׀¸ ����׀¾׀²׀°��€ ׀·׀° 2013 ׀³׀¾׀´ ׀¸ ׀¾���� ��¿½��¿½��ˆ׀°, ����׀¾ ׀¿��€׀¸׀±׀¾׀²׀»��¿½��¿½׀µ׀¼ ��†׀µ׀½��ƒ ׀·׀° ׀µ׀³׀¾ ����׀¾׀²׀°��€��‹
			sum += (str[i].value * str[i].kolvo);
	cout << "Summa vartosti tovarov za 2013 year USA :\n" << sum << " ruskih dollarov" << endl;
	sum = 0;
	for(i = 0; i < n; i++)
		if(str[i].year == 2013 && !strcmp(str[i].count, "Ukrain")) //׀µ��¿½��¿½׀»׀¸ ����׀¾׀²׀°��€ ׀·׀° 2013 ׀³׀¾׀´ ׀¸ ׀¾���� ��ƒ׀÷��€׀°׀¸׀½��‹, ����׀¾ ׀¿��€׀¸׀±׀¾׀²׀»��¿½��¿½׀µ׀¼ ��†׀µ׀½��ƒ ׀·׀° ׀µ׀³׀¾ ����׀¾׀²׀°��€��‹
			sum += (str[i].value * str[i].kolvo);
	cout << "Summa vartosti tovarov za 2013 year Ukrain :\n" << sum << " ruskih dollarov" << endl;
	sum = 0;
	for(i = 0; i < n; i++)
		if(str[i].year == 2013 && !strcmp(str[i].count, "Russia")) //׀µ��¿½��¿½׀»׀¸ ����׀¾׀²׀°��€ ׀·׀° 2013 ׀³׀¾׀´ ׀¸ ׀¾���� ��€׀°��ˆ׀÷׀¸, ����׀¾ ׀¿��€׀¸׀±׀¾׀²׀»��¿½��¿½׀µ׀¼ ��†׀µ׀½��ƒ ׀·׀° ׀µ׀³׀¾ ����׀¾׀²׀°��€��‹
			sum += (str[i].value * str[i].kolvo);
	cout << "Summa vartosti tovarov za 2013 year Russia :\n" << sum << " ruskih dollarov" << endl;
}

void z6(Tov *str, const int n)
{
	int i;
	cout << "Phirma kotoraya postovliaet monitoru in mart into 2013 year och diochivo :\n";
	for(i = 0; i < n; i++)
		if(!strcmp(str[i].name, "Monitor") && str[i].value < 1500 && str[i].month == 3 && str[i].year == 2013)
			cout << str[i].phyrm << endl;
}

void z5(Tov *str, const int n)
{
	int i, j, b = 0, a[1000], max = 0;
	char c[1000][10];
	for(i = 0; i < n; i++)
		if(str[i].year == 2013 || str[i].year == 2012 || str[i].year == 2011)
			for(j = 0; j < n; j++)
				strcpy(c[j], str[i].count);

	for(i = 0; i < n; i++) //׀·׀°׀¿��ƒ��¿½��¿½׀÷׀°׀µ׀¼ ��†׀¸׀÷׀» 
	{//׀½׀°��…׀¾׀´׀¸׀¼ ׀÷׀°׀÷׀°��¿½��¿½ ��¿½��¿½������€׀°׀½׀° ׀²��¿½��¿½������€׀µ��‡׀°׀µ������¿½��¿½��¿½��¿½ ��‡׀°��‰׀µ ׀²��¿½��¿½׀µ׀³׀¾
		for(j = 0; j < n; j++)
			if(c[i] == c[j])
				b++;
		a[i] = b; // ׀·׀°׀¿׀¸��¿½��¿½��‹׀²׀°׀µ׀¼ ��¿½��¿½׀÷׀¾׀»��¿½��¿½׀÷׀¾ ��€׀°׀· ׀²��¿½��¿½������€׀µ��‡׀°׀µ������¿½��¿½��¿½��¿½ ׀÷׀°׀÷׀°��¿½��¿½ ����׀¸��€׀¼׀°
	}

	for(i = 0; i < n; i++)
		if(a[i] > max) //׀½׀°��…׀¾׀´׀¸׀¼ ׀¿׀¾׀´ ׀÷׀°׀÷׀¸׀¼ ׀½׀¾׀¼׀µ��€׀¾׀¼ ����׀¸��€׀¼׀° ׀²��¿½��¿½������€׀µ��‡׀°׀µ������¿½��¿½��¿½��¿½ ��‡׀°��‰׀µ ׀²��¿½��¿½׀µ׀³׀¾
			max = a[i];

	for(i = 0; i < n; i++)
		if(a[i] == max) // ׀²��‹׀²׀¾׀´׀¸׀¼ ����׀¸��€׀¼��ƒ ׀÷׀¾����׀¾��€׀°��¿½��¿½ ׀·׀°׀¿׀¸��¿½��¿½׀°׀½׀° ׀¿׀¾׀´ ��¿½��¿½����׀¸׀¼ ׀½׀¾׀¼׀µ��€׀¾׀¼ 
		{
			cout << "Country tovar kotoroy prihodil samo chasto s 2011 po 2013 year :\n" << c[i] << endl;
			break;
		}

}

void z4(Tov *str, const int n)
{
	cout << "Ukrain has in 2013 year and with value > 2000 takih postachalnikiv :\n";
 	int i;
	for(i = 0; i < n; i++)
		if(!strcmp(str[i].count, "Ukrain") && str[i].year == 2013 && str[i].value > 2000) //׀µ��¿½��¿½׀»׀¸ ׀²��‹׀¿׀¾׀»׀½��¿½��¿½��¿½��¿½������¿½��¿½��¿½��¿½ ׀¾׀´׀½׀¾׀²��€׀µ׀¼׀µ׀½׀½׀¾ ׀²��¿½��¿½׀µ ��ƒ��¿½��¿½׀»׀¾׀²׀¸��¿½��¿½ ׀²��‹׀²׀¾׀´׀¸������¿½��¿½ ����׀¸��€׀¼׀°
			cout << str[i].phyrm << endl;
}

void z3(Tov *str, const int n)
{
	int i, sum = 0;

	for(i = 0; i < n; i++)
		if(str[i].year == 2013 || str[i].year == 2012 || str[i].year == 2011) //׀µ��¿½��¿½׀»׀¸ ����׀¾׀²׀°��€ ׀·׀° 2011 -2013 ׀³׀¾׀´׀° , ����׀¾ ׀¿��€׀¸׀±׀¾׀²׀»��¿½��¿½׀µ׀¼ ��†׀µ׀½��ƒ ׀·׀° ׀µ׀³׀¾ ����׀¾׀²׀°��€��‹
			sum += (str[i].value * str[i].kolvo);

	cout << "Summa vartosti tovarov za 2011-2013 years :\n" << sum << " ruskih dollarov" << endl;
}

void z2(Tov *str, const int n) //׀² �������׀¾׀¹ ������ƒ׀½׀÷��†׀¸׀¸ ׀´׀µ׀»׀°׀µ׀¼ ����׀¾׀¶׀µ ���׀°׀¼׀¾׀µ ��‡����׀¾ ׀¸ ׀² ׀¿��€׀µ׀´��‹׀´��ƒ��‰׀µ׀¹
{								// ����׀¾׀»���׀÷׀¾ ׀¸��‰׀µ׀¼ ׀¼׀¸׀½׀¸׀¼��ƒ׀¼ ׀° ׀½׀µ ׀¼׀°׀÷���׀¸׀¼��ƒ׀¼
	int i, j, b = 0, min = n, a[1000];
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < i; j++)
			if(str[i].phyrm == str[j].phyrm)
				i++;

		for(j = 0; j < n; j++)
			if(str[i].phyrm == str[j].phyrm)
				b++;

		a[i] = b;
	}
	
	for(i = 0; i < n; i++)
		if(a[i] < min)
			min = a[i];

	for(i = 0; i < n; i++)
		if(a[i] == min)
		{
			cout << "Phirma tovar kotoroy prihodit samo redko :\n" << str[i].phyrm << endl;
			break;
		}
}

void z1(Tov *str, const int n)
{
	int i, j, b = 0, max = 0, a[1000];
	for(i = 0; i < n; i++) //׀·׀°׀¿��ƒ��¿½��¿½׀÷׀°׀µ׀¼ ��†׀¸׀÷׀» 
	{//׀½׀°��…׀¾׀´׀¸׀¼ ׀÷׀°׀÷׀°��¿½��¿½ ����׀¸��€׀¼׀° ׀²��¿½��¿½������€׀µ��‡׀°׀µ������¿½��¿½��¿½��¿½ ��‡׀°��‰׀µ ׀²��¿½��¿½׀µ׀³׀¾
		for(j = 0; j < i; j++)
			if(str[i].phyrm == str[j].phyrm)
				b++;
		a[i] = b; // ׀·׀°׀¿׀¸��¿½��¿½��‹׀²׀°׀µ׀¼ ��¿½��¿½׀÷׀¾׀»��¿½��¿½׀÷׀¾ ��€׀°׀· ׀²��¿½��¿½������€׀µ��‡׀°׀µ������¿½��¿½��¿½��¿½ ׀÷׀°׀÷׀°��¿½��¿½ ����׀¸��€׀¼׀°
	}

	for(i = 0; i < n; i++)
		if(a[i] > max) //׀½׀°��…׀¾׀´׀¸׀¼ ׀¿׀¾׀´ ׀÷׀°׀÷׀¸׀¼ ׀½׀¾׀¼׀µ��€׀¾׀¼ ����׀¸��€׀¼׀° ׀²��¿½��¿½������€׀µ��‡׀°׀µ������¿½��¿½��¿½��¿½ ��‡׀°��‰׀µ ׀²��¿½��¿½׀µ׀³׀¾
			max = a[i];

	for(i = 0; i < n; i++)
		if(a[i] == max) // ׀²��‹׀²׀¾׀´׀¸׀¼ ����׀¸��€׀¼��ƒ ׀÷׀¾����׀¾��€׀°��¿½��¿½ ׀·׀°׀¿׀¸��¿½��¿½׀°׀½׀° ׀¿׀¾׀´ ��¿½��¿½����׀¸׀¼ ׀½׀¾׀¼׀µ��€׀¾׀¼ 
		{
			cout << "Phirma tovar kotoroy prihodit samo chasto :\n" << str[i].phyrm << endl;
			break;
		}
}

void gat(Tov *str, const int n)
{
	cout << "For exit - enter exit, for receive a response to a task, enter its number" << endl;
	char s[12]; // ��¿½��¿½׀¾׀·׀´׀°��‘׀¼ ��¿½��¿½׀¸׀¼׀²׀¾׀»��¿½��¿½׀½��‹׀¹ ׀¼׀°��¿½��¿½��¿½��¿½׀¸׀² ׀² ׀÷׀¾����׀¾��€׀¹ ׀±��ƒ׀´��ƒ���� ׀·׀°׀¿׀¸��¿½��¿½��‹׀²׀°������¿½��¿½��¿½��¿½��¿½��¿½ ׀÷׀¾׀¼׀°׀½׀´��‹
	while (true) // ׀·׀°׀¿��ƒ��¿½��¿½׀÷׀°׀µ׀¼ ׀±׀µ��¿½��¿½׀÷׀¾׀½׀µ��‡׀½��‹׀¹ ��†׀¸׀÷׀» 
	{
		cout << "What do you want? "; // ׀¿��€׀¾��¿½��¿½׀¸׀¼ ��ƒ ��¿½��¿½׀·׀²׀µ��€��¿½��¿½ ׀²׀²׀µ��¿½��¿½����׀¸ ׀÷׀¾׀¼׀¼׀°׀½׀´��ƒ 
		gets_s(s); //׀¿׀¾׀»��ƒ��‡׀°׀µ׀¼ ׀µ��‘

		if (!strcmp(s, "exit")) //��¿½��¿½׀²׀µ��€��¿½��¿½׀µ׀¼ ׀µ��‘ ��¿½��¿½׀¾ ��¿½��¿½׀»׀¾׀²׀¾׀¼ exit,׀µ��¿½��¿½׀»׀¸ ׀¾׀½׀¸ ��€׀°׀²׀½��‹, ����׀¾ ׀²��‹��…׀¾׀´׀¸׀¼ ׀¸׀· ��†��‹׀÷׀»׀°, ׀¸ ׀÷׀°׀÷ ��¿½��¿½׀»׀µ׀´��¿½��¿½����׀²׀¸׀µ ׀¸׀· ������ƒ׀½׀÷��†׀¸׀¸ 
			return;
		else  if(!strcmp(s, "1.10"))
			z10(str, n);
		else  if(!strcmp(s, "1.9"))
			z9(str, n);
		else  if(!strcmp(s, "1.8"))
			z8(str, n);
		else  if(!strcmp(s, "1.7"))
			z7(str, n);
		else  if(!strcmp(s, "1.6"))
			z6(str, n);
		else  if(!strcmp(s, "1.5"))
			z5(str, n);
		else  if(!strcmp(s, "1.4"))
			z4(str, n);
		else  if(!strcmp(s, "1.3"))
			z3(str, n);
		else  if(!strcmp(s, "1.1"))
			z1(str, n);
		else  if(!strcmp(s, "1.2"))
			z2(str, n);

	}
}
void set_all(Tov *str, int m) // ������ƒ׀½��†׀¸��¿½��¿½ ׀¿��€׀¸׀½׀¸׀¼׀°׀µ���� ��¿½��¿½��¿½��¿½��‹׀»׀÷��ƒ ׀½׀° ׀¾׀±׀»׀°��¿½��¿½������¿½��¿½ ׀¿׀°׀¼��¿½��¿½����׀¸ ׀² ׀÷׀¾����׀¾��€׀¾׀¹ ׀»׀µ׀¶׀¸���� ׀¼׀°��¿½��¿½��¿½��¿½׀¸׀² (׀´׀°, ����׀°׀÷ ׀¼׀¾׀¶׀½׀¾ ))) ׀¸ ��‡׀¸��¿½��¿½׀»׀¾ ׀÷׀»׀¸׀µ׀½����׀¾׀²
{
	int b;
	srand(time(0)); // ׀·׀°׀¿��ƒ��¿½��¿½׀÷׀°׀µ׀¼ ��€׀°׀½׀´׀¾׀¼ 
	for (int i = 0; i < m; i++) // ׀·׀°׀¿��ƒ��¿½��¿½׀÷׀°׀µ׀¼ ��†׀¸׀÷׀» ׀² ׀÷׀¾����׀¾��€׀¾׀¼ ׀±��ƒ׀´��ƒ���� ׀¿��€׀¸��¿½��¿½׀²׀¾׀µ׀½��‹ ׀·׀½׀°��‡׀µ׀½׀¸��¿½��¿½ ׀²��¿½��¿½׀µ׀¼��ƒ ��ˆ׀¾ ׀¿׀¾׀÷׀° ��‡����׀¾ ׀µ��¿½��¿½������¿½��¿½ (׀²��¿½��¿½׀µ ׀¸׀¼׀µ׀½׀½׀° ׀²��‹׀´��ƒ׀¼׀°׀½��‹ , ׀²��¿½��¿½׀µ ��‡׀¸��¿½��¿½׀»׀° ��¿½��¿½׀»��ƒ��‡׀°׀¹׀½��‹, ׀²��¿½��¿½׀µ ��¿½��¿½׀¾׀²׀¿׀°׀´׀µ׀½׀¸��¿½��¿½ ��¿½��¿½ ��€׀µ׀°׀»��¿½��¿½׀½׀¾��¿½��¿½������¿½��¿½��¿½��¿½ ��¿½��¿½׀»��ƒ��‡׀°׀½��‹׀µ)
	{
		b = rand() % 10;
		strcpy(str[i].phyrm, firm[b]); // ׀·׀°׀½׀¾��¿½��¿½׀¸׀¼ ׀¿׀µ��€׀²��ƒ��¿½��¿½ ����׀¸��€׀¼��ƒ ׀¸׀· ׀½׀°��ˆ׀µ׀³׀¾ ��¿½��¿½׀¿׀¸��¿½��¿½׀÷׀° ׀² ��¿½��¿½��¿½��¿½׀´׀° 
		strcpy(str[i].name, vestovar[b]); //׀¿׀µ��€׀²׀¾׀µ ׀½׀°׀·׀²׀°׀½׀¸׀µ ����׀¾׀²׀°��€׀°
		strcpy(str[i].count, country[b]);
		str[i].value = 1 + rand() % 4000; //��†׀µ׀½׀° ����׀¾׀²׀°��€׀° ׀¾���� 1 ׀´׀¾ 4000 ׀²׀÷׀»��¿½��¿½��‡׀¸����׀µ׀»��¿½��¿½׀½׀¾
		str[i].kolvo = 1 + rand() % 20; // ׀÷׀¾׀»׀²׀¾ ����׀¾׀²׀°��€׀° ׀¾���� 1 ׀´׀¾ 20 ׀²׀÷׀»��¿½��¿½��‡׀¸����׀µ׀»��¿½��¿½׀½׀¾
		str[i].year = 2010 + rand() % 6; // ׀³׀¾׀´ ׀¾���� 2010 ׀´׀¾ 2015 ׀²׀÷׀»��¿½��¿½��‡׀¸����׀µ׀»��¿½��¿½׀½׀¾
		str[i].month = 1 + rand() % 12; // ��€׀°׀½׀´׀¾׀¼׀½��‹׀µ ׀¼׀µ��¿½��¿½��†׀° ׀¾���� 1 ׀´׀¾ 12 ׀÷׀»׀±��‡׀¸����׀µ׀»��¿½��¿½׀½׀¾
		str[i].day = 1 + rand() % 28; // ��€׀°׀½׀´׀¾׀¼׀½��‹׀µ ׀´׀½׀¸ ׀¾���� 1 ׀´׀¾ 28 , ׀¿׀¾����׀¾׀¼��ƒ ��‡����׀¾ ׀² ��€׀¾���� ��¿½��¿½ ׀µ׀±׀°׀» ׀½׀°׀¿��€��¿½��¿½׀³׀°������¿½��¿½��¿½��¿½��¿½��¿½
	}
}

void main2()
{
	const int n = 1000; // ׀÷׀¾׀»׀¸��‡׀µ��¿½��¿½����׀²׀¾ ׀÷׀»׀¸׀µ׀½����׀¾׀²
	Tov tovar[n]; // ׀÷׀°׀÷׀¾׀¹ ����׀¾ ׀¼׀°��¿½��¿½��¿½��¿½׀¸׀² , ׀·׀°׀±��‹׀» ׀÷׀°׀÷ ׀½׀°׀·��‹׀²׀°׀µ������¿½��¿½��¿½��¿½ ׀° ׀³��ƒ׀³׀»׀¸������¿½��¿½ ׀»׀µ׀½��¿½��¿½ 
    set_all(tovar, n); // ׀¾����׀¿��€׀°׀²׀»��¿½��¿½׀µ׀¼ ׀¼׀°��¿½��¿½��¿½��¿½׀¸׀² ׀² ������ƒ׀½׀÷��†׀¸��¿½��¿½ ׀¸ ׀÷׀¾׀»׀¸��‡׀µ��¿½��¿½����׀²׀¾ ����׀¾׀²׀°��€׀° , ׀´׀»��¿½��¿½ ׀·׀°׀¿׀¾׀»׀½׀µ׀½׀¸��¿½��¿½

	cout << setw(15) << "Product name" << setw(15) << "Company name" << setw(20) << "Coumtry" << setw(20) << "Price" << setw(20) << "Amount" << setw(10) << "Data";
	for(int i = 0; i < n; i++) {

		
		cout << setw(15) << tovar[i].name << setw(15) << tovar[i].phyrm << setw(20) << tovar[i].count << setw(20) << tovar[i].value << setw(20) << tovar[i].kolvo << setw(10) << tovar[i].day << "." << tovar[i].month << "." << tovar[i].year << endl;
	}
	gat(tovar, n);
}