#include <iostream>
#include <string>
using namespace std;

class Bag {
    private:
        string color;
        int size;
        string capacity;
    public:
        Bag(string color, int size, string capacity)
        : color(color), size(size), capacity(capacity) {}
        
        void display() const {
            cout << "Color: " << color << endl;
            cout << "Size: " << size << endl;
            cout << "Capacity: " << capacity << endl;
        }
};
