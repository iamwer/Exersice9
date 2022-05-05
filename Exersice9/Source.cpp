#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int main()
{
	setlocale(LC_ALL, "Rus");
	cout << "¬ведите число которую хотите вывести в степень " << "\n";
	int numb;
	cin >> numb;
	cout << "¬ведите степень ";
	int power;
	cin >> power;
	int count = 1;
	int power_numb = numb;

	do
	{
		if (power == 0)
			power_numb = 1;
		else
			if (power != 1 && power > 0)
				power_numb = power_numb * numb;
		count++;
	}

	while (power > count);
	cout << "number = " << power_numb << endl;
	



	system("pause");
	return 0;
}
