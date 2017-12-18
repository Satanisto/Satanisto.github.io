#include <iostream>
#include <cstring> 
#include <vector> 
#include <string> 
#include <iomanip>
#include <windows.h>
#include <ctime>
using namespace std;
struct Teconomic_activity {

    struct Tproduct {

    string name;
    double costs;
    double profit;

    };

    int vol_sales;

    double prices;

    struct Tcompany {

        string name;
        string kind_activity;

    };

};

int main3() {

    setlocale(0, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

	srand(time(NULL));

    int i, j;

    // �������������� ������

    const int amount = 10 + 1;
    // // ��������

    Teconomic_activity::Tproduct *PRODUCT = new Teconomic_activity::Tproduct[amount];

    // // // ��������

    PRODUCT[1].name = "�����";
    PRODUCT[2].name = "��������� ��������";
    PRODUCT[3].name = "�����";
    PRODUCT[4].name = "������";
    PRODUCT[5].name = "�������� ��������";
    PRODUCT[6].name = "������ ���������";
    PRODUCT[7].name = "������";
    PRODUCT[8].name = "���������";
    PRODUCT[9].name = "����������";
    PRODUCT[10].name = "��������";

    // // // �������

    PRODUCT[1].costs = 10000 + rand() % 490000;
    PRODUCT[2].costs = 10000 + rand() % 490000;
    PRODUCT[3].costs = 10000 + rand() % 490000;
    PRODUCT[4].costs = 10000 + rand() % 490000;
    PRODUCT[5].costs = 10000 + rand() % 490000;
    PRODUCT[6].costs = 10000 + rand() % 490000;
    PRODUCT[7].costs = 10000 + rand() % 490000;
    PRODUCT[8].costs = 10000 + rand() % 490000;
    PRODUCT[9].costs = 10000 + rand() % 490000;
    PRODUCT[10].costs = 10000 + rand() % 490000;

    // // // ������ �������

    PRODUCT[1].profit = 100000 + rand() % 900000;    
    PRODUCT[2].profit = 100000 + rand() % 900000;
    PRODUCT[3].profit = 100000 + rand() % 900000;
    PRODUCT[4].profit = 100000 + rand() % 900000;
    PRODUCT[5].profit = 100000 + rand() % 900000;
    PRODUCT[6].profit = 100000 + rand() % 900000;
    PRODUCT[7].profit = 100000 + rand() % 900000;
    PRODUCT[8].profit = 100000 + rand() % 900000;
    PRODUCT[9].profit = 100000 + rand() % 900000;
    PRODUCT[10].profit = 100000 + rand() % 900000;

    // ����� ������

    Teconomic_activity *SALES = new Teconomic_activity[amount];

    SALES[1].vol_sales = 5000 + rand() % 15000;
    SALES[2].vol_sales = 5000 + rand() % 15000;
    SALES[3].vol_sales = 5000 + rand() % 15000;
    SALES[4].vol_sales = 5000 + rand() % 15000;    
    SALES[5].vol_sales = 5000 + rand() % 15000;    
    SALES[6].vol_sales = 5000 + rand() % 15000;    
    SALES[7].vol_sales = 5000 + rand() % 15000;    
    SALES[8].vol_sales = 5000 + rand() % 15000;    
    SALES[9].vol_sales = 5000 + rand() % 15000;    
    SALES[10].vol_sales = 5000 + rand() % 15000;    

    // �������������

    Teconomic_activity *PRICES = new Teconomic_activity[amount];
    
    PRICES[1].prices = 1 + rand() % 50;
    PRICES[2].prices = 1 + rand() % 50;
    PRICES[3].prices = 1 + rand() % 50;
    PRICES[4].prices = 1 + rand() % 50;    
    PRICES[5].prices = 1 + rand() % 50;    
    PRICES[6].prices = 1 + rand() % 50;    
    PRICES[7].prices = 1 + rand() % 50;    
    PRICES[8].prices = 1 + rand() % 50;    
    PRICES[9].prices = 1 + rand() % 50;    
    PRICES[10].prices = 1 + rand() % 50;    

    // �����

    Teconomic_activity::Tcompany *COMP = new Teconomic_activity::Tcompany[amount];

    // // ��������

    COMP[1].name = "Table in.";
    COMP[2].name = "Phone in.";
    COMP[3].name = "Pen in.";
    COMP[4].name = "Clean in.";
    COMP[5].name = "HomePh in.";
    COMP[6].name = "FIXPh in.";
    COMP[7].name = "Chair in.";
    COMP[8].name = "Potato in.";
    COMP[9].name = "KeyBo in.";
    COMP[10].name = "Mon in.";

    // // ��� ������������

    COMP[1].kind_activity = "�������";
    COMP[2].kind_activity = "�������";
    COMP[3].kind_activity = "�������";
    COMP[4].kind_activity = "������";
    COMP[5].kind_activity = "�������";
    COMP[6].kind_activity = "������";
    COMP[7].kind_activity = "�������";
    COMP[8].kind_activity = "�������";
    COMP[9].kind_activity = "�������";
    COMP[10].kind_activity = "�������";

    // ����� �������

    cout << setw(14) << "�����" << setw(15) << "������������" << setw(20) << "�����" << setw(10) << "�������" << setw(20) << "������ �������" << setw(15) << "�������������" << setw(15) << "����� ������" << endl;
    cout << setw(110) << "---------------------------------------------------------------------------------------------------------" << endl;

    for(i = 1; i < amount; i++) {

        cout << setw(3) << i << ") " << setw(10) << COMP[i].name << setw(15) << COMP[i].kind_activity << setw(20) << PRODUCT[i].name << setw(10) << PRODUCT[i].costs << setw(20) << PRODUCT[i].profit << setw(15) << PRICES[i].prices << setw(15) << SALES[i].vol_sales << endl;

    }

	cout << endl;

	// �������� � �������

	int choice_user;

    while(true) {

	cout << "����� ���������� ������� �� �����?\n1)������ ������������� �������������� ������\n2)����� ������������ ��� ������������\n3)����� � ������� ������ ������� ������ ��� ������� �������� �� ���� ������\n4)����� �������������� ��� ������������\n5)�����, � ������� ��� ������������ '������', � ����� ������ ������ 10000\n6)������ � ������������ ���������, � �������� ������� ���� ����� '�������'\n" << endl;
	cout << "������� ����� �������: ";
	cin >> choice_user;
	cout << endl;

    // 1
    int amount_price = 0;

    // 2 
    double max_profit_sale = 0, max_profit_services = 0;
    string temp_services = "������", temp_sale = "�������";

    // 3
    double average_profit = 0;

    // 6
    double min_cost = 0;


	switch(choice_user) {


		// 1 
		case 1:

		cout << "������ ������������� �������������� ������" << endl;
		
		for(i = 1; i < amount; i++) {

			cout << setw(3) << i << ") " << PRODUCT[i].name << ": " << PRICES[i].prices * SALES[i].vol_sales << endl;
            amount_price += PRICES[i].prices * SALES[i].vol_sales;

		}

        cout << "������ ������������� ���� �������: " << amount_price << endl;
        
        cout << endl;
                
        break;
		// 2
		case 2:

		cout << "����� ������������ ��� ������������" << endl;

        
        for(i = 1; i < amount; i++) {

            if(COMP[i].kind_activity == temp_services) {
                max_profit_services += PRODUCT[i].profit;
            } else if(COMP[i].kind_activity == temp_sale) {
                max_profit_sale += PRODUCT[i].profit;                
            }

        }
        cout << max_profit_sale << endl << max_profit_services << endl;

        if(max_profit_sale > max_profit_services) {
            cout << temp_sale;
        }  else if(max_profit_sale < max_profit_services) {
            cout << temp_services;
        } else {
            cout << temp_sale << endl << temp_services;
        }

        cout << endl;
                
		break;
        // 3
        case 3:

        cout << "����� � ������� ������ ������� ������ ��� ������� �������� �� ���� ������" << endl;

        for(i = 1; i < amount; i++) {

            average_profit += PRODUCT[i].profit;

        }
        average_profit /= amount - 1;

        cout << "������� �������� ������ �������: " << average_profit << endl;

        for(i = 1; i < amount; i++) {
            if(PRODUCT[i].profit > average_profit) {
                cout << COMP[i].name << endl;
            } else {
                cout << "---" << endl;
            }
        }

        cout << endl;
        
        break;
        // 4
        case 4:

		cout << "����� �������������� ��� ������������" << endl;

        
        for(i = 1; i < amount; i++) {

            if(COMP[i].kind_activity == temp_services) {
                max_profit_services += PRODUCT[i].profit;
            } else if(COMP[i].kind_activity == temp_sale) {
                max_profit_sale += PRODUCT[i].profit;                
            }

        }
        cout << max_profit_sale << endl << max_profit_services << endl;

        if(max_profit_sale < max_profit_services) {
            cout << temp_sale;
        }  else if(max_profit_sale > max_profit_services) {
            cout << temp_services;
        } else {
            cout << temp_sale << endl << temp_services;
        }

        cout << endl;
                
        break;

        // 5
        case 5:

        cout << "�����, � ������� ��� ������������ '������', � ����� ������ ������ 10000" << endl;

        for(i = 1; i < amount; i++) {

            if(COMP[i].kind_activity == temp_services && SALES[i].vol_sales > 10000) {
                cout << COMP[i].name << endl;
            }

        }

        cout << endl;
                
        break;

        // 6
        case 6:

        cout << "������ � ������������ ���������, � �������� ������� ���� ����� '�������'" << endl;

        min_cost = PRODUCT[1].costs;            
        for(i = 1; i < amount; i++) {

            if(min_cost > PRODUCT[i].costs && (PRODUCT[i].name).find("�������")) {

                min_cost = PRODUCT[i].costs;

            }

        }

        for(i = 1; i < amount; i++) {

            if((PRODUCT[i].name).find("�������") && PRODUCT[i].costs == min_cost) {

                cout << PRODUCT[i].name << endl;

            }

        }

        cout << endl;
        
        break;

        // exit
        case 7: 

        return 0;

		default:

		cout << "����� ���������� ������� �� �����?\n" << endl;		
        

	}
    }

    // �������� ��������

    delete []PRODUCT;
    delete []SALES;
    delete []PRICES;
    delete []COMP;

    cout << endl;
    system("pause");
    return 0;
}