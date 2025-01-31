#include <iostream>
#include "neuronioReLU.hpp"

using namespace std;

int main()
{
	vector<double> entradas = {0.3, 2.0};
	vector<double> pesos = {0.2, 0.4};

	double bias1 = -1.5;
	double bias2 = -0.5;
	double bias3 = 1;
	double bias4 = -2;
	double bias5 = 0.5;

	Neuronio *neuronioReLU1 = new NeuronioReLU(pesos, bias1);
	Neuronio *neuronioReLU2 = new NeuronioReLU(pesos, bias2);
	Neuronio *neuronioReLU3 = new NeuronioReLU(pesos, bias3);
	Neuronio *neuronioReLU4 = new NeuronioReLU(pesos, bias4);
	Neuronio *neuronioReLU5 = new NeuronioReLU(pesos, bias5);

	cout << "Entradas: {0.3, 2.0}" << endl;
	cout << "Pesos: {0.2, 0.4}" << endl << endl;

	cout << "----Caso 1---- " << endl;
	cout << "Bias: " << bias1 << endl;
	cout << "Resultado: " << neuronioReLU1->predict(entradas) << endl << endl;

	cout << "----Caso 2---- " << endl;
	cout << "Bias: " << bias2 << endl;
	cout << "Resultado: " << neuronioReLU2->predict(entradas) << endl << endl;

	cout << "----Caso 3----" << endl;
	cout << "Bias: " << bias3 << endl;
	cout << "Resultado: " << neuronioReLU3->predict(entradas) << endl << endl;

	cout << "----Caso 4---- " << endl;
	cout << "Bias: " << bias4 << endl;
	cout << "Resultado: " << neuronioReLU4->predict(entradas) << endl << endl;

	cout << "----Caso 5---- " << endl;
	cout << "Bias: " << bias5 << endl;
	cout << "Resultado: " << neuronioReLU5->predict(entradas) << endl << endl;

	return 0;
}