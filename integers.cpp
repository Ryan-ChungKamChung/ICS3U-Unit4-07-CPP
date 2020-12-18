// Copyright (c) 2020 Ryan Chung Kam Chung All rights reserved
//
// Created by Ryan Chung Kam Chung
// Created in December 2020
// Program prints integers in the range of 1000 and 2000

#include <iostream>


main() {
    // Function prints integers in the range of 1000 and 2000
    int loop_counter;

    std::cout << "The integers in the range of 1000 and 2000 are: "
    << std::endl;

    // Process and output
    for (loop_counter = 1000; loop_counter < 2000 + 1; loop_counter++) {
        std::cout << loop_counter << " ";

        if (loop_counter % 5 == 4) {
            std::cout << "" << std::endl;
        }
    }
}
