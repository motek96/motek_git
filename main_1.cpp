#include <iostream>

using namespace std;
string , haslo;
string alfabet[25];
int k;

int main()
{
   alfabet[0]="A";
   alfabet[1]="B";
   alfabet[2]="C";
   alfabet[3]="D";
   alfabet[3]="E";
   alfabet[4]="F";
   alfabet[5]="G";
   alfabet[6]="H";
   alfabet[7]="I";
   alfabet[8]="J";
   alfabet[9]="K";
   alfabet[10]="L";
   alfabet[11]="M";
   alfabet[12]="N";
   alfabet[13]="O";
   alfabet[14]="P";
   alfabet[15]="Q";
   alfabet[16]="R";
   alfabet[17]="S";
   alfabet[18]="T";
   alfabet[19]="U";
   alfabet[20]="V";
   alfabet[21]="W";
   alfabet[22]="X";
   alfabet[23]="Y";
   alfabet[24]="Z";

   cin >> szyfr;

   for(int i=0; i<szyfr.length() ;i++)
   {
       for(int j=0; szyfr!=alfabet[j]; j++)
       {
           k++;
       }
    k=k+3;
    if(k==26) k=1;
    else if(k==27) k=2;
    else if(k==28) k=3;
    haslo = haslo + alfabet[k-1];
    cout << haslo << endl;
   }
}
