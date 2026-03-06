Algoritmo "terreno"

Var

   largura, comprimento, area, mQuadrado, precoTerreno : real

Inicio

   escreva("Digite a largura do terreno:")
   leia(largura)
   escreva("Digite o comprimento do terreno:")
   leia(comprimento)
   escreva("Digite o preço do metro quadrado:")
   leia(mQuadrado)
   
   area <- largura * comprimento
   precoTerreno <- area * mQuadrado
   
   escreval("Area do terreno: ", area:3:2)
   escreval("Preço do terreno: R$", precoTerreno:3:2)


Fimalgoritmo