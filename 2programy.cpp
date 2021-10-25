#include <iostream>

using namespace std;
int factorial(int N) {
	int F = 1;
for (int i = 1; i <= N; ++i)
	{
		F *= i;
	}
	return F;
	int x;
	cout << "x= ";
	cin >> x;

	if (x >= 0)
	{
		cout << factorial(x);
	}
	else
	{
		cout << "Error: x< 0.";
	}

	return 0;
}
int main(){
	cout << "Введите число: " << endl;
	int x = 0;
	cin >> x;
	cout << "Выберите действие:\n\
1.Найти факториал числа\n\
2.Вывести все натуральные числа от 0 до числа" << "\n";
	int c = 0;
	cin >> c;
	switch (c) {
	case 1:
		cout << "Факториал для числа " << x << " = " << factorial(x) << endl;
		break;
	case 2:
		cout << "Последовательность: " << endl;
		int y = -1;
			while (y < x){
				y = y + 1;
			cout << y << endl;
		}
		break;
	}
	return 0;
}
