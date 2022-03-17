#include <iostream>

using namespace std;

int main()
{ 
    int line = 1;
    for(int k = 0; k<= 4; k++){
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
    
    for(int i=5; i>= 0; i--){
        for(int j = 0; j<i; j++){
            if(line == 5){
                line=6;
            }else if(line == 6 && i == 4){
                 cout<< "  "; // 2 space
                line=7;
            }else if(line == 7 && i == 3){
                 cout<< "    "; // 4 space
                line=8;
            }else if(line == 8 && i == 2){
                 cout<< "      "; // 6 space
                line=9;
            }else if(line == 9 && i == 1){
                 cout<< "        "; // 8 space
                line=10;
            }
            
            cout<<"  * ";// 2 space from left and 1 space from right
        }
        cout<<endl;
    }

    return 0;
}
