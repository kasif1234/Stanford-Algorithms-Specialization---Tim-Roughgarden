#include <iostream>
#include <string>
#include <vector>

typedef std::vector<std::pair<std::string, int>> StringIntPairList;

int main()
{
    StringIntPairList data;
    data.emplace_back("apple", 1);
    std::cout << "First element: " << data[0].first << ", " << data[0].second << std::endl;
    return 0;
}