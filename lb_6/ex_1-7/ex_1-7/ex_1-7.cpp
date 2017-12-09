#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <vector>
#include <iterator>
#include <algorithm> // max_element(), min_element(), sort() 
#include <numeric> // accumulate(), 
#include <windows.h>
using namespace std;

void main () {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(0, "");
	srand(time(0));

	// 

	int i, j;
	int amount_el;

	cout << "������ ���. ��. �������: " << ends;
	cin >> amount_el;

	vector<int> main_mass;
	main_mass.reserve(amount_el);

	for(i = 0; i < amount_el; i++) {
		main_mass.push_back(-amount_el + rand() % (amount_el + amount_el + 1));
	}

	copy(main_mass.begin(), main_mass.end(), ostream_iterator<int>(cout, " "));
	cout << endl << endl;

	//
 
	cout << "������ 1. � ������������ �����, �� ���������� � N ��������, ���������:" << endl;
	cout << "- ���� ��'����� �������� ������;" << endl;
	cout << "- ������� �������� ������, ������������ �� ������������ � ���������� ����������;" << endl;
	cout << "- ������������ �������� ������ �� ����������." << endl << endl;


	// 1

	vector<int> neg_num;

	for(i = 0; i < amount_el; i++) {
		if(main_mass[i] < 0) {
			copy(main_mass.begin() + i, main_mass.begin() + i + 1, back_inserter(neg_num));
		}
	}

	cout << "��������� 1: " << accumulate(neg_num.begin(), neg_num.end(), 0) << endl << endl;

	// 2

	int max_i, min_i;

	auto max_el = max_element(main_mass.begin(), main_mass.end());
	auto min_el = min_element(main_mass.begin(), main_mass.end());
	cout << "������������ ��.: " << *max_el << endl << "����������� ��.: " << *min_el << endl;
	for(i = 0; i < amount_el; i++) {
		if(main_mass[i] == *max_el) {
			max_i = i;
		} else if(main_mass[i] == *min_el) {
			min_i = i;
		}
	}
	if(max_i > min_i) {
		auto res = accumulate(min_el, max_el, 0);
		cout << "��������� 2: " << res - *min_el;		
	} else if(max_i < min_i){
		auto res = accumulate(max_el, min_el, 0);		
		cout << "��������� 2: " << res - *max_el;
	}

	cout << endl;
	
	// 3

	vector<int> sort_mass;
	sort_mass.reserve(amount_el);
	copy(main_mass.begin(), main_mass.end(), back_inserter(sort_mass));

	sort(sort_mass.begin(), sort_mass.end());
	cout << "��������� 3: ";
	copy(sort_mass.begin(), sort_mass.end(), ostream_iterator<int>(cout, " "));	

	cout << endl << endl;

	// 

	cout << "������ 2. � ������������ �����, �� ���������� � N ��������, ���������:" << endl;
	cout << "- ���� ���������� �������� ������;" << endl;
	cout << "- ������� �������� ������, ������������ �� ������������ �� ������� �� ��������� �� ������� ����������;" << endl;
	cout << "- ������������ �������� ������ �� ���������." << endl << endl;

	// 1

	vector<int> pos_num;

	for(i = 0; i < amount_el; i++) {
		if(main_mass[i] > 0) {
			copy(main_mass.begin() + i, main_mass.begin() + i + 1, back_inserter(pos_num));
		}
	}

	cout << "��������� 1: " << accumulate(pos_num.begin(), pos_num.end(), 0) << endl << endl;

	// 2
	// int max_i2, max_el22 = 0, min_i2, min_el22 = 0;

	// auto max_el2 = max_element(main_mass.begin(), main_mass.end());
	// auto min_el2 = min_element(main_mass.begin(), main_mass.end());
	// if(*max_el2 < 0) {
	// 	max_el22 = *max_el2 * -1;
	// } else {
	// 	max_el22 = *max_el2;
	// }
	// if(*min_el2 < 0) {
	// 	min_el22 = *min_el2 * -1;		
	// } else {
	// 	min_el22 = *min_el2;
	// }
	// for(i = 0; i < amount_el; i++) {
	// 	if(main_mass[i] == max_el22) {
	// 		max_i2 = i;
	// 	} else if(main_mass[i] == min_el22) {
	// 		min_i2 = i;
	// 	}
	// }
	// cout << "������������ ��.: " << max_el22 << endl << "����������� ��.: " << min_el22 << endl;
	// if(max_i2 > min_i2) {
	// 	auto res = accumulate(min_el22, max_el22, 0);
	// 	cout << "��������� 2: " << res - min_el22;		
	// } else if(max_i2 < min_i2){
	// 	auto res = accumulate(max_el22, min_el22, 0);		
	// 	cout << "��������� 2: " << res - max_el22;
	// }

	// cout << endl;

	// 3

	vector<int> sort_mass_r;
	sort_mass_r.reserve(amount_el);
	copy(main_mass.begin(), main_mass.end(), back_inserter(sort_mass_r));

	sort(sort_mass_r.begin(), sort_mass_r.end());
	cout << "��������� 3: ";
	reverse_copy(sort_mass_r.begin(), sort_mass_r.end(), ostream_iterator<int>(cout, " "));	

	cout << endl << endl;

	// 

	cout << "������ 3. � ������������ �����, �� ���������� � N ����� ��������, ���������:" << endl;
	cout << "- ������� �������� ������ � ������� ��������;" << endl;
	cout << "- ���� �������� ������, ������������ �� ������ � ������� ��������� ����������;" << endl;
	cout << "- ����������� ����� ����� �����, ��� �������� ��������������� �� ������ ��������, � ���� � �� ��'��� (��������, �� ��������� 0, ������� ���������)." << endl << endl;

	// 1

	int even_sum = 0;

	for(i = 0; i < amount_el; i++) {
		if(i % 2 != 0) {
			even_sum += main_mass[i];
		}
	}

	cout << "��������� 1: " << even_sum << endl;

	// 2

	int in = 0, out = 0;

	for(i = 0; i < amount_el; i++) {
		if(main_mass[i] > 0) {
			in++;
			break;
		}
	}

	for(j = amount_el - 1; j >= 0; j--) {
		if(main_mass[j] > 0) {
			out++;
			break;
		}
	}

	out = amount_el - out;

	cout << in << endl << out << endl;

	cout << "��������� 2: " << accumulate(main_mass.begin() + in, main_mass.begin() + out, 0) << endl;

	// 3
	int n = 0;
	vector<int> new_mass;

	for(i = 0; i < amount_el; i ++) {
		if(main_mass[i] >= 0) {
			new_mass.push_back(main_mass[i]);
			n++;
		}
	}
	for(i = 0; i < amount_el; i++) {
		if(main_mass[i] < 0) {
			new_mass.push_back(main_mass[i]);
		}
	}
	cout << "��������� 3: ";
	copy(new_mass.begin(), new_mass.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	// 

	cout << "������ 4. � ������������ �����, �� ���������� � N ��������, ���������:";
	cout << "- ���� �������� ������ � ��������� ��������;";
	cout << "- ���� �������� ������, ������������ �� ������ � ������� ��'������ ����������;";
	cout << "- �������� �����, ��������� � ����� �� ��������, ������ ���� �� �������� 1. ��������, �� ���������� � ���� ������, ��������� ������." << endl;

	// 1

	int even_sum2 = 0;

	for(i = 0; i < amount_el; i++) {
		if(i % 2 == 0) {
			even_sum += main_mass[i];
		}
	}

	cout << "��������� 1: " << even_sum << endl;

	// 2


	int in2 = 0, out2 = 0;

	for(i = 0; i < amount_el; i++) {
		if(main_mass[i] > 0) {
			in2++;
		} else {
			break;
		}
	}

	for(j = amount_el - 1; j >= 0; j--) {
		if(main_mass[j] > 0) {
			out2++;
		} else {
			break;
		}
	}

	out2 = amount_el - out2 - 1;

	cout << in2 << endl << out2 << endl;	

	cout << "��������� 2: " << accumulate(main_mass.begin() + in2, main_mass.begin() + out2, 0) << endl;
	

	cout << endl;
	system("pause");
}