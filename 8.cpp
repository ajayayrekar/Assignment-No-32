/*8. Write a C++ program to find the factorial of a number using copy constructor*/

#include <iostream>
using namespace std;

class Factorial {
private:
    int num;
    long long result;

public:
    Factorial(int n) {
        num = n;
        result = 1;
    }

    Factorial(const Factorial& fact) {
        num = fact.num;
        result = fact.result;
    }

    void calculate() {
        for (int i = 1; i <= num; i++) {
            result *= i;
        }
    }

    void display() {
        cout << "Factorial of " << num << " is " << result << endl;
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    Factorial f(n);
    f.calculate();
    f.display();

    Factorial f_copy = f;
    f_copy.display();

    return 0;
}
