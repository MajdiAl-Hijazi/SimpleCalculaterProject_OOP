#include<iostream>
using namespace std;

class clsCalculator {

	string _LastOperation = "clear";
	float _LastNumber = "0";
	float _Result = "0";

public:
	void Add(float Num) {
	
		_Result += Num;
		_LastNumber = Num;
		_LastOperation = "Addaing";
	}
	void Subtract(float Num) {
	
		_Result -= Num;
		_LastNumber = Num;
		_LastOperation = "Subtracting";
	}
	void Multiplay(float Num) {
	
		_Result *= Num;
		_LastNumber = Num;
		_LastOperation = "Multiplaying";
	}
};

int main() {



	return 0;
}