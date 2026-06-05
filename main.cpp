#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    string files[3] = {"file1.txt", "file2.txt", "file3.txt"};

    for (int i = 0; i < 3; i++) {
        ofstream fout(files[i]);

        if (!fout.is_open()) {
            cout << "Ошибка открытия файла " << files[i] << endl;
            return 1;
        }

        for (int j = 0; j < 10; j++) {
            int number = rand() % 10 + 1;
            fout << number << " ";
        }

        fout.close();
    }

    cout << "Файлы успешно созданы!" << endl;

    return 0;