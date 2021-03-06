#ifndef __arvore_hpp__
#define __arvore_hpp__

template<class T> struct Arvore{

//variaveis
 private:
  Arvore *esquerda;
  Arvore *direita;

 public:
  T valor;

  //metodos
   Arvore* destruir(Arvore *arv, T v){
       if(arv == nullptr){
           return nullptr;
       }
       if(arv->valor == v){
           cleanPosOrder(arv);
           std::cout << "Arvore removida com sucesso!" << std::endl;
           return arv;
       }
       return (v < arv->valor) ? destruir(arv->esquerda, v) : destruir(arv->direita, v);
    }
   void cleanPosOrder(Arvore *arv){
         if(arv == nullptr){
             return;
         }
         cleanPosOrder(arv->esquerda);
         cleanPosOrder(arv->direita);
         if(arv->esquerda!=nullptr)
             arv->esquerda=nullptr;
         if(arv->direita!=nullptr)
            arv->direita=nullptr;
         arv = nullptr;
         return;
     }
   Arvore* busca(Arvore *arv, T v) const {
      if(arv == nullptr){
          return nullptr;
      }
      if(arv->valor == v){
          std::cout << "Arvore encontrada com sucesso!" << std::endl;
          return arv;
      }
      return (v < arv->valor) ? busca(arv->esquerda, v) : busca(arv->direita, v);
  }
   Arvore* inserir(Arvore *arv, T v){
       if(arv == nullptr){
           Arvore* nova = new Arvore(nullptr, nullptr, v);
           std::cout << "Arvore inserida com sucesso!" << std::endl;
           return nova;
       }
       if (v < arv->valor){
           arv->esquerda = inserir(arv->esquerda, v);
       } else {
           arv->direita = inserir(arv->direita, v);
       }
   }

 //construtor
 Arvore(const T v)
 : esquerda(nullptr), direita(nullptr), valor(v) {
}
 Arvore(Arvore *e, Arvore* d, const T v)
 : esquerda(e), direita(d), valor(v) {
}

//destrutor
 ~Arvore(){
     std::cout << "Arvore destruída com sucesso!" << std::endl;
 }

};


#endif // __arvore_hpp
