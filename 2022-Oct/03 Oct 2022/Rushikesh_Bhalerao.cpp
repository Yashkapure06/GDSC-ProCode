#include <iostream>
using namespace std;

int main(){
    char s[100] = { 0 };
    int a[100], b[100] = { 0 };
  
    cin >> s;
  
    for (int i = 0; i < 100; i++){
        a[i] = s[i];
        if (a[i] > 64 && a[i] < 91){
            b[i] = a[i] + 32;
        }
        if (a[i] > 96 && a[i] < 123){
	        b[i] = a[i] - 32;
        }
        s[i] = b[i];
    }
  
    for (int i = 0; i < 100; i++){
        cout << s[i];
    } 
    return 0;
}
