#include "function.h"

int main()
{
	string s1, s2;
	int min_distance;
	setlocale(LC_ALL, "rus");
	cout << "Введите 2 строки, 1 должна быть длинее :" << endl;
	cin >> s1 >> s2;
	if (s2 >s1)
	{
		cout << "Вы ввели не верную строку. Введите еще раз, чтобы вторая была короче";
		cin >> s1 >> s2;
		min_distance = levenshtein(s1, s2);
		cout << "Редакционное расстояние = " << min_distance << endl;
	}
	else
	{
		min_distance = levenshtein(s1, s2);
		cout << "Редакционное расстояние = " << min_distance << endl;
	}
	return 0;
}
