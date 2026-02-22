#include <iostream>
using namespace std;

class clsCalculater {

	float Result = 0;
	float Num = 0;

	float AddingOpertaion() {
	
		Result += Num;
		return Result;
	}

	float SubtractingOpertaion() {

		Result -= Num;
		return Result;
	}

	short ClearOperation() {
	
		Result = 0;
		Num = 0;
		return Result;
	}

	float DividingOperation() {
	
		if (Num == 0) {
		
			Num = 1;
			return Result;
		}

		else {
		
			Result /= Num;
			return Result;
		}
	}

	float MultiplyingOperation() {
	
		Result *= Num;
		return Result;
	}

public:

	void Clear() {
	
		cout << "Result After Clear 0 is = " << ClearOperation() << endl;
	}

	void Add(float Number) {
	
		Num = Number;
		cout << "Result After Adding " << Num << " is = " << AddingOpertaion() << endl;
	}

	void Sub(float Number) {
	
		Num = Number;
		cout << "Result After Subtracting " << Num << " is = " << SubtractingOpertaion() << endl;
	}

	void Div(float Number) {
	
		Num = Number;
		DividingOperation();
		cout << "Result After Dividing " << Num << " is = " << Result << endl;
	}

	void Mult(float Number) {
	
		Num = Number;
		cout << "Result After Multiplying " << Num << " is = " << MultiplyingOperation() << endl;
	}
};

int main() {

	clsCalculater Calculater;

	Calculater.Add(10);
	Calculater.Sub(5.5);
	Calculater.Clear();
	Calculater.Div(0);
	Calculater.Add(50);
	Calculater.Div(0);
	Calculater.Mult(2);
	Calculater.Sub(65);
	Calculater.Mult(3);
	Calculater.Add(5);
	Calculater.Div(3);
	Calculater.Sub(0.6667);
	Calculater.Div(1);
	Calculater.Div(0);
	Calculater.Div(2);

	return 0;
}