#include<iostream>

using namespace std;

int main() {
  int angka;
  cout << "Program untuk mengecek bilangan negatif, positif, atau nol" << endl;
  
  cout << "Masukkan bilangan apa saja : "; cin >> angka;
  
  if(angka > 0) {
    cout << "Bilangan positif"<<endl;
   }
   else if(angka<0) {
    cout << "Bilangan negatif"<<endl;
   }
   else {
    cout << "Angka nol"<<endl;
   }
  
  return 0;
}
