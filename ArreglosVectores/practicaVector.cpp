// ConsoleApplication18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <vector>
#include <unordered_map>
#include <map>
using namespace std;
int main()
{
	srand(time(0)); // semilla 
	vector<int> v;
	// generar 100 aleatorias
	// rango 1-100
	for (int i = 1; i < 100; i++) 
	{
		v.push_back(rand() % 101);
	}
	// numero -> frecuencia
	cout << "tamano " << v.size() << endl;;
	unordered_map<int, int> grupo;
	for (const int& numero : v) 
	{
		grupo[numero]++;
	}
	
	for (const auto& numero : grupo) 
	{
	cout << "num " << numero.first <<
	" frec " << numero.second << endl;
	}
}

