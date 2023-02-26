/*5. Define a class A having multiple constructors. Define another class B derived from
class A. Create derived class constructors and show use of constructor in this single
inheritance.*/

class A {
public:
    A(int n) {
        cout << "A constructor called with value " << n << endl;
    }

    A() {
        cout << "A default constructor called" << endl;
    }
};

class B : public A {
public:
    B(int n) : A(n) {
        cout << "B constructor called with value " << n << endl;
    }

    B() {
        cout << "B default constructor called" << endl;
    }
};
