
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test-- > 0){
        int a,b;
        cin >> a >> b;
        int c = 0,sum = a + b,temp;
        while( sum > 0){
            temp = sum % 10;
            switch(temp){
            case 0:
                c += 6;
                break;
            case 1:
                c += 2;
                break;
            case 2:
                c += 5;
                break;
            case 3:
                c += 5;
                break;
            case 4:
                c += 4;
                break;
            case 5:
                c += 5;
                break;
            case 6:
                c += 6;
                break;
            case 7:
                c += 3;
                break;
            case 8:
                c += 7;
                break;
            case 9:
                c += 6;
                break;
            default:
                c += 0;
                break;
            }
            sum = sum / 10;
        }
        cout << c << endl;
    }
    return 0;
}
