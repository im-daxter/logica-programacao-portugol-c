Algoritmo "operadora"


// Uma operadora de telefonia cobra R$ 50.00 por um plano básico que dá direito a 100 minutos de telefone.
// Cada minuto que exceder a franquia de 100 minutos custa R$ 2.00. 
// Fazer um programa para ler a quantidade de minutos que uma pessoa consumiu, daí mostrar o valor a ser pago. 


Var

	minutosConsumidos, conta : real

Inicio

	escreval("Digite a quantidade de minutos: ")
  leia(minutosConsumidos)
   
  conta <- 50.00
   
  se minutosConsumidos > 100 entao
     conta <- conta + (minutosConsumidos - 100) * 2.00
  fimse
   
  escreval("Valor a pagar: R$ ", conta:4:2)
    


fimalgoritmo