#include<iostream>
#include <time.h>
#include <algorithm>

using namespace std;

// функтор - специальный механизм дл€ инкапсул€ции функций дл€ использовани€ еЄ в других объектах
// хранение и алгебра данных, дл€ дальнейшего использовани€ результата + выигрывает по скорости

//class PF {
//public:
//	void operator() () 
//	{
//		cout << "********************** operator() *************************" << endl;
//		cout << num << endl;
//		num++;
//	}
//
//	int operator() (int n1, int n2) {
//		return n1 * n2;
//	}
//
//private:
//	int num = 0;
//};




//int main() {
//
//	PF pf;
//
//	/*pf();
//	pf();
//	pf();*/
//	
//	//cout << pf(10, 20) << endl;
//
//	int res;
//	res = pf(10, 20);
//	cout << res << endl;
//
//	return 0;
//}

class Test {
	int sum = 0;
	int num = 0;
public:
	void operator() (int val) {
		if (val >= 0) {
			sum += val;
			num++;
		}
	}

	void show() {
		cout << sum << " " << num << endl;
	}
};

int main() {
	srand(time(NULL));
	Test t;

	int arr[10];

	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand() % 41 - 20;
		cout << arr[i] << " ";
	}

	cout << endl;

	for (int i = 0; i < 10; i++)
	{
		t(arr[i]);
	}

	t.show();

	return 0;
}
