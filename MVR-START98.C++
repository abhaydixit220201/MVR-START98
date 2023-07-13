#include <iostream>
using namespace std;

int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int s= ((a*2)+b);
    int p=((c*2)+d);
    if(s>p){
        cout<<"messi"<<endl;
    }else if(p>s){
        cout<<"ronaldo"<<endl;
    }else{
        cout<<"equal"<<endl;
    }
	// your code goes here
	return 0;
}
