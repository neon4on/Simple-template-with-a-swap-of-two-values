#include <iostream>
#include <string>
using namespace std;

template<typename T>
void Swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

void main()
{
	setlocale(LC_ALL, "ru");
	string var1 = "Привет!";
	string var2 = "Пока!";

	cout << "Normal:" << endl;

	cout << "var1\t" << var1 << endl;
	cout << "var2\t" << var2 << endl << endl;

	cout << "Swap:" << endl;

	Swap(var1, var2);

	cout << "var1\t" << var1 << endl;
	cout << "var2\t" << var2 << endl;
}
