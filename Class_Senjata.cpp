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
	// membuat objek dari class
	senjata senjata_M4A1, senjata_AK47, senjata_Uzi;
		
}
