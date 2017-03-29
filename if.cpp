#include<iostream>
using namespace std;

bool iswithinrange(float nilai, int max, int min);
void prosescetak();

float nilai_ip, total_ip;
bool valid;
int jml_mahasiswa, jumlah_lulus, jumlah_tidaklulus;

int main(){
	do {
		cout << "masukan nilai : ";
		cin >> nilai_ip;
		valid = iswithinrange(nilai_ip,4,0);
	if (valid){
		if (nilai_ip >=2.75) {
			jumlah_lulus++;
		}else{
			jumlah_tidaklulus++;
		}
	total_ip = total_ip + nilai_ip;
	jml_mahasiswa++;
	}else{
		cout << "tidak ada data" << endl;
	}
}
while (nilai_ip != -999);
prosescetak();
}
bool iswithinrange(float nilai, int max, int min){
	if (nilai > max || nilai <= 0){
		return false;
	}
	return true;
}
void prosescetak (){
	cout <<"banyaknya mahasiswa :"  << jml_mahasiswa << endl;
	cout <<"banyaknya jumlah_lulus :" << jumlah_lulus << endl;
	cout <<"banyaknya tidak lulus :" << jumlah_tidaklulus << endl;
	cout <<"rata-rata nilai ip :" << (total_ip/jml_mahasiswa) << endl;
}
