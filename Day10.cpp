// Day 10 of Hackerrank

#include <bits/stdc++.h>

using namespace std;

// Complete the factorial function below.
int factorial(int total, int num) {
    if (num <= 1) {
    return 1;
} else {
    return num*factorial(num, num - 1);
}
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = factorial(n,n);

    fout << result << "\n";

    fout.close();

    return 0;
}
