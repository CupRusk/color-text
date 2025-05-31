#include <iostream>
using namespace std;

int main() {
    string colors[] = {"\033[31m", "\033[32m", "\033[33m", "\033[34m", "\033[35m", "\033[36m"};
    for(int i = 0; i < 6; i++) {
        cout << colors[i] << "----------" << "\033[0m" << endl;
        cout << colors[i] << "Hello C++ Colors" << "\033[0m" << endl;
        cout << colors[i] << "Hello world!" << "\033[0m" << endl;
        cout << colors[i] << "----------" << "\033[0m" << endl;
    }
}
