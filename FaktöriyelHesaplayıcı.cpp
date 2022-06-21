#include <iostream>
using namespace std;

// Kullanýcýnýn girdiði sayýnýn faktöriyelini hesaplayan program

int main() {

	int KullaniciGirdisi(1);
	int Sonuc(1);

	cout << "Faktoriyelini hesaplamak istediginiz sayiyi giriniz.." << endl;

	cin >> KullaniciGirdisi;

	if (KullaniciGirdisi < 0 ) {

		cout << "Girilecek deger 0'dan buyuk olmalidir. Tekrar deneyiniz.." << endl;

		return main();
	}

	for (int i = KullaniciGirdisi; i > 1; i--) {

		Sonuc = Sonuc * i;
	}

	cout << KullaniciGirdisi << " sayisinin faktoriyeli = " << Sonuc << endl;

	system("pause");
}