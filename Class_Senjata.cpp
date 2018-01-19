#include <iostream>
#include <string>
using namespace std;

class senjata{
	public:
		int jumlahSenjata;
		string merkSenjata;
		string beratSenjata;
		string panjangSenjata;
		string peluruSenjata;
		string RataPeluruSenjata;
		string kecepatanSenjata; 
		void tembakan(string jarak_tembak);
};

void senjata::tembakan(string jarak_tembak){
	cout << "Jarak Tembakan : "<< jarak_tembak <<endl;
}

int main(){
	// membuat objek dari class.
	senjata senjata_M4A1, senjata_AK47, senjata_Uzi;
	
	//memberi nilai dari objek yang telah kita buat.
	senjata_M4A1.jumlahSenjata = 120;
	senjata_M4A1.merkSenjata = "M4A1 with Grenade Launcher";
	senjata_M4A1.beratSenjata = "2,52 Kg (kosong) - 3,0 Kg (Terisi Peluru)";
	senjata_M4A1.panjangSenjata = "368,3 mm (14,5 inchi)";
	senjata_M4A1.peluruSenjata = "Magazin box 30, 50 atau 150 peluru";
	senjata_M4A1.RataPeluruSenjata = "700-950 butir peluru/menit";
	senjata_M4A1.kecepatanSenjata = "905m/s (2.970 ft/s)";
}
