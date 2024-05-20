#include <iostream>
#include <regex>

int main() {
    std::string input = "Hdjsh asd2324234jghjsd hjsdg sdhk 12212021 idf32432 32423 d34234jh dfh";

    // Regular expression pattern for MMDDYYYY format
    std::regex date_regex("\\b(0[1-9]|1[0-2])(0[1-9]|[12][0-9]|3[01])(19|20)\\d\\d\\b");

    // Iterator to store the matches
    std::sregex_iterator it(input.begin(), input.end(), date_regex);
    std::sregex_iterator end;

    std::cout << "Valid dates found in the string:\n";
    while (it != end) {
        std::smatch match = *it;
        std::cout << match.str() << std::endl;
        ++it;
    }

    return 0;
}
