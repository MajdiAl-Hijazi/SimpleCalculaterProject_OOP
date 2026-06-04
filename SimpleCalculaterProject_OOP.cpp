#include<iostream>
using namespace std;

class clsCalculator {

private:

	string _LastOperation = "clear";
	float _LastNumber = 0;
	float _Result = 0;
	float _PreviousResult = 0;

	//private methods...
	bool _IsZero(float Number) {
	
		return (Number == 0);
	}

public:

	void Clear() {

		_PreviousResult = _Result;
		_Result = 0;
		_LastNumber = 0;
		_LastOperation = "Clear";
	}

	void Add(float Num) {

		_PreviousResult = _Result;
		_Result += Num;
		_LastNumber = Num;
		_LastOperation = "Addaing";
	}

	void Subtract(float Num) {

		_PreviousResult = _Result;
		_Result -= Num;
		_LastNumber = Num;
		_LastOperation = "Subtracting";
	}

	void Multiplay(float Num) {

		_PreviousResult = _Result;
		_Result *= Num;
		_LastNumber = Num;
		_LastOperation = "Multiplaying";
	}

	void Divide(float Num) {

		_PreviousResult = _Result;

		if (!_IsZero(Num)) {

			_Result /= Num;
			_LastNumber = Num;
		}
		else
			_LastNumber = 1;

		_LastOperation = "Dividing";
	}

	void PrintResult() {

		cout << "Result After " << _LastOperation << " " << _LastNumber << " is: " << _Result << endl;
	}

	void CancelLastOperation() {
	
		_LastNumber = 0;
		_Result = _PreviousResult;
		_LastOperation = "Cancelling Last Operation";
	}
};

int main() {

	clsCalculator Calculator1;
	Calculator1.PrintResult();
	Calculator1.Add(20);
	Calculator1.PrintResult();
	Calculator1.Multiplay(5);
	Calculator1.PrintResult();
	Calculator1.Divide(0);
	Calculator1.PrintResult();
	Calculator1.Subtract(120);
	Calculator1.PrintResult();
	Calculator1.Clear();
	Calculator1.PrintResult();
	Calculator1.Add(12.5);
	Calculator1.PrintResult();
	Calculator1.CancelLastOperation();
	Calculator1.PrintResult();
	Calculator1.Multiplay(6);
	Calculator1.PrintResult();
	Calculator1.Divide(12.5);
	Calculator1.PrintResult();
	Calculator1.Subtract(12.5);
	Calculator1.PrintResult();
	Calculator1.Divide(12.5);
	Calculator1.PrintResult();
	Calculator1.Add(0.52);
	Calculator1.PrintResult();
	Calculator1.Divide(0);
	Calculator1.PrintResult();
	Calculator1.CancelLastOperation();
	Calculator1.PrintResult();

	return 0;
}
