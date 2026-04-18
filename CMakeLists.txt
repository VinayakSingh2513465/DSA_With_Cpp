cmake_minimum_required(VERSION 4.0)
project(c__)

set(CMAKE_CXX_STANDARD 20)

add_executable(c__ main.cpp
        "recursion/basic recursion/factorial.cpp"
        "recursion/basic recursion/decreasingOrder.cpp"
        "linked list/popBackLL_AND_reverse.cpp"
        "linked list/LL_implementation.cpp"
        "recursion/basic recursion/function.cpp"
        "recursion/basic recursion/sumOfN_NaturalNumbers.cpp"
        "arrays 2/buy and sell stocks/buy_sell_stock.cpp"
        "recursion/basic recursion/fibonacciRucursive.cpp"
        "recursion/basic recursion/fibonacciRucursive.h"
        recursion/array/sortedArray.cpp
        recursion/vector/firstOccurence.cpp
        recursion/vector/lastOccurence.cpp
        "recursion/power function/powerFunction.cpp"
        "recursion/recursion question/tiling.cpp"
        "recursion/recursion question/duplicateString.cpp"
        queue/queue_LL.cpp
        queue/Circular_Queue.cpp)
