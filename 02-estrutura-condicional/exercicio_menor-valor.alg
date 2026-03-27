Algoritmo "menor_de_tres"

// Fazer um programa para ler três números inteiros. 
// Em seguida, mostrar qual o menor dentre os três números lidos.
// Em caso de empate, mostrar apenas uma vez. 

Var

	num1, num2, num3, menorValor : inteiro
	
Inicio

  escreval("Digite qualquer valor inteiro: ")
  leia(num1)
  
  escreval("Digite outro valor inteiro: ")
  leia(num2)
  
  escreval("Digite mais um valor inteiro: ")
  leia(num3)

	escreval("Primeiro valor digitado: ", num1)
  escreval("Segundo valor digitado: ", num2)
  escreval("Terceiro valor digitado: ", num3)

	se (num1 < num2) e (num1 < num3) entao
  	escreva("Menor valor: ", num1)
  senao 
  	se num2 < num3 entao
    	escreva("Menor valor: ", num2)
    senao
    	escreva("Menor valor: ", num3)
    fimse
  fimse


fimalgoritmo