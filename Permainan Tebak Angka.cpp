#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Inisialisasi generator angka acak
    srand(time(nullptr));

    // Menghasilkan angka acak antara 1 dan 50
    int target_number = rand() % 50 + 1;

    cout << "Hayu Bermain tebak angka!" << endl;
    cout << "Aku sedang memikirkan angka diantara 1 dan 50." << endl;

    int attempts = 0;
    int guess;

    while (true) {
        cout << "hayoo angka berapa??: ";
        cin >> guess;
        attempts++;

        if (guess < target_number) {
            cout << "lebi gede dong, Coba lagi!" << endl;
        }
        else if (guess > target_number) {
            cout << "Kegedean bos, Coba lagi!" << endl;
        }
        else {
            cout << "IYAK BENARRR BOSQ " << target_number
                << " dalam " << attempts << " percobaan." << endl;
            break;
        }
    }

    cout << "Thankyou suda bermain!" << endl;

    return 0;
}