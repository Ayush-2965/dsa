
#include <iostream>

using namespace std;

/*

*              *
**            **
***          ***
****        ****
*****      *****
******    ******
*******  *******
****************
****************
*******  *******
******    ******
*****      *****
****        ****
***          ***
**            **
*              *

*/
int main(){
    int N,k=1;
    cout<<"Enter square edge length : ";

    cin>>N;

    //upper part
    for(int i=0;i<N;i++){
        //left triangle
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        //mid spaces
        if (i!=N)
        {
            for (int j = 0; j < (2*N)-(2*i)-2; j++) //imp line  2i --> each line row 2 space decrease
                                                            //2N-2 --> number of spaces in top line
                                                            // 2N ---> full width of line
            {
                cout<<" ";
    
            }
           
        }
        //right triangle
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        
        cout<<"\n";
    }


    //bottom part
    for(int i=0;i<N;i++){
         for(int j=0;j<N-i;j++){
            cout<<"*";
        }
        if(i!=0){
            for (int j = 0; j < 2*i; j++)
            {
                cout<<" ";
    
            }
        }

         for(int j=0;j<N-i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }

}