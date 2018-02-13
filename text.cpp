#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
	ofstream outputFile("abc.txt");
	if(outputFile){
   cout<<a<<" "<<b<<" "<<c;//display data to console (i.e. as formatted chars)
	outputFile<<a <<" "<<b<<" "<<c;
   cout<<endl<<endl;
   }
   outputFile.close();
   return 0;
   
}
