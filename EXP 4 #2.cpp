#include<iostream>
using namespace std;
int
main ()
{
  int arr[100], i, j, t, n, min, max;
  cout << "Enter the array size: ";
  cin >> n;
  cout << "Enter the " << n << " elements: ";
  for (i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
  cout << endl << "Your data: ";
  for (i = 0; i < n; i++)
    {
      cout << arr[i] << " ";
    }
  for (i = 0; i < n; i++)
    {
      for (j = i + 1; j < n; j++)
	{
	  if (arr[j] < arr[i])
	    {
	      t = arr[i];
	      arr[i] = arr[j];
	      arr[j] = t;
	    }
	}
    }
  cout << endl << "Sorted Data: ";
  for (i = 0; i < n; i++)
    {
      cout << arr[i] << "  ";
    }
  system("pause");
  return 0;
}

