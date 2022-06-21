#include <iostream>
using namespace std;

void HarfFonksiyon(int Fpuan);

int main() {

	int puan(0);

	cout << "Harf notunu ogrenmek istediginiz puani giriniz.." << endl;
	cin >> puan;

	HarfFonksiyon(puan);

	cout << "Baska not girmek icin '1' tuslayiniz" << endl;
	cin >> puan;

	if (puan == 1) {

		return main();
	}
}

void HarfFonksiyon(int Fpuan) {

	if (Fpuan >= 90 && Fpuan <= 100) {

		cout << "Harf Notunuz: A" << endl;
	}

	else if (Fpuan >= 84 && Fpuan <= 89) {

		cout << "Harf Notunuz: A-" << endl;
	}

	else if (Fpuan >= 78 && Fpuan <= 83) {

		cout << "Harf Notunuz: B+" << endl;
	}

	else if (Fpuan >= 71 && Fpuan <= 77) {

		cout << "Harf Notunuz: B" << endl;
	}

	else if (Fpuan >= 64 && Fpuan <= 70) {

		cout << "Harf Notunuz: B-" << endl;
	}

	else if (Fpuan >= 57 && Fpuan <= 63) {

		cout << "Harf Notunuz: C+" << endl;
	}

	else if (Fpuan >= 50 && Fpuan <= 56) {

		cout << "Harf Notunuz: C" << endl;
	}

	else if (Fpuan >= 47 && Fpuan <= 49) {

		cout << "Harf Notunuz: C-" << endl;
	}

	else if (Fpuan >= 44 && Fpuan <= 46) {

		cout << "Harf Notunuz: D+" << endl;
	}

	else if (Fpuan >= 42 && Fpuan <= 43) {

		cout << "Harf Notunuz: D" << endl;
	}

	else if (Fpuan >= 40 && Fpuan <= 41) {

		cout << "Harf Notunuz: D-" << endl;
	}

	else if (Fpuan <= 39) {

		cout << "Harf Notunuz: F" << endl;
	}
}