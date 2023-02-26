/*7. C++ Program to illustrate the use of Constructors in single inheritance of your choice.*/

class A {
public:
    A() {
        cout << "A constructor called" << endl;
    }

    A(int n) {
        cout << "A parameterized constructor called with value " << n << endl;
    }
};

class B : public A {
public:
    B() {
        cout << "B constructor called" << endl;
    }

    B(int n) : A(n) {
        cout << "B parameterized constructor called with value " << n << endl;
    }
};
