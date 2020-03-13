#include <stdio.h>
#include <iostream>
#include<string.h>

using namespace std;

struct Hockey
{
	string last_name;
	short age;
	short game_list;
	short list_shayb;
};

int main()
{
	setlocale(LC_ALL, "");
	int n = 0, k = 0;
	cout << "Количество хоккеистов" << endl;
	cin >> n;
	Hockey* human = new Hockey[n];
	char massive[26];
	int j = 0;

	for (char i = 'a'; i < 'z'; i++)
	{
		massive[j] = i;
		j++;
	}

	for (int i = 0; i < n; i++)
	{
		human[i].last_name = string(1, massive[rand() % 27]) + string(1, massive[rand() % 27]) + string(1, massive[rand() % 27]) + string(1, massive[rand() % 27]);
		human[i].age = 15 + rand() % 30;
		human[i].game_list = rand();
		human[i].list_shayb = rand();
		k += human[i].age;
	}

	cout << "mean age " << k / n << endl;

	for (int i = 0; i < n; i++)
	{
		if (human[i].age > 25)
		{
			cout << "Фамилия: " << human[i].last_name << endl;
			cout << "Возраст: " << human[i].age << endl;
			cout << "Количество игр: " << human[i].game_list << endl;
			cout << "Пропущенных шайб: " << human[i].list_shayb << endl << "//////////////////" << endl;
		}
	}

	return 0;
}