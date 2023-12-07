#pragma once
#include "Matrix.h"
namespace NetWork {
	struct data_Network {
		int L;
		int* size;
	};
	void Init(data_Network data);
	void SetInput(double* values);
	double DirectDistribution(const Matrix::Basis& m1, double** neurons_val, int* size);
	int SearchMaxIndex(double* value);
	void BackPropogation(double expect);
	void WeightsUpdater(double Ir);
	void use(double* value, int n);
	void useDer(double* value, int n);
	double useDer(double value);
};
