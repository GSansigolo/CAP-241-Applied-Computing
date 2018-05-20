    #include <iostream>
    #include "arvore.hpp"

    //main
    int main(){

        std::cout << "Lista 1 - Exercicio 3 [ Gabriel Sansigolo ]" << "\n \n";

        //declaração das diferentes arvores
        Arvore<int> arvInt(5);
        Arvore<double> arvDouble(5.33);

        //teste do contrutor para diferentes tipos de dados
        std::cout << "Teste Construtores" << "\n";
        std::cout << sizeof(arvInt) << std::endl;
        std::cout << sizeof(arvDouble) << std::endl;

        //teste do metodo de inserção
        std::cout << "\nTeste Inserção" << "\n";
        arvInt.inserir(&arvInt, 1);
        arvInt.inserir(&arvInt, 10);
        arvDouble.inserir(&arvDouble, 1.44);
        arvDouble.inserir(&arvDouble, 10.55);


        //teste do metodo print preorder
        std::cout << "\npreOrder" << "\n";
        arvInt.printPreOrder(&arvInt);
        std::cout << "\n";
        arvDouble.printPreOrder(&arvDouble);

        //teste do metodo print inorder
        std::cout << "\n\ninOrder" << "\n";
        arvInt.printInOrder(&arvInt);
        std::cout << "\n";
        arvDouble.printInOrder(&arvDouble);

        //teste do metodo print posorder
        std::cout << "\n\nposOrder" << "\n";
        arvInt.printPosOrder(&arvInt);
        std::cout << "\n";
        arvDouble.printPosOrder(&arvDouble);

        //teste do destrutor
        std::cout << "\n\nTeste Destrutores" << "\n";

        return 0;
    }
