// Начиная с числа n, следующие члены последовательности формируются в соответствии с тремя правилами.
// 1. Если n — четное, то следующий член последовательности равен n / 2.
// 2. Если n — нечетное, то следующий член равен n * 3 + 1.
// 3. Если n равно 1, то прекращаем.В противном случае повторяем.
#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "Enter a starting number(greater than 0) or QUIT:" << endl;
    string s;
    cin >> s;
    if (s == "QUIT") {
        return 0;
    }
    else {
        int x = stoi(s);
        bool flag = true;
        while (flag) {
            if (x == 1) {
                flag = false;
            }
            else {
                while (x != 1) {
                    cout << x << ", ";
                    if (x % 2 == 0) {
                        x /= 2;
                    }
                    else {
                        x = 3 * x + 1;
                    }
                }
                cout << x;
                flag = false;
            }
        }
    }
    return 0;
}

