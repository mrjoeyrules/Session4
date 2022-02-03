#include <iostream>
#include <string>
#include <algorithm>
#include <string.h>
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

int main() {
  strings();
}

