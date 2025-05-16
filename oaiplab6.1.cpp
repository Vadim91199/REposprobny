#include <iostream>
#include <string>
using namespace std;

int main() {

    setlocale(LC_ALL, "RU");
    string input;
    cout << "Введите строку: ";
    getline(cin, input);

    int length = input.length();
    cout << "Длина строки: " << length << endl;
                                                            
    if (length == 10) {
        string result;
        for (char ch : input) {
            if (!(ch >= 'A' && ch <= 'Z')) {
                result += ch;
            }
        }
        cout << "Результат: " << result << endl;
    }
    else {
        cout << "Строка не требует изменений." << endl;
    }

    return 0;
}
