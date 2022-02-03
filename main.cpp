#include <iostream>
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
  int arraySize = sizeof(Numbers)/sizeof(Numbers[0]);
  for(int i = 0; i < arraySize-1; i++)
  {
    for(int j = 0; j < arraySize-i-1; j++)
    {
      if(Numbers[j] > Numbers[j+1])
      {
        swapPos(&Numbers[j], &Numbers[j+1]);
      }
    }
  }
  for(int z = 0; z < arraySize-1; z++)
  {
    cout << Numbers[z] << endl;
  }
}

int main() {
  bubbleSort();
}

