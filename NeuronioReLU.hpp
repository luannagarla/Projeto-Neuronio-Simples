#include "neuronio.hpp"
#include <algorithm>

using namespace std;

class NeuronioReLU : public Neuronio
{
public:
	NeuronioReLU(const vector<double> &pesos, double bias)
		: Neuronio(pesos, bias) {}

	double predict(const vector<double> entradas) const override
	{
		// saida = max(0, (entradas[0] * pesos[0] + entradas[1] * pesos[1] + . . . ) + bias)
		double saida = 0.0;
		for (int i = 0; i < entradas.size(); ++i)
		{
			saida += entradas[i] * pesos[i];
		}

		saida += bias;

		if (saida < 0) {
			return 0.0;
		}
		return saida;
	}
};