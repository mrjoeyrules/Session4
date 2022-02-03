#include <iostream>
#include <string>
#include <algorithm>
#include <string.h>
#include <fstream>
using namespace std;
void swapPos(double *xp, double *yp)
{
  double temp = *xp;
  *xp = *yp;
  *yp = temp;
}

void bubbleSort()
{
  const int NMAX = 10;
  double Numbers[NMAX] = { 31.2, 29.7, 53.5, 69.0, 23.7, 71.8, 49.3, 52.9, 51.3, 57.1 };
  for(int i = 0; i < NMAX-1; i++)
  {
    for(int j = 0; j < NMAX-i-1; j++)
    {
      if(Numbers[j] > Numbers[j+1])
      {
        swapPos(&Numbers[j], &Numbers[j+1]);
      }
    }
  }
  for(int z = 0; z < NMAX-1; z++)
  {
    cout << Numbers[z] << endl;
  }
}

void strings()
{
  const int TOWNTOTAL = 6;
  string towns[TOWNTOTAL] = { "london", "glasGow", "HARWICH", "NoTtInGHaM","DERBy","BriSToL" };
  for(int i = 0; i < TOWNTOTAL-1; i++)
  {
    string currentTown = towns[i];
    for(int y = 0; y < towns[i].length(); y++)
    {
        bool isCapital;
        if(towns[i][y] < 96)
        {
          isCapital = true;
        }
        else isCapital = false;
        if(y == 0)
        {
          if(!isCapital)
          {
            towns[i][y] -= 32;
          }
        }
        else
        {
          if(isCapital)
          {
            towns[i][y] +=32;
          }
        }
        cout << towns[i] << endl;
    }
  }
}

void exercise3File()
{
  string fileText;
  string fullQuote[12];
  bool loopControl;
  ifstream ExternalFile("Session4Exercise3.txt");
  int lineCount = 0;
  while(getline(ExternalFile, fileText))
  {
    /*
    fullQuote[lineCount] = fileText;
    lineCount++;
    */
    cout << fileText << endl;
  }
  /*
  cout << fullQuote[0] << " " << fullQuote[1] << " " << fullQuote[2] << " " << fullQuote[3] << " " << fullQuote[4] << " " << fullQuote[5] << " " << fullQuote[6] << " " << fullQuote[7] << " " << fullQuote[8] << " " << fullQuote[9] << " " << fullQuote[10] << endl; 
  */
}

void exersise4()
{
  int a = 7;
	float b = 3.4;
	double c = 4.567;
	string str = "hello";
	char t = 'g';
	int myList[5];
	int end;

	cout << "...........Start ......" << endl;

	cout << "integer a = " << a << "  pointer: " << &a << "  length: "<< sizeof(a) <<  endl;
	cout << "float b = " << b << "  pointer: " << &b << "  length: " << sizeof(b) << endl;
	cout << "double c = " << c << "  pointer: " << &c << "  length: " << sizeof(c) << endl;
	cout << "string str = " << str << "  pointer: " << &str << "  length: " << sizeof(str) << endl;
	cout << "char t = " << t << "  pointer: " << &t << "  length: " << sizeof(t) << endl;
	cout << "array myList = " << myList << "  pointer: " << &myList << "  length: " << sizeof(myList) << endl;
	cout << "int end = " << end << "  pointer: " << &end << "  length: " << sizeof(end) << endl;

	cout << ".........End............" << endl;
}

int main() {
  
}

