#include <iostream>
#include <cmath>

using namespace std;

class NegativeNumber : public exception {
public:
    const char* what() const noexcept override {
        return "Negative Number Exception";
    }
};

int main() {
    int n;
    cout << "Enter Number: ";
    cin >> n;

    try {
        if (n < 0) {
            throw NegativeNumber();
        }
        double s = sqrt(n);
        cout << "Square root: " << s << endl;
    }
    catch ( NegativeNumber& e) {
        cout << e.what() << endl;
    }

    return 0;
}