#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

#ifndef ENCRYPTOR_H
#define ENCRYPTOR_H


class Encryptor {
    private:
        std::string plain_text;
        std::string key;
        std::string cipher_text;
		
        std::vector<char>lang = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    public:
        void encrypt_data();

        std::string get_cipher_text();

        Encryptor(std::string, std::string);
};

#endif