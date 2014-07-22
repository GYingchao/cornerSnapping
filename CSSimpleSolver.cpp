#include "CSSimpleSolver.h"
using namespace std;

bool CSSimpleSolver::parser(FILE *f, vector<vector<double>> &A, vector<double> &b)
{
	if(f == NULL) return false;
	// Read the input data and allocate memory
	// ...
	return true;
}

bool CSSimpleSolver::L1Solver(vector<vector<double>> &A, vector<double> &b)
{
	// Find a proper left null space of A : F
	//-- [Assume that F is sparse...] --//
	vector<vector<double>> F = nullSpace(A);
	return false;
}

bool CSSimpleSolver::OMPSolver(vector<vector<double>> &A, vector<double> &b)
{
	return false;
}

// Compute Ax = 0, return basis vectors of solution space 
// A is assumed to be sparse matrix
vector<vector<double>>& CSSimpleSolver::nullSpace(const vector<vector<double>> &A)
{
	vector<vector<double>> tem;
	if(!A.empty()) {
		int m = A.size();
		int n = A[0].size();
		if(m >= n) {

		} else {
			cout << "Matrix format error!" << endl;
		}
	} else {
		cout << "Null pointer of A in computing nullspace!" << endl;
	}
	return tem;
}

// Compute FA = 0, return proper F.
vector<vector<double>>& CSSimpleSolver::leftNullSpace(const vector<vector<double>> &A)
{

}
