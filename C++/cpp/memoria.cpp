#include <iostream>
#include <cstdlib>  // Para usar a função atoi()

int main(int argc, char* argv[]) {
    // Verifica se o usuário passou o endereço como argumento
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <virtual_address>" << std::endl;
        return 1;
    }

    // Converte o argumento de string para um número inteiro sem sinal (unsigned int)
    unsigned int virtual_address = std::atoi(argv[1]);

    // Define o tamanho da página (4KB = 4096 bytes)
    const unsigned int PAGE_SIZE = 4096;

    // Calcula o número da página e o deslocamento
    unsigned int page_number = virtual_address / PAGE_SIZE;
    unsigned int offset = virtual_address % PAGE_SIZE;

    // Mostra o resultado
    std::cout << "The address " << virtual_address << " contains:" << std::endl;
    std::cout << "Page number = " << page_number << std::endl;
    std::cout << "Offset = " << offset << std::endl;

    return 0;
}
