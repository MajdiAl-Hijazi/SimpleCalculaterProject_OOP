#include <iostream>
using namespace std;

class clsCalculater {


	string _LastOperation;
	float _Result = 0;
	float _LastNumber = 0;
	float _PreviousResult = 0;

	bool _IsZero(float Number) {
	
		return (Number == 0);
	}

public:

	void Add(float Number) {
	
		_LastNumber = Number;
		_LastOperation = "Adding";
		_PreviousResult = _Result;
		_Result += Number;
	}

	void Subtract(float Number) {

		_LastNumber = Number;
		_LastOperation = "Subtracting";
		_PreviousResult = _Result;
		_Result -= Number;
	}

	void Divide(float Number) {

		_LastNumber = Number;

		if (_IsZero(Number))
			Number = 1;

		_LastOperation = "Dividing";
		_PreviousResult = _Result;
		_Result /= Number;
	}

	void Multiply(float Number) {

		_LastNumber = Number;
		_LastOperation = "Multiplying";
		_PreviousResult = _Result;
		_Result *= Number;
	}

	float GetFinalResults() {
	
		return _Result;
	}

	void Clear() {
	
		_LastNumber = 0;
		_Result = 0;
		_PreviousResult = 0;
		_LastOperation = "Clear";
	}

	void PrintResult() {
	
		cout << "Result After " << _LastOperation << " " << _LastNumber << " is " << _Result << "\n";
	}

};

int main() {

	clsCalculater Calculater;

	Calculater.Add(5);
	Calculater.PrintResult();

	Calculater.Add(7);
	Calculater.PrintResult();

	Calculater.Subtract(2);
	Calculater.PrintResult();

	Calculater.Divide(2);
	Calculater.PrintResult();

	Calculater.Divide(0);
	Calculater.PrintResult();

	Calculater.Multiply(0);
	Calculater.PrintResult();

	Calculater.Subtract(15);
	Calculater.PrintResult();

	cout << Calculater.GetFinalResults() << endl;

	Calculater.Clear();
	Calculater.PrintResult();

	return 0;
}