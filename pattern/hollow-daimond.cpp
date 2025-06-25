//barfi problem
#include <iostream>
using namespace std;

/*
n=3
           space    inside-space
  *         2          0
 * *        1          1
*   * ----- 0 -------- 3 ---------------------
 * *        1          1
  *         2          0

*/


int main(){
    int N,k=1;
    cout<<"Enter square edge length : ";

    cin>>N;

    //top part
    for(int i=0;i<N;i++){//space1
        for (int j = 0; j < N-i-1; j++)
        {
            cout<<" ";

        }
        cout<<"*";

        if (i!=0)
        {
            for (int j = 0; j < 2*i-1; j++) //inside space
            {
                cout<<" ";
    
            }
            cout<<"*";
      
        }
        cout<<"\n";


    }

    //bottom
     for(int i=0;i<N-1;i++){//space1
        for (int j = 0; j < i+1; j++)
        {
            cout<<" ";

        }
        cout<<"*";

        if (i!=N-2)
        {
            for (int j = 0; j < N-2*i-1; j++) //inside space
            {
                cout<<" ";
    
            }
            cout<<"*";
      
        }
        cout<<"\n";


    }

}