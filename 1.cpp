/*1. Create a class FLOAT that contains one float data member. Overload all the four
arithmetic operators so that they can operate on the objects of FLOAT.*/

class FLOAT {
private:
    float num;
public:
    FLOAT(float n = 0) {
        num = n;
    }

    FLOAT operator+(const FLOAT& f) const {
        return FLOAT(num + f.num);
    }

    FLOAT operator-(const FLOAT& f) const {
        return FLOAT(num - f.num);
    }

    FLOAT operator*(const FLOAT& f) const {
        return FLOAT(num * f.num);
    }

    FLOAT operator/(const FLOAT& f) const {
        if (f.num == 0) {
            cout << "Division by zero" << endl;
            return FLOAT();
        }
        return FLOAT(num / f.num);
    }

    void display() {
        cout << num << endl;
    }
};
