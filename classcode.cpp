#include <iostream>
using namespace std;
int main() {
    clock_t start, end;
    start = clock();
 
    // char xyz = '22BCS15309'; 
    cout<<"NAME"<<"              UID"<<"              SECTION"; 
    
    char data[30][30] = {"\nJATIN","          22BCS15309","          803-A"};
    
     int size = sizeof(data);
     for (int i = 0; i < 4; i++){
      std::cout << data[i] ;
     }
    
    end = clock();
 
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "\n\nTime taken by program is : "<< time_taken ;
    cout << " sec " << endl;
    return 0;
}
