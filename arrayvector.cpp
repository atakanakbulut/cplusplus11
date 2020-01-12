#include <iostream>
#include <vector>
#include <array>
#include <ctime>
#include <algorithm> // binary search and sorting

struct ElectroMagneticFieldStats
{
    int sX;
    int sY;
    int sZ;
    int E;

};

void calculateElectricalField(std::vector<ElectroMagneticFieldStats> &param)
{
    // calculate
}

int main()
{

    std::array<ElectroMagneticFieldStats, 4> Field;
    ElectroMagneticFieldStats type1;
    type1.sX = 13;
    type1.sY = 23;
    type1.sZ = 40;
    Field[0] = type1;

    std::array<int, 10> m_Array = {1,2,3,4,5,6,7,8,9,10};

    for(auto element : m_Array)
        std::cout << "element : " << element << std::endl;
                                                                        // its show at 4
    std::cout << "Array at 4: " << m_Array.at(3) << "array at 5 : " << ++(m_Array.at(3)) << std::endl;
    std::cout << "Array size : " << m_Array.size() << std::endl;

    std::cout << "\nAddress of array : " << &m_Array
              << "\nat(0) address : " << &m_Array.at(0) << std::endl;

    // MIXED INT

    std::array<int, 10> m_MixedArray = {100,12,54,65,54,-6,-47,32348,543,130};

    std::cout << "binary search before sorting " << std::endl;

    bool found = std::binary_search(m_MixedArray.begin(), m_MixedArray.end(), 100);
    std::cout << (found ? "int value exist" : "int value not exist!")<< std::endl;

    std::cout << "binary search after sorting " << std::endl;

    std::sort(m_MixedArray.begin(), m_MixedArray.end());
    for(auto val : m_MixedArray)
        std::cout << "sorted int value is : " << val << std::endl;

    found = std::binary_search(m_MixedArray.begin(), m_MixedArray.end(), 100);
       std::cout << (found ? "int value exist\n\n" : "int value not exist!\n\n")<< std::endl;


    // MIXED STRING
    std::array<std::string, 5> m_StringArray = {"atakan", "bulut", "akbulut", "zzz", "foo" };

    for(auto ss : m_StringArray)
        std::cout << "string before sorting : " << ss << std::endl;

    std::sort(m_StringArray.begin(), m_StringArray.end()); //

    for(std::string ss : m_StringArray)
        std::cout << "string after sorting : " << ss << std::endl;

    bool found1 = std::binary_search(m_StringArray.begin(), m_StringArray.end(), "turk");
    std::cout << (found1 ? "was" : "was not")<< std::endl;

    return 0;
}
