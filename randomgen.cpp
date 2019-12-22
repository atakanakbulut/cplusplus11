#include <iostream>
#include <iomanip>
#include <random>
#include <ctime>

int main()
{
    std::default_random_engine engine(static_cast<unsigned int>(time(0)));
    std::uniform_int_distribution<unsigned int> randomInt(1, 6);

    for(unsigned int counter = 0; counter <= 10; counter++) 
        std::cout << std::setw(10) << randomInt(engine) << std::endl;
    
    return 0;
}
