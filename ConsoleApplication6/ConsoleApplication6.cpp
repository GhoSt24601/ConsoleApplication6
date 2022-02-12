#include <iostream>
using namespace std;

template <class Zerg>
Zerg Max(Zerg a, Zerg b)
{
	if (a > b) return a;
	return b;
}

void main()
{
	int R, K, maxInt;
	cout << "En Taro Kerrigan! for Sabaton! for Rammstein!" << ::endl;
	cout << "Vvedite pervoe ";
	cin >> R;
	cout << "Vvedite vtoroe ";
	cin >> K;
	maxInt = Max(R, K);
	cout << "Bolshee: " << maxInt << endl;
	system("pause");
}