#include <iostream>
#include <fstream>
#include "Support_functions.h"

void split_test()
{
    //arrange
    std::vector<std::string>  vec_test1{ "Hello", "World", "I", "am", "programmer" };
    auto str_test1 = "Hello World I am programmer";
    
    //act
    auto temp = split(str_test1, " ");
    
    //assert
    if (temp == vec_test1)
        std::cout << "Split is OK\n";
    else 
        std::cout << "Split is ERROR\n";
}

void connect_str_test()
{
    //arrange
    std::vector<std::string>  vec_test2{ "I'm", "doing", "tests", "for", "the", "first", "time.", "I", "have", "a", "slight", "panic." };
    auto str_test2 = "I'm doing tests for the first time. I have a slight panic.";
    
    //act
    auto temp = connect_str(vec_test2, " ");
    
    //assert
    if (temp == str_test2)
        std::cout << "Connect_str is OK\n";
    else 
        std::cout << "Connect_str is ERROR\n";
}

void string_compare_test() 
{
    //arrange
    auto str1 = "hello, World.";
    auto str2 = "HELLO, wORLDp";

    //act
    auto temp = string_compare(str1, str2);

    //assert
    if (temp)
        std::cout << "String_compare is OK\n";
    else
        std::cout << "String_compare is ERROR\n";
}

void sort_words_test()
{
    //arrange
    std::vector<std::string> vec_befor_sort = { "A", "a", "B", "Z", "G", "X", "A", "B", "W", "Y", "g", "a", "s", "O" };
    std::vector<std::string> vec_test4 = { "A", "a", "A", "a", "B", "B", "G", "g", "O", "s", "W", "X", "Y", "Z" };

    //act
    sort_words(vec_befor_sort);

    //assert
    if (vec_befor_sort == vec_test4)
        std::cout << "Sort_words is OK\n";
    else
        std::cout << "Sort_words is ERROR\n";
}

int main()
{
    split_test();
    connect_str_test();
    string_compare_test();
    sort_words_test();
    //Рабочая программа
    /*setlocale(LC_ALL, "ru");
    std::ifstream file_out;
    std::ofstream file_in;
    std::string line;
    std::string line_for_delete;
    std::string answer3;
    std::vector<std::string> for_sort;
    file_out.open("auto_test.txt");
    std::cout << "Какой файл вы хотите открыть для чтения: ";
    getline(file_out, line);
    std::cout << line << "\n";
    std::cout << "Какое слово хотите удалить: ";
    getline(file_out, line_for_delete);
    std::cout << line_for_delete << "\n";
    std::cout << "В какой файл вы хотите записать изменённые строки: ";
    getline(file_out, answer3);
    std::cout << answer3 << "\n";
    file_out.close();
    file_in.open(answer3);
    file_out.open(line);
    if (file_out.is_open() && file_in.is_open())
    {
        while (getline(file_out, line))
        {
            for_sort = split(line, " ");
            sort_words(for_sort);
            auto temp = std::lower_bound(for_sort.begin(), for_sort.end(), line_for_delete, &string_compare);
            auto temp2 = std::upper_bound(for_sort.begin(), for_sort.end(), line_for_delete, &string_compare);
            for_sort.erase(temp, temp2);
            line = connect_str(for_sort, " ");
            file_in << line + "\n";
        }
    }
    else
    {
        std::cout << "Error!!! File not open\n";
    }
    file_out.close();
    file_in.close();*/
    return 0;
}

