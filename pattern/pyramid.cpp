// divide patttern into two part
/*
  1| 
 12|1
123|21

*/

#include <iostream>

using namespace std;


int main(){
    int N,k=1;
    cout<<"Enter square edge length : ";

    cin>>N;

    for(int i=0;i<N;i++){//row
        for (int j = N-1; j > i; j--)
        {
            cout<<" ";
        }
        for (int j = 0; j <i+1; j++)
        {
            cout<<j+1;
        }
        for (int j = 0; j <i; j++)
        {
            cout<<j+1;
        }
        cout<<"\n";
    }
    // for(int i=0;i<N;i++){//row
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int j = 0; j <N-i; j++)
    //     {
    //         cout<<j+1;
    //     }
    //     for (int j = 0; j <N-1-i; j++)
    //     {
    //         cout<<j+1;
    //     }
    //     cout<<"\n";
    // }

    for(int i=0;i<N-1;i++){//row
        for (int j = 0; j < i+1; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j <N-i-1; j++)
        {
            cout<<j+1;
        }
        for (int j = 0; j <N-i-2; j++)
        {
            cout<<j+1;
        }
        cout<<"\n";
    }

}