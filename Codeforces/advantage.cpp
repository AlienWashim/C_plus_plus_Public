#include<bits/stdc++.h>
using namespace std;
int max_finder(int arr[], int k, int len) {
        int max = 0;
        int max_pos = 0;
        for (int i = 0; i < len; i++) {
            if (i != k) {
                if (max < arr[i]) {
                    max = arr[i];
                    max_pos = i;
                }
            }
        }
        return max_pos;
    }
int main(){
    int testcase;
    cin >> testcase;
        for (int t = 0; t < testcase; t++) {
            int len;
            cin >> len;
            int arr[len];
            for (int i = 0; i < len; i++) {
                int temp;
                cin >> temp;
                arr[i] = temp;
            }

            for (int i = 0; i < len; i++) {
                int max_pos = max_finder(arr, i, len);
                printf("%d ",arr[i] - arr[max_pos]);
            }
            cout << endl;
        }
}
