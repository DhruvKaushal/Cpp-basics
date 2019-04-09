#include <iostream>
using namespace std;

int main() {

    int x,y;
    cin>>x>>y;
        int count=0;
        int n=0;
        while(n<=32)
        {
            if((y&1) != (x&1))
            {
                cout<<"YES"<<n<<" "<<endl;
                count++;
            }
            x=x>>1;
            y=y>>1;
            n++;
        }
        cout<<count;

	return 0;
}
