#include <iostream>
#include <vector>
#include <algorithm>

void print(std::vector<int> a);
void sort(std::vector<int> a);
int median(std::vector<int> a);
int average(std::vector<int> a);

int main()
{
  std::cout << "This program finds the median and\n"
            << "the average of the temperature.\n"
            << std::endl;

  std::vector <int> temps;
  std::cout << "Enter the temperatures:\n";
  for (int temp; std::cin >> temp;)
    temps.push_back(temp);
  
  // Print
  print(temps);
  std::cout << "Sorting:" << std::endl;
  sort(temps);
  std::cout << "Median: " << median(temps) << std::endl;
  std::cout << "Average: " << average(temps) << "\n";
}

void print(std::vector<int> a)
{
  for (int x : a)
  {
    if (x == a[a.size()-1])
      std::cout << x << ".\n";
    else
      std::cout << x << ", ";
  }
}
void sort(std::vector<int> a)
{
  std::sort(a.begin(), a.end());
  print(a);
}

int median(std::vector<int> a)
{
  std::sort(a.begin(), a.end());
  return a[a.size() / 2];
}

int average(std::vector<int> a)
{
  int sum {0};
  for (int x : a)
    sum += x;
  return sum / a.size();
}


