#include <iostream>
using namespace std;

namespace MyApp {
    class Utility {
    public:
        static void SayHello() {
            cout << "Hello from MyApp!" << endl;
        }
    };
}

int main() {
    using namespace MyApp;
    Utility::SayHello();

    return 0;
}
