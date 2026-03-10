Algoritmo "medidas"

Var

   medidaA, medidaB, medidaC, areaQuadrado, areaTrianguloRetangulo, areaTrapezio : real

Inicio

   escreva("Digite a medida A: ")
   leia(medidaA)
   escreva("Digite a medida B: ")
   leia(medidaB)
   escreva("Digite a medida C: ")
   leia(medidaC)

   areaQuadrado <- Exp(medidaA, 2)
   areaTrianguloRetangulo <- (medidaA * medidaB) / 2
   areaTrapezio <- ((medidaA + medidaB) * medidaC) / 2
   
   escreval("Area do quadrado: ", areaQuadrado:8:4)
   escreval("Area do triangulo retangulo: ", areaTrianguloRetangulo:8:4)
   escreval("Area do trapézio: ", areaTrapezio:8:4)

Fimalgoritmo