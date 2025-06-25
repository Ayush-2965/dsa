

#include <iostream>

using namespace std;

/*
1st type

*
**
*** 
****

2nd type

1
22
333
4444

*/
int main(){
    int N,k=1;
    cout<<"Enter square edge length : ";

    cin>>N;

    // for(int i=0;i<N;i++){//row
    //     for (int j = 0; j <= i; j++)
    //     {
    //         // cout<<"*"<<" "; //1st
    //         // cout<<i+1;    //2nd
    //         cout<<j+1;     //3rd
    //     }
    //     cout<<"\n";
    // }


    
    //   for(int i=0;i<N;i++){//row
    //     for (int j = i+1; j >0; j--)
    //     {
    //         cout<<j;     //4th
    //     }
    //     cout<<"\n";
    // }



    //   for(int i=0;i<N;i++){//row
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout<<k<<" ";     //5th
    //         k++;
    //     }
    //     cout<<"\n";
    // }


    //6th inverted trianlge

      for(int i=0;i<N;i++){//row

        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        for (int j = N; j > i; j--)
        {
            cout<<i+1;
        }
        cout<<"\n";
    }

}