// Algorithms - Partial Sum
// partial_sum.cpp
// source: https://ict.senecacollege.ca/~oop345/pages/content/algor.html

// OutputIterator partial_sum(InputIterator f1, InputIterator l1, OutputIterator partialSum)
// calculate the partial sums for vector vand store them in vector partialSum.

// OutputIterator partial_sum(InputIterator f1, InputIterator l1, OutputIterator partialSum, Fn boper)
// calculate the partial expressions for vector v using binary operation boperand store them in vector partialSum

// This program calculates the partial sums of the elements in vector v,
// displays them, then calculates their partial products and displays them.


#include <iostream>
#include <vector>
#include <functional>
#include <numeric>

int main() {
    std::vector<int> v = { 1, 2, 3, 4 }, p(4);

    std::partial_sum(v.begin(), v.end(), p.begin());
    for (auto i : p)
        std::cout << i << std::endl;
    std::partial_sum(v.begin(), v.end(), p.begin(),
        std::multiplies<int>());
    for (auto i : p)
        std::cout << i << std::endl;
}