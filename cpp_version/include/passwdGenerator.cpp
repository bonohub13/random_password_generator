#include "passwdGenerator.hpp"

passwd::PasswordGenerator::PasswordGenerator(vector<string> &args)
    : init_chars({'0', 'A', 'a', '@'}), output_password(""), mode(false), exit(false)
{
    uint8_t flag;

    for (auto& arg : args)
    {
        flag = 0;
        for (auto& check : arg)
        {
            if (check < '0' or check > '9')
                flag++;
        }
        if (flag == 0)
            length = atoi(arg.c_str());
        else if (arg == "-c" or arg == "--complex")
            mode = true;
    }
    initialize();
}
passwd::PasswordGenerator::~PasswordGenerator()
{
    if (this->exit)
    {
        delete this;
        std::abort();
    }
}
void passwd::PasswordGenerator::generate_password()
{
    srand((unsigned int)time(NULL));
    while (output_password.size() < length)
        output_password += available_chars[rand()%available_chars.size()];
    
    std::cout << "Generated Password: " << output_password << std::endl;
}
void passwd::PasswordGenerator::initialize()
{
    for (auto& init : init_chars)
    {
        target = (init == '0') ? 10 : (init == 'A' or init == 'a') ? 26 : 0;
        if (target != 0)
        {
            for (current=0; current<target; current++)
            {
                if (target != 0 or mode)
                    available_chars.push_back(init+current);
            }
        }
    }
}