class Alumno 
{
public:
	//atributos
	int numCuenta;
	string nombreCompleto;
	int materiasCursadas;
	int materiasCursando;
	int materiasPorCursar;
	//constructor
public:
	Alumno() 
	{
		this->numCuenta = 0;
		this->nombreCompleto = "";
	}
	Alumno(int nc, string nombre)
	{
		this->numCuenta = nc;
		this->nombreCompleto = nombre;
	}

};

int main()
{
	Alumno alumno1();
	Alumno alumno2(12345, "Jose Blancas");
	cout << alumno2.numCuenta 
		<< endl;
	cout << alumno2.nombreCompleto 
		<< endl;
}
