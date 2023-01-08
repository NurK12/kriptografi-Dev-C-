#include <iostream>
#include <conio.h>
using namespace std;

void EncDecXOR(char*, int);
const int key = 199; // Key untuk enkripsi

int main()
{
char buffer[1024]; // Penampung input. maximum 1024 karakter
cout << "Masukan string yang akan di Enkripsi: ";
// Masukan input string dari standar output ke buffer[]
cin.getline(buffer, 1024-1);
EncDecXOR(buffer, key); // Enkripsi string di buffer[]
cout << "Hasil Enkripsi : " << buffer << endl;
EncDecXOR(buffer, key); // Dekripsi string di buffer[]
cout << "Hasil Deksripsi : " << buffer << endl;
cout << "Press any key to Exit ..";
getch();
return 0;
}

// EncDecXOR() - Melakukan enkripsi-dekripsi dengan menggunakan XOR
// berdasarkan key yang ditentukan oleh user

void EncDecXOR(char* szString, int nKey)
{
for(int i=0; szString[i]; i++)
{
szString[i] = szString[i] ^ nKey;
}
}
