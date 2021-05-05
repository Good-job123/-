#include <iostream>
using namespace std;

void partion(int a[], int left, int right, int k)
{
  //任意位置话划分
  int temp;
  temp = a[0];
  a[0] = a[k];
  a[k] = temp;

  temp = a[left];
  while (left < right)
  {
    while (left < right && a[right] >= temp)
      --right;
    if (left < right)
    {
      a[left] = a[right];
      ++left;
    }

    while (left < right && a[left] < temp)
      ++left;
    if (left < right)
    {
      a[right] = a[left];
      --right;
    }
  }
  a[left] = temp;
}
int main()
{
  int k = 2;
  int a[] = {2, -1, 1, -7, -3, 5, 6};
  partion(a, 0, 6, k);
  for (int i = 0; i < 7; i++)
    cout << a[i] << " ";
}
