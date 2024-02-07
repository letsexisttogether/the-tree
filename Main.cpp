#include <cstdlib>
#include <iostream>

void PrintTree(const std::uint32_t branchesCount, 
    const std::uint32_t rows)
{
    const std::uint32_t spaces = rows - branchesCount;
    const std::uint32_t realSpaces = spaces / 2;

    const std::string spacesBefore(realSpaces, ' ');

    const std::string tree(branchesCount, '*');

    const std::string spacesAfter{ spacesBefore };

    std::cout << spacesBefore << tree << spacesAfter << '\n';
}

int32_t main(std::int32_t argc, char** argv)
{
    if (argc < 2)
    {
        std::cerr << "The arguments amount " <<
            "does not match the program's need" << std::endl;
        
        return EXIT_FAILURE;
    }

    const std::uint32_t rows = std::atoi(argv[1]);

    for (std::uint32_t i = 1; i <= rows; i += 2)
    {
        PrintTree(i, rows); 
    }


    if (!(rows % 2))
    {
        PrintTree(rows, rows); 
    }

    return EXIT_SUCCESS;
}
