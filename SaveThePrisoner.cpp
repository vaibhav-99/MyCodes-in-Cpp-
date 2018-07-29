#include<iostream>
using namespace std;

int saveThePrisoner(int &n, int &m, int &s)
{                 //     4      6      2
   if(s+(m%n)-1 > n-1)
    return (m%n)-1;
   else
    return s-1+(m%n);
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        int m;
        int s;
        cin >> n >> m >> s;
        int result = saveThePrisoner(n, m, s);
        cout << result << endl;
    }
    return 0;
}
