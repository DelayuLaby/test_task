#include "Support_functions.h"


std::vector<std::string> split(const std::string& string_for_split, const std::string& symbol)
{
    std::vector<std::string> temp;
    size_t next_position;
    size_t this_position = 0;
    auto i = 0;
    auto _first_it = string_for_split.begin();
    auto symbol_size = symbol.size();
    while ((next_position = string_for_split.find(symbol, this_position)) != std::string::npos)
    {
        temp.emplace_back(string_for_split.substr(this_position, next_position - this_position));
        i++;
        this_position = next_position + 1;
    }
    temp.emplace_back(string_for_split.substr(this_position, string_for_split.size() - this_position));
    return temp;
}


std::string connect_str(std::vector<std::string>& obj, const std::string& symbol)
{
    std::string temp = "";
    for (auto& i : obj)
    {
        temp += i + symbol;
    }
    temp.erase(temp.end() - 1);
    return temp;
}

bool string_compare(const std::string& a, const std::string& b)
{
    auto temp_a = a;
    auto temp_b = b;
    std::transform(temp_a.begin(), temp_a.end(), temp_a.begin(), ::toupper);
    std::transform(temp_b.begin(), temp_b.end(), temp_b.begin(), ::toupper);
    return temp_a < temp_b;
}

void sort_words(std::vector<std::string>& obj)
{
    std::sort(obj.begin(), obj.end(), &string_compare);
}