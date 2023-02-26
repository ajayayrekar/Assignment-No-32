/*6. C++ Program to illustrate the use of Constructors in multilevel inheritance of your
choice.*/

class A {
public:
    A() {
        cout << "A constructor called" << endl;
    }
};

class B : public A {
public:
    B() {
        cout << "B constructor called" << endl;
    }
};

class C : public B {
public:
    C() {
        cout << "C constructor called" << endl;
    }
};
