#include <iostream>
#include<vector>

// int get_fibonacci_last_digit_naive(int n) {
//     if (n <= 1)
//         return n;

//     int previous = 0;
//     int current  = 1;

//     for (int i = 0; i < n - 1; ++i) {
//         int tmp_previous = previous;
//         previous = current;
//         current = tmp_previous + current;
//     }

//     return current % 10;
// }

int get_fibonacci_last_digit_fast(int n){
    if(n<=1)
        return n;
    
    int a[n];
    a[0]=0;
    a[1]=1;
    for(int i=2; i<=n;i++){
        a[i]=(a[i-1]+a[i-2])%10;
    }
    return a[n];
}

int main() {
    int n;
    std::cin >> n;
    int c = get_fibonacci_last_digit_fast(n);
    std::cout << c << '\n';
    }
