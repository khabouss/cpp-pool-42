#include "Replace.hpp"

int replace(char **argv)
{
     std::string fileName = argv[1];
    std::string str1 = argv[2];
    std::string str2 = argv[3];

    if (fileName.empty() || str1.empty() || str2.empty())
    {
        std::cout << "Empty Parameters" << std::endl;
        return 0;
    }

    std::string line;
    std::string content = "";

    std::ifstream file(fileName);

    if (!file.is_open())
    {
        std::cout << "Error while trying to open file \"" << fileName << "\"" << std::endl;
        return 0;
    }
    while (getline(file, line))
    {
        content += line;
        content += "\n";
    }
    file.close();
    content.erase(content.length() - 1);

    for (size_t i = 0; i < content.length(); i++)
    {
        if (content.compare(i, str1.length(), str1) == 0)
        {
            content.erase(i, str1.length());
            content.insert(i, str2);
        }
    }
    std::ofstream outFile;
    std::string outFileName = fileName + ".replace";
    outFile.open(outFileName);
    if (!outFile.is_open())
    {
        std::cout << "Error while trying to open output File \"" << outFileName << "\"" << std::endl;
        return 0;
    }
    outFile << content << std::endl;
    outFile.close();
    return 1;
}

int main(int argc, char **argv)
{
    if (argc == 4)
        return replace(argv);
    std::cout << "Invalid Parameters" << std::endl;
    return 0;
}