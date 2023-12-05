#include <iostream>
#include <string>

using namespace std;

// Функция зашифровки строки
string encrypt(string str) {
    // Здесь массив с допустимыми символами, которые мы потом заменим на другие
    char original[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    // Дальше массив с символами на которые мы будем менять оригинальные буквы
    char replaced[] = {'z', 'y', 'x', 'w', 'v', 'u', 't', 's', 'r', 'q', 'p', 'o', 'n', 'm', 'l', 'k', 'j', 'i', 'h', 'g', 'f', 'e', 'd', 'c', 'b', 'a'};
    string encrypted = "";

    // Следующие строки это сам код шифровки (скорее не шифровки, а замены символов из строки)
    for (int i = 0; i < str.length(); i++) {
        char c = str[i];
        for (int j = 0; j < 26; j++) {
            if (c == original[j]) {
                encrypted += replaced[j];
                break;
            }
        }
    }
    return encrypted;
}

// Функция расшифровки строки
string decrypt(string str) {
    char original[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char replaced[] = {'z', 'y', 'x', 'w', 'v', 'u', 't', 's', 'r', 'q', 'p', 'o', 'n', 'm', 'l', 'k', 'j', 'i', 'h', 'g', 'f', 'e', 'd', 'c', 'b', 'a'};
    string decrypted = "";
    for (int i = 0; i < str.length(); i++) {
        char c = str[i];
        for (int j = 0; j < 26; j++) {
            if (c == replaced[j]) {
                decrypted += original[j];
                break;
            }
        }
    }
    return decrypted;
}

int main() {
    string message = "hello world";
    string encrypted = encrypt(message);
    cout << "Encrypted: " << encrypted << endl;
    string decrypted = decrypt(encrypted);
    cout << "Decrypted: " << decrypted << endl;
    return 0;
}
