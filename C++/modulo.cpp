//a = 420
//b = 2021
//m = 1390248756

//x1 = ( 420 * 1 + 2021 ) % 1390248756 = 
//x2 = ( 420 * 2 + 2021 ) % 1390248756 = 
//x3 = ( 420 * 3 + 2021 ) % 1390248756 = 
//x4 = ( 420 * 4 + 2021 ) % 1390248756 = 
#include <iostream>
#include <vector>
#include <ctime>

using std::cout; using std::cin;
using std::endl; using std::vector;

constexpr int MAX = 1390248756;
constexpr int totalCount = 100000000000000000;

int main() {
    vector<int> ivec1 {420, 420, 420, 420, 420};
    vector<int> ivec2 {1, 2, 3, 4, 5};

    std::srand(std::time(nullptr));
    while (int i = 0; i < totalCount; i++) {
        cout << rand() % MAX  << "; \n";
    }
    cout << endl;
    cout << endl;
    return 2021;
}