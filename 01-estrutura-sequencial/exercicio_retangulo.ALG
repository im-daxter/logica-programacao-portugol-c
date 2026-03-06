Algoritmo "retangulo"

Var

   base, altura, area, perimetro, diagonal : real

Inicio

   escreva("Insira a base do retangulo:")
   leia(base)
   escreva("Insira a altura do retangulo:")
   leia(altura)

   area <- base * altura
   perimetro <- (base * 2) + (altura * 2)
   diagonal <- RaizQ(Exp(base, 2) + Exp(altura, 2))

   escreval("Area:", area)
   escreval("Perimetro:", perimetro)
   escreval("Diagonal:", diagonal)

Fimalgoritmo