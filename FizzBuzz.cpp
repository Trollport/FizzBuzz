/*FizzBuzz in C++ */
#include <iostream>

using namespace std;

int n = 1;

int main(){
    while(n < 100){
        if(n % 3 == 0 && n % 5 == 0){
            std::cout << "FizzBuzz" << std::endl;
        }else{
            if (n % 3 == 0){
                std::cout << "Fizz" << std::endl;
            }else{
                if (n % 5 == 0){
                    std::cout << "Buzz" << std::endl;
                }else{
                    std::cout << n << std::endl;
                }
            }
        }
        n++;
    }

}