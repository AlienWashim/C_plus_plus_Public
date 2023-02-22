#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test-- > 0){
        int n;
        cin >> n;
        int c = 0,temp;
        while( n > 0){
            temp = n % 10;
            if(temp == 4){
                c++;
            }
            n = n / 10;
        }
        cout << c << endl;
    }
}
