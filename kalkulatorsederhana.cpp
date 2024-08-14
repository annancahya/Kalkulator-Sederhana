#include <iostream>
using namespace std;

int main() {
    int pilihan;
    float number1, number2, hasil;
    char continueCalc;

    do {
        system("cls");

        cout << "=====================\n\n";
        cout << "Kalkulator sederhana\n\n";
        cout << "=====================\n\n";
        cout << "1. Pertambahan\n";
        cout << "2. Pengurangan\n";
        cout << "3. Perkalian\n";
        cout << "4. Pembagian\n";
        cout << "5. Keluar\n\n";
        cout << "=====================\n\n";
        cout << "Pilih salah satu angka (1-5): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan 2 angka:\n";
                cout << "Nomor 1: ";
                cin >> number1;
                cout << "Nomor 2: ";
                cin >> number2;
                hasil = number1 + number2;
                cout << "Hasil: " << hasil << endl;
                break;

            case 2:
                cout << "Masukkan 2 angka:\n";
                cout << "Nomor 1: ";
                cin >> number1;
                cout << "Nomor 2: ";
                cin >> number2;
                hasil = number1 - number2;
                cout << "Hasil: " << hasil << endl;
                break;

            case 3:
                cout << "Masukkan 2 angka:\n";
                cout << "Nomor 1: ";
                cin >> number1;
                cout << "Nomor 2: ";
                cin >> number2;
                hasil = number1 * number2;
                cout << "Hasil: " << hasil << endl;
                break;

            case 4:
                cout << "Masukkan 2 angka:\n";
                cout << "Nomor 1: ";
                cin >> number1;
                cout << "Nomor 2: ";
                cin >> number2;
                if (number2 != 0) {
                    hasil = number1 / number2;
                    cout << "Hasil: " << hasil << endl;
                } else {
                    cout << "Error: Pembagian dengan nol ga diperbolehkan..\n";
                }
                break;

            case 5:
                cout << "Keluar dari kalkulator. Sampai jumpa!\n";
                return 0;

            default:
                cout << "Pilihan salah. Silakan pilih angka antara 1 dan 5\n";
                break;
        }

        cout << "Mau lanjut menghitung? (y/n): ";
        cin >> continueCalc;

    } while (continueCalc == 'y' || continueCalc == 'Y');

    return 0;
}
