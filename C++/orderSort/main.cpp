#include <iostream>
#include <vector>
#include <bits/stdc++.h>

int filledOrders(std::vector<int> order, int k) {
    
    std::sort(order.begin(), order.end());

    std::vector<int> fullOrders;
    auto newSum = accumulate(fullOrders.begin(), fullOrders.end(), 0);
    auto sum = accumulate(order.begin(), order.end(), 0);
    
    for (auto i = order.begin(); i != order.end(); ++i) {
        std::cout << *i << std::endl;
    }
    
    std::cout << k << std::endl;
    
    if (sum > k) {
        for (auto i = order.begin(); i != order.end(); i++) {
            k -= *i;

            if (k > newSum) {
                fullOrders.push_back(*i);

                newSum = accumulate(fullOrders.begin(), fullOrders.end(), 0);

                std::sort(fullOrders.begin(), fullOrders.end());

                if (fullOrders.size() == order.size()) {
                    std::cout << order.size() << std::endl;
                }           
            }

            if (k < newSum) {
                fullOrders.push_back(*i);

                newSum = accumulate(fullOrders.begin(), fullOrders.end(), 0);

                std::sort(fullOrders.begin(), fullOrders.end());

                std::cout << fullOrders.size() << std::endl;
                break;
            }   
        }
    } else if (sum <= k) { std::cout << order.size() << std::endl; }
}

int main() {
    filledOrders( {10, 30, 20, 5}, 30 );

    return 0;
}