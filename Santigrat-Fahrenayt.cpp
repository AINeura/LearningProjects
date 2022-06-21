#include <iostream>
using namespace std;

// 0 C = 32.0 F
// 1 C'lik fark 1.8 F'ye denk
// 1 F'lik fark 0.55556 C'ye denk
// 30 fahrenayt santigrata cevrilecek

int main() {

	int KullaniciSecimi = 1;

	float VarsayilanFahrenayt = 32.0f;	// 0 C = 32.0 F
	float fahrenaytCarpani = 1.8f;		// C ile F arasındaki oran

	float KullaniciGirdisi = 0.0f;
	float sonuc = 0.0f;

	cout << "Santigrattan fahrenayta çevirmek icin '1', fahrenayttan santigrata cevirmek icin '2' giriniz.." << endl;
	cin >> KullaniciSecimi;

	cout << "Cevirmek istediginiz degeri giriniz.." << endl;
	cin >> KullaniciGirdisi;

	if (KullaniciSecimi == 1) {

		fahrenaytCarpani = 1.8 / 1;
		sonuc = (KullaniciGirdisi * fahrenaytCarpani) + VarsayilanFahrenayt;

		cout << "Sonuc: " << sonuc << " Fahrenayt" << endl;
	}

	else if (KullaniciSecimi == 2) {

		fahrenaytCarpani = 1 / 1.8;
		KullaniciGirdisi = KullaniciGirdisi - VarsayilanFahrenayt;

		sonuc = KullaniciGirdisi * fahrenaytCarpani;

		cout << "Sonuc: " << sonuc << " Santigrat" << endl;
	}
	
}