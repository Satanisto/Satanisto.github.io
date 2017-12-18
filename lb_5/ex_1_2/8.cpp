#include <iostream>
#include <cstring> 
#include <vector> 
#include <iomanip>
#include <windows.h>
#include <ctime>
using namespace std;
char names[10][10] = {"Hmilewoi", "Grek", "Waloshina", "Artem", "Drozd", "Srefano", "Boris", "Chalow", "Solodov", "Iasik"};
char firma[10][10] = {"Iti", "DrYgiy", "Iakist", "DrYgiy", "Iakist", "Iti", "DrYgiy", "Iakist", "Iti", "DrYgiy"};
 // наш ��пи��ок фирм , а вверху на�� ��пи��ок в��ех имён потому что �� подзаебал���� каждый раз ��то вбиват�� ручёнками

struct Bud // ��трукрура �� названием буд(будова)
{
	char name[12];//им�� клиента
	int type; // тип будовы
	int value; // её цена
	char phyrm[12]; // название фирмы
	int pr_credit; // процент кредита 
	int cache; //��умма вклада
	int dolg; // долг 
	int ostalos;
};

void zad10(Bud *cust, const int n)
{
	int i, max = 0;
	for(i = 0; i < n; i++)
		if(cust[i].pr_credit > 10)
			if(cust[i].value > max)
				max = cust[i].value;

	for(i = 0; i < n; i++)
		if(max = cust[i].value)
		{
			cout << "Type s naibolshey stoimost :\n" << cust[i].type << endl;
			break;
		}
}

void zad9(Bud *cust, const int n)
{
	int i, min = 10000;
	for(i = 0; i < n; i++)
		if(cust[i].ostalos > 0 && cust[i].ostalos < min) // е��ли невыплаченна�� ��умма бол��ше нул��(ну то е��т�� вообще е��т��) и мен��ше минимума то запи��уем её в минимум
		 	min = cust[i].ostalos;

	for(i = 0; i < n; i++)
		if(cust[i].ostalos = min) // е��ли невыплаченна�� ��умма равна найденному минимуму то выводим фирму ��той ��уммы
		{
			cout << "Phirma y kototoi y klienta minimalnaya neviplachenaya summa :\n" << cust[i].phyrm << endl;
			break;
		}
}

void zad8(Bud *cust, const int n)
{
	int i, max = 0, min = 100; //дл�� пои��ка необходимы две переменные , наибол��ший возможный процент и наимен��ший

	for(i = 0; i < n; i++)
		if(cust[i].pr_credit > max) // про��то ищем наибол��шый процент
		 	max = cust[i].pr_credit;

	cout << "Naibolshiy procent :" << endl << max << endl; // выводим его

	for(i = 0; i < n; i++)
		if(cust[i].pr_credit <= min) // про��то ищем наимел��ший процент
		 	min = cust[i].pr_credit;

	cout << "Naimenshiy procent :" << endl << min << endl; // выводим его
}

void zad7(Bud *cust, const int n)
{
	int i;
	cout << "Klientu s neviplachenoy summoy bolchey vklada :" << endl;
	for(i = 0; i < n; i++)
		if(cust[i].ostalos > cust[i].cache) // е��ли невыплачено бол��ше чем е��т�� на ��чету, то выводим им��
			cout << cust[i].name << endl;
}

void zad6(Bud *cust, const int n)
{
	cout << "Max neviplachena summa :" << endl;
	int i, max = 0;
	for(i = 0; i < n; i++)
		if(cust[i].ostalos > max) // про��то ищем наибол��шу�� невыплаченну�� ��умму 
		 max = cust[i].dolg;
	cout << max << endl;
}

void zad5(Bud *cust, const int n)
{
	int i, j = 0;
	cout << "Obschiy dolg :" << endl;

	for(i = 0; i < n; i++)
        j += cust[i].ostalos; // ��умируем невыплаченну�� ��умму каждого клиента

    cout << j << " ruskih dollarov" << endl;
}

void zad4(Bud *cust, const int n)
{
	int i;
	int max = 0; // переменна�� дл�� определени�� наибол��шей цены
	cout << "tip kotoriy mnoga stoit :" << endl;
	for(i = 0; i < n; i++) // определ��ем у какой по��тройки наибол��ша�� цена
		if(max < cust[i].value)
			max = cust[i].value;

	for(i = 0; i < n; i++)
		if(max == cust[i].value) // ��равниваем наибол��шу�� найденну�� цену 
		{
			cout << cust[i].type << endl; // когда нашли, выводим прив��занный к ��той цене тип 
			break; // выходим из цыкла
		}
}

void zad3(Bud *cust, const int n)
{
	int i, j, b = 0, a[10], q = 1;
	cout << "Tip kotoriy zamovili >2 raz :" << endl;

	for (i = 0; i < n; i++)
		cout << cust[i].type << " "; // дл�� проверки , перед продакшином можно и ��терет�� (про��т выводит в��е типы что у на�� е��т��)

	for (i = 0; i < n; i++) // запу��каем цикл который пробежит в��ех клиентов
	{
		for (j = 0; j < n; j++) // цикл в котором ��равнива��т���� каждый тим �� каждым типом и е��ли е��т�� ��овпадение то b увеличивает���� на 1
			if (cust[i].type == cust[j].type)
				b++;
		a[i] = b; // когда один тип ��равнил���� ��о в��еми о��тал��ными , количетво ��овпадений запи��ывает���� в ма����ив
			b = 0;
	}
    cout << endl; //нова�� ��трока

	for (i = 0; i < n; i++) // цикл дл�� вывода резул��тата
		if (a[i] > 2)  // е��ли ��овпадений бол��ше двух то ��мотрим дал��ше
		{ //можно было бы про��то напи��ат�� выве��ти тип , но �� не хотел что б они повтор��ли���� 
           
		    for (j = 0; j < i; j++)    // провер��ет был ли ��тот ��имвол ранее , е��ли был , то заканчиваем цикл ��тот и q = 0
                if (cust[i].type == cust[j].type) 
                {
                    q = 0;
                    break;
                }
                    
            if(q) // е��ли q = 0 то оно во��ппринимает ��то как лож и не выполн��ет���� , е��ли же там 1 то выводит тип 
                cout << cust[i].type << endl;
            q = 1; // при��ваем оп��т�� q = 0 а то в��ё заглонет 

		}
}

void zad2(Bud *cust, const int n)
{
	int i;
	cout << "Te kto vse otdal :" << endl;	
	for (i = 0; i < n; i++) // запу��каем цикл который пробежит в��ех клиентов
		if (cust[i].ostalos <= 0) // провер��ем в��ё ли они выплатили
			cout << cust[i].name << endl;
}

void zad1(Bud *cust, const int n)
{
	int i;
	cout << "Klienti y kotorih cache in bank < value doma :" << endl;
	for (i = 0; i < n; i++) // запу��каем цикл который пробежит в��ех клиентов
				if (cust[i].cache < cust[i].value) // провер��ем мен��ше ли у них денег чем ��тоимо��т�� по��тройки
					cout << cust[i].name << endl; // е��ли да , то выводим их им�� 
}

void set_all(Bud *str, int m) // фунци�� принимает ����ылку на обла��т�� пам��ти в которой лежит ма����ив (да, так можно ))) и чи��ло клиентов
{
	srand(time(0)); // запу��каем рандом 
	for (int i = 0; i < m; i++) // запу��каем цикл в котором будут при��воены значени�� в��ему шо пока что е��т�� (в��е именна выдуманы , в��е чи��ла ��лучайны, в��е ��овпадени�� �� реал��но��т���� ��лучаные)
	{
		strcpy(str[i].name, names[i]); // зано��им первое им�� из нашего ��пи��ка в ����да 
		str[i].type = 1 + rand() % 4; // тип по��тройки от 1 до 4 вкл��чител��но
		str[i].value = 1000 + rand() % 2001; // цена от 1000 до 3000 вкл��чител��но
		strcpy(str[i].phyrm, firma[i]);// зано��им перву�� фирму из нашего ��пи��ка в ����да 
		str[i].pr_credit = 1 + rand() % 50; // процент от 1 до 50 вкл��чител��но
		str[i].cache = rand() % 5000;//у л��дей на ��чету от 0 до 5000 долларов вкл��чител��но 
		str[i].dolg = str[i].value + str[i].pr_credit * str[i].value / 100; // тут мы вы��читываем долг , цена дома + процент от цены
		str[i].ostalos = str[i].dolg - str[i].cache;

	}
}

void laba(Bud *cust, const int n)//ф-ци�� получает ����ылку на пам��т�� где хран��т���� ��пи��ки и кол-во клиентов
{
	cout << "For exit - enter exit, for receive a response to a task, enter its number" << endl;
	char s[30]; // ��оздаём ��имвол��ный ма����ив в которй будут запи��ыват������ команды
	while (true) // запу��каем бе��конечный цикл 
	{
		cout << "What do you want? "; // про��им у ��звер�� вве��ти комманду 
		gets_s(s); //получаем её

		if (!strcmp(s, "exit")) //��вер��ем её ��о ��ловом exit,е��ли они равны, то выходим из цыкла, и как ��лед��твие из функции 
			return;
		else if (!strcmp(s, "2.10"))
			zad10(cust, n);
		else if (!strcmp(s, "2.9"))
			zad9(cust, n);
		else if (!strcmp(s, "2.8"))
			zad8(cust, n);
		else if (!strcmp(s, "2.7"))
			zad7(cust, n);
		else if (!strcmp(s, "2.6"))
			zad6(cust, n);
        else if (!strcmp(s, "2.5"))
        	zad5(cust, n);
		else if (!strcmp(s, "2.4"))
			zad4(cust, n);
		else if (!strcmp(s, "2.3"))
			zad3(cust, n);
		else if (!strcmp(s, "2.2"))
			zad2(cust, n);
		else if (!strcmp(s, "2.1")) // ��т первое задание
			zad1(cust, n);

	}
}
int main1()
{
	const int n = 10; // количе��тво клиентов
	Bud cust[n]; // какой то ма����ив , забыл как называет���� а гуглит�� лен�� 
	set_all(cust, n); // передаём функции ��тот ма����ив ��труктурный и чи��ло клиентов

	laba(cust, n);//передаём функции уже ��формированные, в прошлой функции,��пи��ки и кол-во клиентов
	return 0;
}