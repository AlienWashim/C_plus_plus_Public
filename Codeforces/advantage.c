#include<stdio.h>
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
    int testcase = sc.nextInt();
        for (int t = 0; t < testcase; t++) {
            int len = sc.nextInt();
            int arr[] = new int[len];
            for (int i = 0; i < len; i++) {
                arr[i] = sc.nextInt();
            }

            for (int i = 0; i < len; i++) {
                int max_pos = max_finder(arr, i, len);
                System.out.print(arr[i] - arr[max_pos] + " ");
            }
            System.out.println();
        }
}
