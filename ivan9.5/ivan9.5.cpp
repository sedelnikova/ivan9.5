// ivan 9.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//5. В восточном календаре принят 60-летний цикл, состоящий из 12- летних подциклов, 
//обозначаемых названиями цвета: зеленый, красный, желтый, белый и черный. 
//В каждом подцикле годы носят названия животных: крысы, коровы, тигра, зайца, дракона, змеи,
//лошади, овцы, обезьяны, курицы, собаки и свиньи. По номеру года определить его название, 
//если 1984 год — начало цикла: «год зеленой крысы».


#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int x, y;
	cout << "введите год" << endl;
	cin >> x;
	cout << "год ";
	switch (((x - 1984) % 60) / 12)
	{
	case 0: cout << "зеленой(ого) "; break;
	case 1: cout << "красной(ого) "; break;
	case 2: cout << "желтой(ого) "; break;
	case 3: cout << "белой(ого) "; break;
	case 4: cout << "черной(ого) "; break;
	}
	switch (((x - 1984) % 60) % 12)
	{
	case 0: cout << "курицы"; break;
	case 1: cout << "собаки"; break;
	case 2: cout << " свиньи"; break;
	case 3: cout << " крысы"; break;
	case 4: cout << " коровы"; break;
	case 5: cout << " тигра"; break;
	case 6: cout << " зайца"; break;
	case 7: cout << " дракона"; break;
	case 8: cout << " змеи"; break;
	case 9: cout << " лошади"; break;
	case 10: cout << " овцы"; break;
	case 11: cout << " обезьяны"; break;
	}
	return 0;
}