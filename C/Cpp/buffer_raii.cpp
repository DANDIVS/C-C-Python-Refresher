#include <iostream>

class Buffer {
private:
    int *data;
    std::size_t size;
public:
    explicit Buffer(std::size_t size_) : data(nullptr), size(size_) {
        data = new int[size];
        std::cout << "Buffer allocated for " << size << " ints\n";
    }

    ~Buffer() {
        delete[] data;
        std::cout << "Buffer freed\n";
    }

    void fill(int value) {
        for (std::size_t i = 0; i < size; ++i) {
            data[i] = value;
        }
    }

    void print() const {
        for (std::size_t i = 0; i < size; ++i) {
            std::cout << data[i] << " ";
        }
        std::cout << "\n";
    }
};

int main() {
    Buffer buf(5);
    buf.fill(42);
    buf.print();
    return 0;
}
