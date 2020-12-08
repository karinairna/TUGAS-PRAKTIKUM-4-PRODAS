//--------------------------//
//Nama  : Karina Irna Della
//Prodi : Manajemen Informatika
//Kelas : 2020B
//NIM   : 20051397030
//--------------------------//

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int arr[9];
	int *n = arr;
	
	for(int i = 0; i <= 9; i++){
	cout << "masukan nilai ke " << i+1 << " : "; cin >> *(n+i);
	}
	
	cout << "output address dari array adalah ";
	for (int o = 0; o <= 9; o++)
	cout << (n+o) << " ";
	
	
	cout << endl << "output nilai dari array adalah ... " << endl;
	for(int p = 0; p <= 9; p++){
		cout << "nilai ke " << p << " adalah " << *(n+p) << endl;
	}
	
	delete [] n;
}
