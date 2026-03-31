// 4-3

#include <iostream>
#include <iomanip>
#include <string> 

using namespace std;

int main() {
    int limit = 1000; 

   
    int col1_width = to_string(limit).length() + 2;      
    int col2_width = to_string(limit * limit).length() + 2; 

   
    cout << setw(col1_width) << "n" << setw(col2_width) << "n^2" << endl;
    cout << string(col1_width + col2_width, '-') << endl;

  
    for (int i = 1; i <= limit; ++i) {
        
        cout << setw(col1_width) << i << setw(col2_width) << i * i << endl;
    }

    return 0;
}