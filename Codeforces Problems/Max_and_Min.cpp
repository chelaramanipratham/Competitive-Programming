#include<iostream>
using namespace std;
 
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int min = a;
    int max = a;
    
    if(min > b)
        min = b;
    
    if(min > c)
        min = c;
 
    
    if(max < b)
        max = b;
    
    if(max < c)
        max = c;
 
    cout << min << " " << max << endl;
 
    return 0; 
}