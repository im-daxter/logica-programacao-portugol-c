Algoritmo "pagamento"

Var

   nome : caractere
   valor, hora, pagamento : real

Inicio

   escreva("Nome: ")
   leia(nome)
   
   escreva("Valor por Hora: ")
   leia(valor)
   escreva("Horas trabalhadas: ")
   leia(hora)
   
   pagamento <- valor * hora
   
   escreva("O pagamento para ", nome, " deve ser ", pagamento:2:2)         ?
   

Fimalgoritmo