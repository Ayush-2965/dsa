// square pattern

// 1234 row1
// 1234  .2
// 1234  .3
// 1234  .4

#include <iostream>

using namespace std;

int main(){
    int N;
    cout<<"Enter square edge length : ";

    cin>>N;

    for(int i=1;i<=N;i++){//row
        for (int j = 1; j <= N; j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }

}

//output

// Enter square edge length
// 4
// 1 2 3 4 
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4