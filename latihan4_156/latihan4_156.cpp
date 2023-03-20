#include <iostream>
using namespace std;

float LuasPersergi(float p, float l) {
	return p * l;
}

float LuasLingkarangan(float r) {
	return 3.14 * r * r;
}

float LuasSegitiga(float a, float t) {
	return 0.5 * a * t;
}

int main()
{
	float Panjang, lebar, jejari, alas, tinggi;
	int pilihan;

	do {
		cout << "\n\n======================" << endl;
		cout << "======== MENU ========" << endl;
		cout << "======================" << endl;
		cout << "1. Luas Persegi" << endl;
		cout << "2. Luas Lingkaran" << endl;
		cout << "3. Luas segitiga" << endl;
		cout << "4. exit" << endl;
		cout << "pilihan (1/2/3/4) : ";
		cin >> pilihan;

		switch (pilihan)
		{
		case 1:
			cout << "masukkan panjang = ";
			cin >> Panjang;
			cout << "masukkan lebar";
			cin >> lebar;
			cout << "luas persegi panjang = " << LuasPersergi (Panjang , lebar);
			break;
		case 2:
			cout << "masukkan jari-jari= ";
			cin >> jejari;
			cout << "Luas Lingkaran = " << LuasLingkarangan(jejari);
			break;
		case 3:
			cout << "masukkan Alas = ";
			cin >> alas;
			cout << "masukkan Tinggi = ";
			cin >> tinggi;
			cout << "luas segitiga =" << LuasSegitiga(alas, tinggi);
		case 4:
			break;
		default:
			cout << "PILIHAN SALAH" << endl;
			break;
		}


	} while (pilihan != 4);
}

