#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <vector>
#include <iterator>
#include <algorithm> // max_element(), min_element(), sort() 
#include <numeric> // accumulate(), 
#include <cmath>
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

	cout << "Ведите кол. эл. массива: " << ends;
	cin >> amount_el;

	vector<int> main_mass;
	main_mass.reserve(amount_el);

	for(i = 0; i < amount_el; i++) {
		main_mass.push_back(-amount_el + rand() % (amount_el + amount_el + 1));
	}

	copy(main_mass.begin(), main_mass.end(), ostream_iterator<int>(cout, " "));
	cout << endl << endl;

	//
 
	// cout << "Варіант 1. В одновимірному масиві, що складається з N елементів, обчислити:" << endl;
	// cout << "- суму від'ємних елементів масиву;" << endl;
	// cout << "- добуток елементів масиву, розташованих між максимальним і мінімальними елементами;" << endl;
	// cout << "- упорядкувати елементи масиву за зростанням." << endl << endl;


	// // 1

	// vector<int> neg_num;

	// for(i = 0; i < amount_el; i++) {
	// 	if(main_mass[i] < 0) {
	// 		copy(main_mass.begin() + i, main_mass.begin() + i + 1, back_inserter(neg_num));
	// 	}
	// }

	// cout << "Результат 1: " << accumulate(neg_num.begin(), neg_num.end(), 0) << endl << endl;

	// // 2

	// int max_i, min_i;

	// auto max_el = max_element(main_mass.begin(), main_mass.end());
	// auto min_el = min_element(main_mass.begin(), main_mass.end());
	// cout << "Максимальный эл.: " << *max_el << endl << "Минимальный эл.: " << *min_el << endl;
	// for(i = 0; i < amount_el; i++) {
	// 	if(main_mass[i] == *max_el) {
	// 		max_i = i;
	// 	} else if(main_mass[i] == *min_el) {
	// 		min_i = i;
	// 	}
	// }
	// if(max_i > min_i) {
	// 	auto res = accumulate(min_el, max_el, 0);
	// 	cout << "Результат 2: " << res - *min_el;		
	// } else if(max_i < min_i){
	// 	auto res = accumulate(max_el, min_el, 0);		
	// 	cout << "Результат 2: " << res - *max_el;
	// } else {
	// 	auto res = 0;
	// 	cout << "Результат 2: " << res;		
	// }

	// cout << endl;
	
	// // 3

	// vector<int> sort_mass;
	// sort_mass.reserve(amount_el);
	// copy(main_mass.begin(), main_mass.end(), back_inserter(sort_mass));

	// sort(sort_mass.begin(), sort_mass.end());
	// cout << "Результат 3: ";
	// copy(sort_mass.begin(), sort_mass.end(), ostream_iterator<int>(cout, " "));	

	// cout << endl << endl;

	// // 

	// cout << "Варіант 2. В одновимірному масиві, що складається з N елементів, обчислити:" << endl;
	// cout << "- суму позитивних елементів масиву;" << endl;
	// cout << "- добуток елементів масиву, розташованих між максимальним за модулем та мінімальним за модулем елементами;" << endl;
	// cout << "- упорядкувати елементи масиву за спаданням." << endl << endl;

	// // 1

	// vector<int> pos_num;

	// for(i = 0; i < amount_el; i++) {
	// 	if(main_mass[i] > 0) {
	// 		copy(main_mass.begin() + i, main_mass.begin() + i + 1, back_inserter(pos_num));
	// 	}
	// }

	// cout << "Результат 1: " << accumulate(pos_num.begin(), pos_num.end(), 0) << endl << endl;

	// // 2

	// vector<int> main_mass_abs(amount_el);

	// for(i = 0; i < amount_el; i++) {
	// 	main_mass_abs[i] = abs(main_mass[i]);
	// }

	// copy(main_mass_abs.begin(), main_mass_abs.end(), ostream_iterator<int>(cout, " "));
	// cout << endl;

	// int max_i2, min_i2;

	// auto max_el2 = max_element(main_mass_abs.begin(), main_mass_abs.end());
	// auto min_el2 = min_element(main_mass_abs.begin(), main_mass_abs.end());
	// cout << "Максимальный эл.: " << *max_el2 << endl << "Минимальный эл.: " << *min_el2 << endl;
	// for(i = 0; i < amount_el; i++) {
	// 	if(main_mass_abs[i] == *max_el2) {
	// 		max_i2 = i;
	// 	} else if(main_mass_abs[i] == *min_el2) {
	// 		min_i2 = i;
	// 	}
	// }
	// if(max_i2 > min_i2) {
	// 	auto res2 = accumulate(min_el, max_el, 0);
	// 	cout << "Результат 2: " << res2 - *min_el2;		
	// } else if(max_i2 < min_i2){
	// 	auto res2 = accumulate(max_el, min_el, 0);		
	// 	cout << "Результат 2: " << res2 - *max_el2;
	// }


	// cout << endl;

	// // 3

	// vector<int> sort_mass_r;
	// sort_mass_r.reserve(amount_el);
	// copy(main_mass.begin(), main_mass.end(), back_inserter(sort_mass_r));

	// sort(sort_mass_r.begin(), sort_mass_r.end());
	// cout << "Результат 3: ";
	// reverse_copy(sort_mass_r.begin(), sort_mass_r.end(), ostream_iterator<int>(cout, " "));	

	// cout << endl << endl;

	// // 

	// cout << "Варіант 3. В одновимірному масиві, що складається з N цілих елементів, обчислити:" << endl;
	// cout << "- добуток елементів масиву з парними номерами;" << endl;
	// cout << "- суму елементів масиву, розташованих між першим і останнім нульовими елементами;" << endl;
	// cout << "- перетворити масив таким чином, щоб спочатку розташовувалися всі додатні елементи, а потім — усі від'ємні (елементи, що дорівнюють 0, вважати додатними)." << endl << endl;

	// // 1

	// int even_sum = 0;

	// for(i = 0; i < amount_el; i++) {
	// 	if(i % 2 != 0) {
	// 		even_sum += main_mass[i];
	// 	}
	// }

	// cout << "Результат 1: " << even_sum << endl;

	// // 2

	// int in = 0, out = 0;

	// for(i = 0; i < amount_el; i++) {
	// 	if(main_mass[i] > 0) {
	// 		in++;
	// 		break;
	// 	}
	// }

	// for(j = amount_el - 1; j >= 0; j--) {
	// 	if(main_mass[j] > 0) {
	// 		out++;
	// 		break;
	// 	}
	// }

	// out = amount_el - out;

	// cout << in << endl << out << endl;

	// cout << "Результат 2: " << accumulate(main_mass.begin() + in, main_mass.begin() + out, 0) << endl;

	// // 3
	// int n = 0;
	// vector<int> new_mass;

	// for(i = 0; i < amount_el; i ++) {
	// 	if(main_mass[i] >= 0) {
	// 		new_mass.push_back(main_mass[i]);
	// 		n++;
	// 	}
	// }
	// for(i = 0; i < amount_el; i++) {
	// 	if(main_mass[i] < 0) {
	// 		new_mass.push_back(main_mass[i]);
	// 	}
	// }
	// cout << "Результат 3: ";
	// copy(new_mass.begin(), new_mass.end(), ostream_iterator<int>(cout, " "));
	// cout << endl;

	// // 

	// cout << "Варіант 4. В одновимірному масиві, що складається з N елементів, обчислити:" << endl;
	// cout << "- суму елементів масиву з непарними номерами;" << endl;
	// cout << "- суму елементів масиву, розташованих між першим і останнім від'ємними елементами;" << endl;
	// cout << "- стиснути масив, видаливши з нього всі елементи, модуль яких не перевищує 1. Елементи, що звільнилися в кінці масиву, заповнити нулями." << endl << endl;

	// // 1

	// int even_sum2 = 0;

	// for(i = 0; i < amount_el; i++) {
	// 	if(i % 2 == 0) {
	// 		even_sum += main_mass[i];
	// 	}
	// }

	// cout << "Результат 1: " << even_sum << endl;

	// // 2


	// int in2 = 0, out2 = 0;

	// for(i = 0; i < amount_el; i++) {
	// 	if(main_mass[i] >= 0) {
	// 		in2++;
	// 	} else {
	// 		break;
	// 	}
	// }

	// for(j = amount_el - 1; j >= 0; j--) {
	// 	if(main_mass[j] >= 0) {
	// 		out2++;
	// 	} else {
	// 		break;
	// 	}
	// }

	// out2 = amount_el - out2 - 1;

	// cout << in2 << endl << out2 << endl;	

	// cout << "Результат 2: " << accumulate(main_mass.begin() + in2 + 1, main_mass.begin() + out2 , 0) << endl;

	// // 3

	// int n2 = 0;
	// vector<int> new_mass2;

	// for(i = 0; i < amount_el; i++) {
	// 	if(main_mass[i] > 1 || main_mass[i] < -1) {
	// 		new_mass2.push_back(main_mass[i]);
	// 	} else {
	// 		n2++;
	// 	}
	// }
	// for(i = 0; i < n2; i++) {
	// 	new_mass2.push_back(0);		
	// }
	// cout << "Результат 3: ";
	// copy(new_mass2.begin(), new_mass2.end(), ostream_iterator<int>(cout, " "));
	// cout << endl;

	// // 

	cout << "Варіант 5. В одновимірному масиві, що складається з N елементів, обчислити:" << endl;
	cout << "- максимальний елемент масиву;" << endl;
	cout << "- суму елементів масиву, розташованих до останнього додатного елемента;" << endl;
	cout << "- стиснути масив, видаливши з нього всі елементи, модуль яких знаходиться в інтервалі [a, b]. Елементи, що звільнилися в кінці масиву, заповнити нулями." << endl << endl;

	// 1

	auto max_el5 = max_element(main_mass.begin(), main_mass.end());

	cout << "Результат 1: " << *max_el5 << endl;

	// 2

	int n5 = amount_el - 1;
	vector<int> new_mass5;

	for(i = amount_el - 1; i >= 0; i--) {
		if(main_mass[i] > 0) {
			break;
		}
		n5--;
	}

	cout << n5 << endl;

	for(i = 0; i < n5; i++) {
		new_mass5.push_back(main_mass[i]);
	}

	cout << "Результат 2: " << accumulate(new_mass5.begin(), new_mass5.end(), 0) << endl;
	
	// 3

	int n5_3 = 0;
	int max, min;
	vector<int> new_mass53;

	for(i = 0; i < amount_el; i++) {
		if(main_mass[i] > 1 || main_mass[i] < -1) {
			new_mass53.push_back(main_mass[i]);
		} else {
			n5_3++;
		}
	}
	for(i = 0; i < n5_3; i++) {
		new_mass53.push_back(0);
	}
	cout << "Результат 3: ";
	copy(new_mass53.begin(), new_mass53.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	cout << endl;
	system("pause");
}