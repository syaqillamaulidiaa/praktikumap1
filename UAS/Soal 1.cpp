#include <iostream>
using namespace std;

bool isValidPassword(const string& password) {
    if (password.length() != 8)
        return false;

    for (int i = 0; i < 8; ++i) {
        if (!isalnum(password[i]) || isspace(password[i]))
            return false;
        for (int j = i + 1; j < 8; ++j) {
            if (password[i] == password[j])
                return false;
        }
    }

    return true;
}

string convertPassword(const string& password) {
    string convertedPassword = password;

    for (int i = 0; i < 8; ++i) {
        if (isalpha(password[i])) {
            if (password[i] == 'y' || password[i] == 'z' || password[i] == 'Y' ||
                password[i] == 'Z') {
                convertedPassword[i] = password[i] - 24;
            }
            else {
                convertedPassword[i] = password[i] + 2;
            }
        }
        else if (isdigit(password[i])) {
            convertedPassword[i] = '0' + ((password[i] - '0') * 2);
        }
    }

    return convertedPassword;
}

int main() {
    string password;
    cout << "Masukkan password (8 digit): ";
    cin >> password;

    if (isValidPassword(password)) {
        string convertedPassword = convertPassword(password);

        cout << "Password yang dimasukkan: " << password << endl;
        cout << "Password yang tersimpan: " << convertedPassword << endl;
    }
    else {
        cout << "Password tidak valid!" << endl;
    }

    return 0;
}