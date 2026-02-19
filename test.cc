// Denny Nguyen
// ID: 863302113

#include <iostream>
#include <string>

template <typename T, typename U> class box {
    private:
        T item_;
        U otheritem_;
    public:
        box(T item, U otheritem)
            : item_(item), otheritem_(otheritem) {}

        void print() {
            std::cout << "The first item is " << item_ << "\n" 
                << "The second item is " << otheritem_ << "\n";
        }
};

template <typename T> class Stack {
    private:
        T* data;
        int capacity;
        int top;

    public:
        Stack(int size) {
            capacity = size;
            top = -1;
            data = new T[capacity];
        }

        ~Stack() {
            delete [] data;
        }

        void push(const T& value) {
            data[++top] = value;
        }

        T pop() {
            return data[top--];
        }

};

int main() {
    std::cout << "this is a test" << "\n";
    box b_pair{5, 5.5};
    b_pair.print();
    return 0;
}