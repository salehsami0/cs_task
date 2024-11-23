#include <iostream>
using namespace std;
bool isPrims(int number) {
     int counter =0;
    for (int i = 2; i < number; ++i) {
        if (number % i == 0) {
           counter++;
        }
    }

    if(counter == 0) return true;
    else return false;
}

void printPrimeNumbers(int n, int m) {


    for (int i = n +1; i <= m; ++i) {
        if (isPrims(i)) {
            cout << i << " ";
        }
    }
   cout << endl;
}

int main() {
    int n, m;

    cout << "enter numbers"<<endl;
   cin >> n >> m;
    printPrimeNumbers(n, m);

    return 0;
}
