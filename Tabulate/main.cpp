/**============================================================================
Name        : main.cpp
Created on  : 15.09.2021
Author      : Tokmakov Andrey
Version     : 1.0
Copyright   : Your copyright notice
Description : Tabulate tests
============================================================================**/

#include <iostream>
#include <vector>
#include <string_view>

#include <tabulate/table.hpp>
#include <iostream>

int main([[maybe_unused]] const int argc,
         [[maybe_unused]] char** argv)
{
    const std::vector<std::string_view> args(argv + 1, argv + argc);

    using namespace tabulate;

    Table table;
    table.add_row({"Price", "Quantity"});
    table.add_row({"101.25", "0.55"});
    table.add_row({"101.20", "1.20"});

    table.format()
        .font_style({FontStyle::bold})
        .border_color(Color::yellow);

    table[1].format().font_color(Color::green);
    table[2].format().font_color(Color::red);

    std::cout << table << "\n";

    return EXIT_SUCCESS;
}
