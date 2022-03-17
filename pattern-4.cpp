#include <iostream>

using namespace std;

int main()
{ 
    int line = 1;
    for(int k = 0; k<= 5; k++){
        for(int l = 0; l<k; l++){
            if(line == 1){
                cout<< "        "; // 8 space
                line = 2;
            }else if(line == 2 && k == line){
                cout<< "      "; // 6 space
                line = 3;
            }else if(line == 3 && k == line){
               cout<< "    "; // 4 space
                line = 4;
            }else if(line == 4 && k == line){
                cout<< "  "; // 2 space
                line = 5;
            }
            cout<<"  * ";
        }
        cout<<endl;
    }

    return 0;
}
