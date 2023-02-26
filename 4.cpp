/*4. Define a class Addition that can add 2 or 3 numbers of different data types using
function overloading.*/

class Addition {
public:
    int add(int a, int b) {
        return a + b;
    }

    float add(float a, float b) {
        return a + b;
    }

    double add(double a, double b, double c) {
        return a + b + c;
    }
};
