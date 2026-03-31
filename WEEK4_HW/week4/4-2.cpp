// 4-2

#include <iostream>
#include<iomanip>

using namespace std;

int main(void) {
    
       
        cout << setw(10) << "°ª(n)" << setw(15) << "Á¦°ö(n^2)" << endl;
        cout << "------------------------------------------" << endl;

        
        for (int i = 1; i <= 100; ++i) {
           
            cout << setw(10) << i << setw(15) << i * i << endl;
        }

        return 0;
    
}