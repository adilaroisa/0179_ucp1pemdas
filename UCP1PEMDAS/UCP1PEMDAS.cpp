// 1. int alas; string tinggi; double luas;
// 2. void prosedurluas(int p, int l)
// {
//	luas = p * l;
// }
// int fungsiluas(int p, int l)
// {
	// return p * l;
// }
// 3. for (i = 1; i <= n - 1; i++)
// 4. case 4:
// inputData();
// cout << "n\Hasil pembagian" << pembagian(bilangan1, bilangan2) << endl;
// system("pause");
// break; 
// 5. struct DetailAlamat {
//    string desa;
//    string kota;  };

// 6.

#include <iostream>
using namespace std;

int Sensor1, Sensor2, Sensor3;
string Kota;


int sensor1(int a, int b)
{
	return a + b;
}

void inputData()
{
	cout << "\nMasukan sensor pertama: ";
	cin >> Sensor1;
	cout << "Masukan sensor kedua: ";
	cin >> Sensor2;
	cout << "Masukan sensor ketiga: ";
	cin >> Sensor3;
}

int main()
{

	int pilihan;

	do
	{
		system("CLS");
		cout << "Menu Pengawasan Kualitas Udara" << endl;
		cout << "1. Kota Tidak Sehat" << endl;
		cout << "2. Kota Sehat" << endl;
		cout << "5. Keluar" << endl;
		cout << "Masukan pilihan: ";
		cin >> pilihan;

		switch (pilihan)
		{
		case 1:
			inputData();
			cout << "\nHasil sensor1: " << endl;
			system("pause");
			break;
		case 2:
			inputData();
			cout << "\nHasil sensor 2: " << endl;
			system("pause");
			break;
		case 3:
			inputData();
			cout << "\nHasil sensor: " <<  endl;
			system("pause");
			break;
		case 5:
			break;
		default:
			cout << "Pilihan tidak valid" << endl;
			system("pause");
			break;
		}
	} while (pilihan != 5); 

	return 0;
}


 
	

