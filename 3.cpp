/*3. Define a base class Animals having member function sound() . Define another
derived class from Animals class named Dogs. You need to override the sound
function of the base class in the derived class.*/

class Animals {
public:
    void sound() {
        cout << "Animal sound" << endl;
    }
};

class Dogs : public Animals {
public:
    void sound() {
        cout << "Bark" << endl;
    }
};
