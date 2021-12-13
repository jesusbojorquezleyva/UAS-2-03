#include <charconv>//std::from_chars
#include <iostream>
#include <optional>
#include <string>
#include <string_view>

std::optional<int> extractAge(std::string_view age)
{
    int result{};
    auto end{age.data()+age.length()};
    if (std::from_chars(ager.data(),end,result).ptr !=end)
    {
        return {};
    }
    if(result <= 0)
    {
        return {};
    }
    return result;
}
int main()
{
    int age{};
    while (true)
    {
        std::cout<<"Ingresa tu edad: ";
        std::string strAge{};
        std::cin>>strAge;

        if (auto extracted{extractAge(strAge)})
        {
            age= *extracted;
            break;
        }
    }
    std::cout<<"Ingresaste: "<<age<<'\n';
}