#include <iostream>

using namespace std;

int main()
{ 
    int line = 1;
    for(int i=5; i >=0; i--){
        
        for(int j = 0; j<i; j++){
            if(line == 1){
                line = 2;
            }else if(line == 2 && i == 4){
                cout<< "  "; // 2 space 
                line = 3;
            }else if(line == 3 && i == 3){
                cout<< "    ";// 4 space 
                line = 4;
            }else if(line == 4 && i == 2){
                cout<< "      ";// 6 space 
                line = 5;
            }else if(line == 5 && i == 1){
                cout<< "        "; // 8 space 
                line = 6;
            }
            cout << "  *  ";
        }
        
        cout<<endl;
    }

    return 0;
}