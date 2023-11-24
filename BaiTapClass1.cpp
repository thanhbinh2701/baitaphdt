#include <iostream>

using namespace std;

class Calculator {
private:
    int A;
    int B;

public:
    Calculator(int a, int b) {
        A = a;
        B = b;
    }

    int add() {
        return A + B;
    }
};

int main() {
    int A, B;
    cin >> A >> B;

    Calculator calculator(A, B);
    int sum = calculator.add();

    cout << sum << endl;

    return 0;
}
