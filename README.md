# Random Number Generator

## How to use
- [build]
1. Clone this repository with
    - ```git clone https://github.com/bonohub13/random_number_generator.git```
2. Enter directory to build by
    - ```cd random_number_generator/cpp_version/build/```
3. Build by
    - ```cmake .. && make```
- [utilize]
    - To make a simple password only with numbers and alphabets
        - ```./random_number_generator \<desired length of password\>```
    - To make a complex password with special characters (ex: such as !, @)
        - ```./random_number_generator -c \<desired length of password\>```<br/>
        or
        - ```./random_number_generator --complex \<desired length of password\>```