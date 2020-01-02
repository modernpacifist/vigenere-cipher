#include "input_data.h"
#include "encrypt_data.h"
#include "decrypt_data.h"
#include <iostream>
#include <vector>
#include <string>


int main () {
    std::vector<char> english_language = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 
                                          'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    //std::vector<char> *_ptr_english_language = &english_language;
    std::vector<char> *_ptr_english_language = &english_language;
	
    std::cout << "English is operatable" << std::endl;
    std::cout << "Available modes: -e | -d" << std::endl;
    std::string chosen_mode = recurcive_mode_input();
	
    std::string(*_ptr_data_input)(std::string);
    _ptr_data_input = &data_input;
	
    if (chosen_mode == "encrypting") {
        std::string imposed_key = (*_ptr_data_input)("Input key:");

        std::string imposed_message = (*_ptr_data_input)("Input your message:"); 
		
        encrypting_algorithm(imposed_key, imposed_message, english_language);

        return EXIT_SUCCESS;
    } else if (chosen_mode == "decrypting") {
        std::string imposed_key = (*_ptr_data_input)("Input key:");
        
        std::string imposed_message = (*_ptr_data_input)("Input your message:"); 

        decrypting_algorithm(imposed_key, imposed_message, *_ptr_english_language);

        return EXIT_SUCCESS;
    }

}

