#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "Element en haut de la pile : " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "Taille de la pile apres suppression du premier element : " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    std::cout << std::endl;
    std::cout << "Affichage du contenu de la pile :" << std::endl;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);

    /*std::cout << "Test avec std::list" << std::endl << std::endl;
    MutantStack<int> mstack;
    mstack.push_back(5);
    mstack.push_back(17);
    std::cout << "Element en haut de la pile : " << mstack.back() << std::endl;
    mstack.pop_back();
    std::cout << "Taille de la pile apres suppression du premier element : " << mstack.size() << std::endl;
    mstack.push_back(3);
    mstack.push_back(5);
    mstack.push_back(737);
    //[...]
    mstack.push_back(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    std::cout << std::endl;
    std::cout << "Affichage du contenu de la pile :" << std::endl;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }*/
    return 0;
}
