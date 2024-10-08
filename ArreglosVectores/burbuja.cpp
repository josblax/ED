// ConsoleApplication12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <random>
#include <chrono>
using namespace std;
using namespace std::chrono;
//funcion prototipo
void burbuja(vector<double>& v);
void seleccion(vector<double>& v);
void imprime(vector<double> v);
int main()
{
    // vector con 1000 elementos
    vector<double> v1000;
    random_device rd;
    default_random_engine gen(rd());
    uniform_real_distribution<double>
        distribution(1.5, 1.90);

    // generar 1000 datos con una
    // instrucción cíclico
    for (int i = 0; i < 20; i++)
    {
        double num = distribution(gen);
        v1000.push_back(num);
    }
    //imprime(v1000);
    auto start1000 = high_resolution_clock::now();
    seleccion(v1000);
    auto stop1000 = high_resolution_clock::now();
    auto duration1000 = 
        duration_cast<milliseconds>(stop1000 - 
            start1000);
    cout << "Duracion " << duration1000.count();
    //imprime(v1000);
}

void seleccion(vector<double>& v) 
{
    int indiceMin = 0;
    for (int i = 0; i < v.size(); i++) 
    {
        indiceMin = i;
        for (int j = i + 1; j < v.size(); j++) 
        {
            if (v[j] < v[indiceMin]) 
            {
                indiceMin = j;
            }
        }
        double temp = v[indiceMin];
        v[indiceMin] = v[i];
        v[i] = temp;
    }
}

void burbuja(vector<double> &v)
{
    double temp = 0;
    bool swapp = true;

    while (swapp) 
    {
        swapp = false;
        for (int i = 0; i < v.size()-1; i++) 
        {
            if (v[i] > v[i+1]) 
            {
                temp = v[i + 1];
                v[i + 1] = v[i];
                v[i] = temp;
                swapp = true;
            }
        }
    }
}

void imprime(vector<double> v)
{
    for (auto elemento : v)
    {
        cout << elemento << " , ";
    }
    cout << endl;
    system("pause");
    system("cls");
}
