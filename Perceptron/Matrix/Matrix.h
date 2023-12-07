#pragma once
namespace Matrix {
	struct Basis {
		double** matrix;
		int row, col;
	};
	void Init(int row, int col);
	void Rand(int row, int col);
	void Multi(const Basis& m, const double* b, int n, double* c);
	void Multi_T(const Basis& m, const double* b, int n, double* c);
	void Sumvector(double* a, const double* b, int n);
}