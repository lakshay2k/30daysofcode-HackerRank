#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
        
        int ni;
        double nd;
        string ns;
        string result;
        
        cin>>ni>>nd;
        getline(cin>>ws,ns);
        cout<<i+ni<<endl;
        cout<<fixed<<setprecision(1)<<d+nd<<endl;
        result = s + ns;
        cout<<result;

    return 0;
}
