


#include <iostream>

using namespace std;


//123
//456
//789
int main(){
    int N,k=1;
    cout<<"Enter square edge length : ";

    cin>>N;

    for(int i=0;i<N;i++){//row
        for (int j = 0; j < N; j++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<"\n";
    }

}