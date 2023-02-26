//2. Define a class Rectangle and overload area function for different types of data type.

class Rectangle {
private:
    int length, width;
    float height;
public:
    Rectangle(int l = 0, int w = 0) {
        length = l;
        width = w;
    }

    Rectangle(float h) {
        height = h;
    }

    int area() {
        return length * width;
    }

    float area() {
        return 0.5 * length * width;
    }

    float area() {
        return 3.14 * height * height;
    }
};
