#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
	ofstream binFile("abc.bin", ios::binary);
	if(binFile){
   //cout<<a<<" "<<b<<" "<<c;//display data to console (i.e. as formatted chars)
	binFile.write(reinterpret_cast<char*>(&a), sizeof(a));
	binFile.write(reinterpret_cast<char*>(&b), sizeof(b));
	binFile.write(reinterpret_cast<char*>(&c), sizeof(c));
   cout<<endl<<endl;
   }
   else cout<<"error writing to file"<<endl;
   binFile.close();
   return 0;
   
}
