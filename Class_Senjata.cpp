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
	senjata senjata_M4A1, senjata_AK47, senjata_M249SAW;
	
	//memberi nilai dari objek yang telah kita buat.
	senjata_M4A1.jumlahSenjata = 120;
	senjata_M4A1.merkSenjata = "M4A1 with Grenade Launcher";
	senjata_M4A1.beratSenjata = "2,52 Kg (kosong) - 3,0 Kg (Terisi Peluru)";
	senjata_M4A1.panjangSenjata = "368,3 mm (14,5 inchi)";
	senjata_M4A1.peluruSenjata = "Magazin box 30, 50 atau 150 peluru";
	senjata_M4A1.RataPeluruSenjata = "700-950 butir peluru/menit";
	senjata_M4A1.kecepatanSenjata = "905m/s (2.970 ft/s)";
	//-----------------------------------------------------------------------
	senjata_AK47.jumlahSenjata = 150;
	senjata_AK47.merkSenjata = "AK47 Scope with Dual Slot";
	senjata_AK47.beratSenjata = "4,3 Kg (Terisi Peluru)";
	senjata_AK47.panjangSenjata = "415 mm (16,3 inchi)";
	senjata_AK47.peluruSenjata = "Magazin box 30, 40 atau 75 peluru";
	senjata_AK47.RataPeluruSenjata = "600 butir peluru/menit";
	senjata_AK47.kecepatanSenjata = "710m/s";
	//------------------------------------------------------------------------
	senjata_M249SAW.jumlahSenjata = 50;
	senjata_M249SAW.merkSenjata = "M249 SAW Scope";
	senjata_M249SAW.beratSenjata = "6,9 Kg (Kosong)";
	senjata_M249SAW.panjangSenjata = "465 mm";
	senjata_M249SAW.peluruSenjata = "Magazin box dan Magazin STANAG 100, 500 atau 2500 peluru";
	senjata_M249SAW.RataPeluruSenjata = "1000 butir peluru/menit";
	senjata_M249SAW.kecepatanSenjata = "620m/s";
	
	string pilihan;
	cout << "Apa yang ingin kamu pilih : "; cin >> pilihan;
	
	if(pilihan=="weapon1"){
		cout << "TENTANG SENJATA M4A1 : "<<endl;
		cout << "Jumlah Senjata : "<<(senjata_M4A1.jumlahSenjata)<<" unit"<<endl;
		cout << "Merk Senjata : "<<(senjata_M4A1.merkSenjata)<<endl;
		cout << "Berat Senjata : "<<(senjata_M4A1.beratSenjata)<<endl;
		cout << "Panjang Senjata : "<<(senjata_M4A1.panjangSenjata)<<endl;
		cout << "Kapasitas Magazin : "<<(senjata_M4A1.peluruSenjata)<<endl;
		cout << "Rata-rata Tembakan : "<<(senjata_M4A1.RataPeluruSenjata)<<endl;
		senjata_M4A1.tembakan("300 Meter (Efektif) / 800 Meter (Jangkauan Max)");
	}else if(pilihan=="weapon2"){
		cout << "TENTANG SENJATA AK47 : "<<endl;
		cout << "Jumlah Senjata : "<<(senjata_AK47.jumlahSenjata)<<" unit"<<endl;
		cout << "Merk Senjata : "<<(senjata_AK47.merkSenjata)<<endl;
		cout << "Berat Senjata : "<<(senjata_AK47.beratSenjata)<<endl;
		cout << "Panjang Senjata : "<<(senjata_AK47.panjangSenjata)<<endl;
		cout << "Kapasitas Magazin : "<<(senjata_AK47.peluruSenjata)<<endl;
		cout << "Rata-rata Tembakan : "<<(senjata_AK47.RataPeluruSenjata)<<endl;
		senjata_M4A1.tembakan("300 Meter (Efektif)");
	}else if(pilihan=="weapon3"){
		cout << "TENTANG SENJATA M249 SAW : "<<endl;
		cout << "Jumlah Senjata : "<<(senjata_M249SAW.jumlahSenjata)<<" unit"<<endl;
		cout << "Merk Senjata : "<<(senjata_M249SAW.merkSenjata)<<endl;
		cout << "Berat Senjata : "<<(senjata_M249SAW.beratSenjata)<<endl;
		cout << "Panjang Senjata : "<<(senjata_M249SAW.panjangSenjata)<<endl;
		cout << "Kapasitas Magazin : "<<(senjata_M249SAW.peluruSenjata)<<endl;
		cout << "Rata-rata Tembakan : "<<(senjata_M249SAW.RataPeluruSenjata)<<endl;
		senjata_M4A1.tembakan("1000 Meter (Efektif)");
}
}
