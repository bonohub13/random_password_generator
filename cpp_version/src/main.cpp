#include "../include/passwdGenerator.hpp"

int main(int argc, char** argv)
{
    // write docstring later...
    std::string docString;
    std::vector<std::string> args;

    docString = "::::::::::::::: Random Number Generator :::::::::::::::\t\nrandompasswordgenerator <options> <length of password>\n\toptions:\n\t-c : add special characters\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";

    if (argc > 1)
    {
        for (uint i=0; i<argc; i++)
            args.push_back(std::string(argv[i]));
    }
    else
        std::cout << docString << std::endl;  

    auto passwdGenerator = passwd::PasswordGenerator(args);
    passwdGenerator.generate_password();
}
