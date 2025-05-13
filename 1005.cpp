#include <iostream>
#include <iomanip>
 
int main() {
 
 double a;
 double b;
 double MEDIA;
 
std::cin >> a;
std::cin >> b;
 
 MEDIA = (a * 3.5 + b * 7.5) /(3.5 + 7.5);
 
 std::cout <<"MEDIA = " << std::fixed << std::setprecision(5) << MEDIA << std::endl;
 
    return 0;
}