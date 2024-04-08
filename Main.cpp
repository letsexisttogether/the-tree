#include <iostream>
#include <cstdlib>
#include <string>

void PrintTree(const std::uint16_t rowsCount,
    const char treeSymbol) noexcept;

int32_t main(std::int32_t argc, char** argv)
{
    if (argc < 2)
    {
        std::cerr << "The arguments amount " <<
            "does not match the program's need" << std::endl;
        
        return EXIT_FAILURE;
    }

    const std::uint32_t rows = std::atoi(argv[1]);

    PrintTree(std::stoi(argv[1]), '*');


    return EXIT_SUCCESS;
}

void PrintTree(const std::uint16_t rowsCount, 
    const char treeSymbol) noexcept
{
    const std::uint16_t startCount = 1;
    const std::uint16_t incrementor = 2;
    const std::uint16_t generalCount = 
        startCount + incrementor * (rowsCount - 1);

    for (std::uint16_t i = startCount; i <= generalCount; i += incrementor)
    {
        std::string spaces((generalCount - i) / 2, ' ');

        std::cout << spaces;
        
        std::cout << std::string(i, treeSymbol);

        std::cout << spaces << '\n';
    }

    std::cout << std::endl;
}
