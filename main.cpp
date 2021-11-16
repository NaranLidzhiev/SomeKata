#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <stdio.h>

long zero(int num);
using namespace std;
int main() {
    int n;
    cout << "enter a number" << endl;
    cin >> n;
    cout << zero(n) << endl;
}

long zero(int num){
    if (num<0){
        return -1;
    }
    long count = 0;
    for (int i = 5; num/i>=1; i*=5){
        count+= num/i;
    }
    return count;
}

