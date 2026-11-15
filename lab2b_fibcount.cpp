#include <iostream>
#include <chrono>
using namespace std ;
using namespace std :: chrono ;
long long calls;
long long fib(int n){
    calls++;
    if(n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}
int main() {
int n;
cout << "enter n " << endl;
cin >> n ;
int calls;
 auto start =steady_clock ::now();
  long long result =fib(n) ;
 auto stop =steady_clock :: now();
auto ms=__duration_cast<milliseconds>(stop - start) .count(); 
cout << " result = "<< result << " calls = " << calls << " time =" << ms ;

    return 0;
}