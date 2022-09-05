#include <iostream>

#include "intersection.h"

void ComputeIntersection(const std::vector<Docids> &word_one,
        const std::vector<Docids> &word_two,
        std::vector<Docids>* result)
{
    Docids word_one_size = word_one.size();
    Docids word_two_size = word_two.size();
      const unsigned int * p1 = word_one.data();
            const unsigned int * p2 = word_two.data();
    long i = 0, j = 0;

    while( (i < word_one_size) && (j < word_two_size) )
    {
        if (p1[i] < p2[j]) {
            i++;
        } else if (p2[j] < p1[i]) {
            j++;
        } else {
            result->emplace_back(p1[i]);
            i++;
            j++;
        }
    } 
}
