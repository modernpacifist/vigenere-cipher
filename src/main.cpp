#include "encrypt_data.h"
#include "decrypt_data.h"
#include <iostream>
#include <vector>
#include <string>
#include <array>


// TODO: function to parse command line arguments
// std::array<char, 3> parse_command_line_args(int argc, char argv[]) {
//     if (argc == 3) {
//         // std::array<char, 3> a1 = {argv[0], argv[1], argv[2]};
//         return {argv[0], argv[1], argv[2]};
//     } else {
//         std::cout << "usage <script> <message> <key>" << std::endl;
//         std::cout << "type -h for help and usage examples" << std::endl;
//         std::exit(EXIT_FAILURE);
//     }
// }


const std::vector<char>english_alphabet = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 
	'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};


int main(int argc, char *argv[]) {
    if (argc != 3) {
        std::cout << "usage <script> <message> <key>" << std::endl;
        std::exit(EXIT_FAILURE);
    }


    for (int i = 0; i < argc; i++) {
        std::cout << argv[i] << std::endl;
    }

    std::string plain_text = "fuckyou";
    std::string key = "key";

	Encryptor encryptor(plain_text, key, english_alphabet);
	encryptor.encrypt();

	std::exit(EXIT_SUCCESS);

}


// int main (int argc, char *argv[]) {
//     if (argc != 4) {
//         cout << "usage <script> <mode> <key> <message>" << endl;
//         cout << "type -h for help and usage examples" << endl;
//         return 1;
//     }

    // vector<char> english_alphabet = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
    //                                  'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    // vector<char> *_ptr_english_language = &english_alphabet;

//     string chosen_mode = argv[1];

//     string(*_ptr_data_input)(string);
//     _ptr_data_input = &data_input;

//     if (chosen_mode == "encrypting") {
//         string imposed_key = (*_ptr_data_input)("Input key:");

//         string imposed_message = (*_ptr_data_input)("Input your message:");

//         encrypting_algorithm(imposed_key, imposed_message, english_alphabet);

//         return EXIT_SUCCESS;
//     } else if (chosen_mode == "decrypting") {
//         string imposed_key = (*_ptr_data_input)("Input key:");

//         string imposed_message = (*_ptr_data_input)("Input your message:");

//         decrypting_algorithm(imposed_key, imposed_message, *_ptr_english_language);

//         return EXIT_SUCCESS;
//     }

// }
