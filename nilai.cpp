#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int nik [30];
	char nama [30];
	char TTL [20];
	char JK [20];
	char Alamat [50];
	char rtrw [50];
	char kel [50];
	char kec [50];
	char agama [50];
	char SP [50];
	char pekerjaan [50];
	char kwn[50];
	char BH[50];
	
	
	cout << ("Input Data KTP\n");
	
	cout << ("Nama			:");
	cin.getline(nama,30);
	cout << ("Tempat/Tgl Lahir	:");
	cin.getline(TTL,30);
	cout << ("Jenis kelamin		:");
	cin.getline(JK,20);
	cout << ("Alamat			:");
	cin.getline(Alamat,50);
	cout << ("\tRT/RW			:");
	cin.getline(rtrw,50);
	cout << ("\tKel/Desa		:");
	cin.getline(kel,50);
	cout << ("\tKecamatan		:");
	cin.getline(kec,50);
	cout << ("Agama			:");
	cin.getline(agama,50);
	cout << ("Status Perkawinan 	:");
	cin.getline(SP,50);
	cout << ("Pekerjaan		:");
	cin.getline(pekerjaan,50);
	cout << ("Kewarganegaraan		:");
	cin.getline(kwn,50);
	cout << ("Berlaku Hingga		:");
	cin.getline(BH,50);
	
	getch();
}
