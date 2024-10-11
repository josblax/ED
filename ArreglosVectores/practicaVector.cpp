#include <iostream>
#include <iomanip>
#include <vector>
#include <unordered_map>
#include <map>
using namespace std;

void burbuja(vector<int>& v)
{
	double temp = 0;
	bool swapp = true;

	while (swapp)
	{
		swapp = false;
		for (int i = 0; i < v.size() - 1; i++)
		{
			if (v[i] < v[i + 1])
			{
				temp = v[i + 1];
				v[i + 1] = v[i];
				v[i] = temp;
				swapp = true;
			}
		}
	}
}
int main()
{
	srand(time(0)); // semilla 
	vector<int> v, vpar, vimpar;
	vector<int> v1{ 1,2,3,5,6,7,8,9 };
	//secuencia
	for (int i = 0; i <8; i++) 
	{
		if (v1[i + 1] - v1[i] != 1) 
		{
			cout << "elemento faltante "
				<< v1[i] + 1;
		}
	}

	// generar 100 aleatorias
	// rango 1-100

	for (int i = 1; i < 100; i++) 
	{
		int num1 = rand() % 101;
		v.push_back(num1);
		if (num1 % 2 == 0) 
		{
			vpar.push_back(num1);
		}
		else 
		{
			vimpar.push_back(num1);
		}
	}
	
	burbuja(v);
	cout << v[0] << v[1] << v[2];
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

