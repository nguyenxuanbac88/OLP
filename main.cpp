#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int nA, nB, k, m;
    cin >> nA >> nB;
    cin >> k >> m;
    vector<int> a(nA);
    vector<int> b(nB);
    for(int i = 0; i < nA; i++){
        cin >> a[i];
    }
    for(int i = 0; i < nB; i++){
        cin >> b[i];
    }
    if(a[k] < b[b.size()-m]) {
        cout<< "YES";
    }
    else
        cout<< "NO";
    return 0;
}
