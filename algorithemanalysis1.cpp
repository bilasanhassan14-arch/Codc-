#include <iostream> 
using namespace std ;
long long ops = 0 ; 
long long sumtoiter(int n) {
    long long total = 0;
    for(int i = 1;i <= n;i++){
        total = total + i;
        ops ++;
    }
    return total;
}
long long sumtorec(int n ){
    if(n == 0) return 0;
    ops++;
    return n + sumtorec(n-1 );
}
int main () {
int n ;
 cout << "inter n ";
cin >> n ;
ops =0;
long long s1 = sumtoiter(n);
cout <<"iterative: sum = " << s1 << ", addition = " << ops << endl;

ops=0;
long long s2 =sumtorec(n);
cout << "recasive;" << s2 << " ,addition"<<endl;
return 0; 
}