#include<iostream>
#include<thread>
using namespace std;

class A {
    public:
        void operator()(int a, int b) {
            cout << a*b;
        }
};

int main() {
    std::thread t1 {[]() {
        int a, b;
        std::cin >> a >> b;
        std::cout << a*b;
    }
    };
    t1.join();
    std::cout << std::endl;
    int a, b;
    std::cin >> a >> b;
    A object;
    std::thread t2 {object};
    t2.join();
    return 0;
}
