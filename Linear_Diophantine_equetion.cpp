#include<iostream>
using namespace std;
int gcd(int a,int b, int & x, int & y){
    if(b==0){
        int x = 1;
        int y = 0;
        return a;
    }
    int x1,y1;
    int res = gcd(b,a%b,x1,y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return res;
}

int main(){
    int a,b,c,x,y,t;
    int x1,y1;
    int gcd1 = gcd(a,b,x,y);
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        if(c % gcd1){
            cout<<"x1 and y1 can't be found";
        }
        else{
            x1 = x * (c / gcd1);
            y1 = y * (c / gcd1);
            cout<<x<<y<<endl;
        }
    }
    return 0;
}