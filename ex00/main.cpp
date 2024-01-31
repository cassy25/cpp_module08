#include "easyfind.hpp"

int main()
{
    std::cout << "------Test 1------" << std::endl;
    std::vector<int> vecteur;
    vecteur.push_back(1);
    vecteur.push_back(3);
    vecteur.push_back(5);
    vecteur.push_back(23);
    vecteur.push_back(6);
    int nb = 5;
    if (easyfind(vecteur, nb) != -1)
        std::cout << "Occurence : " << nb << std::endl;
    else 
        std::cerr << "Occurence not find" << std::endl;

    std::cout << std::endl;
    
    std::cout << "------Test 2------" << std::endl;
     std::vector<int> vecteur2;
    vecteur2.push_back(1);
    vecteur2.push_back(3);
    vecteur2.push_back(5);
    vecteur2.push_back(23);
    vecteur2.push_back(6);
    int nb2 = 4;
    if (easyfind(vecteur2, nb2) != -1)
        std::cout << "Occurence : " << nb2 << std::endl;
    else 
        std::cerr << "Occurence not find" << std::endl;
    return 0;
}
