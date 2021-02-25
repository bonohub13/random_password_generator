#include "../include/passwdGenerator.hpp"

int main(int argc, char** argv)
{
    // write docstring later...
    std::string docString;
    std::vector<std::string> args;
    if (argc > 1)
    {
        for (uint i=0; i<argc; i++)
            args.push_back(std::string(argv[i]));
    }
    else
        std::cout << "Documentation here!" << std::endl;  

    auto passwdGenerator = passwd::PasswordGenerator(args);
    passwdGenerator.generate_password();
}