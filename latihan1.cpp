#include <iostream>

using namespace std;

// deklarasi funsi

int hitung (int, int);
void cetak (int);


int InputData() {
cout << "Masukan data: ";
int a;
cin >> a;
return a;
}

int main () {
int a = hitung (10, 2);
cetak(a);

int b = InputData ();
int c = InputData ();
cetak(hitung(b,c));

}

// implementasi fungsi

int hitung (int a, int b) {
return a+b;
}

void cetak(int a) {
cout<< "Nilai dari variable adalah : " << a <<endl;
}
