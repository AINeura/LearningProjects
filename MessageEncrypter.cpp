#include <iostream>
using namespace std;

char DecrpytFunc(char* x);
char EncryptFunc(char* x);

int AdminPassword = 11457;

int main() {

	int EnterPassword;
	bool CryptOrDecrypt;
	char PrimitiveSentence[100] = { ' ' };			// kullanıcı girdisi

	cout << "Password: ";
	cin >> EnterPassword;
	
	if (EnterPassword == AdminPassword) {

		cout << "Login Successful.." << endl << endl;
	}
	
	else {

		cout << "Unidentified Access Error";
		exit(0);
	}

	cout << "Input 1 for encrypt, input 0 for decrypt" << endl;
	cin >> CryptOrDecrypt;

	if (CryptOrDecrypt) {							// ŞİFRELEME

		char CryptedSentence[100] = { ' ' };		// şifrelenmiş karakter dizisi
		int i = 0;

		cout << endl << "Enter the characters to be encrypted and put '.' at the end then press enter key." << endl;
		for (i = 0; i < sizeof(PrimitiveSentence); i++) {

			cin >> PrimitiveSentence[i];

			if (PrimitiveSentence[i] == '.') {		// Girilen karakter '.' ise girdi almayı bırakıyor ve şifrelenen metni ekrana yazıyor.

				cout <<endl << "Encrypting..." << endl;
				cout << "Encrypted Message: " << CryptedSentence << endl << endl;
				break;
			}

			CryptedSentence[i] = EncryptFunc(&PrimitiveSentence[i]);	// kullanıcının girdiği karakterin ram adresi verilerek fonksiyon içerisinde şifreleniyor.
		}
	}

	else {											// DEŞİFRELEME

		char DecryptedSentence[100] = { ' ' };		// Deşifre edilmiş karakter dizisi
		int i = 0;

		cout << endl << "Enter the characters to be decrypted and put '.' at the end then press enter key." << endl;
		for (i = 0; i < sizeof(PrimitiveSentence); i++) {

			cin >> PrimitiveSentence[i];
		
			if (PrimitiveSentence[i] == '.') {

				cout <<endl << "Decrypting..." << endl;
				cout << DecryptedSentence << endl << endl;
				break;
			}
		
			DecryptedSentence[i] = DecrpytFunc(&PrimitiveSentence[i]);
		}
	}

	system("pause");
}

char EncryptFunc(char* x) {

	switch (*x) {

	default:
		*x = '?';
		break;

	case 'a':
		*x = '!';
		break;

	case 'b':
		*x = 'i';
		break;

	case 'c':
		*x = 'p';
		break;

	case 'd':
		*x = 'e';
		break;

	case 'e':
		*x = '*';
		break;

	case 'f':
		*x = 'm';
		break;

	case 'g':
		*x = 't';
		break;

	case 'h':
		*x = 'q';
		break;

	case 'i':
		*x = '#';
		break;

	case 'j':
		*x = 'j';
		break;

	case 'k':
		*x = 'f';
		break;

	case 'l':
		*x = 'c';
		break;

	case 'm':
		*x = 's';
		break;

	case 'n':
		*x = 'b';
		break;

	case 'o':
		*x = 'g';
		break;

	case 'p':
		*x = 'u';
		break;

	case 'q':
		*x = 'o';
		break;

	case 'r':
		*x = 'x';
		break;

	case 's':
		*x = 'a';
		break;

	case 't':
		*x = 'l';
		break;

	case 'u':
		*x = 'h';
		break;

	case 'v':
		*x = 'd';
		break;

	case 'w':
		*x = 'z';
		break;

	case 'x':
		*x = 'r';
		break;

	case 'y':
		*x = 'k';
		break;

	case 'z':
		*x = 'n';
		break;

	case ' ':
		*x = ' ';
		break;
	}

	return *x;
}
char DecrpytFunc(char* x) {

	switch (*x) {

	default:
		*x = '?';
		break;

	case '!':
		*x = 'a';
		break;

	case 'i':
		*x = 'b';
		break;

	case 'p':

		*x = 'c';
		break;

	case 'e':
		*x = 'd';
		break;

	case '*':
		*x = 'e';
		break;

	case 'm':
		*x = 'f';
		break;

	case 't':
		*x = 'g';
		break;

	case 'q':
		*x = 'h';
		break;

	case '#':
		*x = 'i';
		break;

	case 'j':
		*x = 'j';
		break;

	case 'f':
		*x = 'k';
		break;

	case 'c':
		*x = 'l';
		break;

	case 's':
		*x = 'm';
		break;

	case 'b':
		*x = 'n';
		break;

	case 'g':
		*x = 'o';
		break;

	case 'u':
		*x = 'p';
		break;

	case 'o':
		*x = 'q';
		break;

	case 'x':
		*x = 'r';
		break;

	case 'a':
		*x = 's';
		break;

	case 'l':
		*x = 't';
		break;

	case 'h':
		*x = 'u';
		break;

	case 'd':
		*x = 'v';
		break;

	case 'r':
		*x = 'x';
		break;

	case 'k':
		*x = 'y';
		break;

	case 'n':
		*x = 'z';
		break;

	case 'z':
		*x = 'w';
		break;

	case ' ':
		*x = ' ';
		break;
	}

	return *x;
}