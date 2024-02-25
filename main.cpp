#include <iostream>
using namespace std;

int firstTask() {
  int N;
  int numberOfZeros = 0;
  cout << "Enter N " << endl;
  cin >> N;

  int A[N];
  cout << "Enter " << N << " integers:" << endl;

  for (int i = 0; i < N; ++i) {
    cout << "Enter element " << i + 1 << ": ";
    cin >> A[i];
  }

  for (int i = 0; i < N; ++i) {
    if(A[i] == 0){
      numberOfZeros += 1;
    }
  }

  return numberOfZeros;
}

void secondTask() {
int T;
int size;
int arr[size];
int indexOfTEqual;
int largestNegative;

cout << "Enter T " << endl;
cin >> T;

cout << "Enter size " << endl;
cin >> size;



for (int i = 0; i < size; ++i) {
  cout << "Enter element: " << endl;
  cin >> arr[i];
}
for (int i = 0; i < size; ++i) {
  if(arr[i] == T){
    indexOfTEqual = i;
  }
}
for (int i = indexOfTEqual; i < size; ++i) {
  if (arr[i] < 0 && arr[i] > largestNegative) {
      largestNegative = arr[i];
  }
}
cout << "Largest negative: " << largestNegative << endl;
}

int main() {
firstTask();
secondTask();
}
