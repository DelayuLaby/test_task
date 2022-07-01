#pragma once
#include <string>
#include <vector>
#include <algorithm>

std::vector<std::string> split(const std::string& string_for_split, const std::string& symbol);

std::string connect_str(std::vector<std::string>& obj, const std::string& symbol);

bool string_compare(const std::string& a, const std::string& b);

void sort_words(std::vector<std::string>& obj);