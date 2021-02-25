#ifndef __PASSWORDGENERATOR_HPP__
#define __PASSWORDGENERATOR_HPP__

#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <ctime>

namespace passwd
{
    // "using namespace std;" within the namespace to prevent namespace pollution
    using namespace std;
	class PasswordGenerator
	{
	public:
	    PasswordGenerator(vector<string> &args);
	    ~PasswordGenerator();
	private: // instances
		vector<char> available_chars;
		array<char, 4> init_chars;
		string output_password;
		uint length;
		bool mode;
		bool exit;
		// "target" and "current" used in for loops
		uint target;
		uint current;
	public: // functions
		void generate_password();
	private:
		void initialize();
	};
}

#endif