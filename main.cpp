#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include "diffWays.hpp"

int main()
{
    // INIT vector with random values
    std::vector<std::size_t> randomVector = {1, 2};
    /*auto limitRand = [](int &number) { number = number % 100; };
    std::generate(randomVector.begin(), randomVector.end(), rand);
    std::for_each(randomVector.begin(), randomVector.end(), limitRand);
    const std::vector<int> test = randomVector;

    randomVector[1] *= -1;
    randomVector[3] *= -1;
    randomVector[6] *= -1;*/
    for (int value : randomVector)
    {
        std::cout << value << std::endl;
    }
    std::cout << "--------------" << std::endl;
    std::cout << "number of ways for staire 2 : " << diffways(2, randomVector) << std::endl;
    std::cout << "number of ways for staire 3 : " << diffways(3, randomVector) << std::endl;
    std::cout << "number of ways for staire 5 : " << diffways(5, randomVector) << std::endl;
    std::cout << "number of ways for staire 6 : " << diffways(6, randomVector) << std::endl;
    std::cout << "number of ways for staire 25 : " << diffways(25, randomVector) << std::endl;
    
    return 0;
}
