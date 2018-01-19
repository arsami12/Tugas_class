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
	
}
