#include <iostream>
#include "Sum.h"
#include "Dif.h"
#include "Prod.h"
#include "Quot.h"

using namespace std;

int main()
{
	srand(time(NULL));
	cout << rand() % 100 << endl;
	cout << Sum(rand() % 100, rand() % 100) << endl;
	cout << Dif(rand() % 100, rand() % 100) << endl;
	cout << Prod(rand() % 100, rand() % 100) << endl;
	cout << Quot(1 + rand() % 100, 1 + rand() % 100) << endl;
}