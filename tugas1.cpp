#include<iostream>
#include<limits>

using namespace std;

int main() {
  int angka;
  cout << "Program untuk mengecek bilangan negatif, positif, atau nol" << endl;
  
  main:
  cout << "Masukkan bilangan apa saja : ";
  
  while(!cin>>angka){
    cout <<"Tolong masukkan hanya angka!"<<endl;
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    goto main;
  }
  
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
