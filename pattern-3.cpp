#include <iostream>

using namespace std;

int main()
{ 
    for(int k = 0; k<= 5; k++){
        for(int l = 0; l<k; l++){
            cout<<" * ";
        }
        cout<<endl;
    }

    return 0;
}