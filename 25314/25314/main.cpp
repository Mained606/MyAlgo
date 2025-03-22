#include <iostream>
int main(){
    int num;
    
    std::cin >> num;

    for(int i = 0; i < num / 4; i++){
        std::cout << "long ";
    }
    std::cout << "int" << "\n";
}
