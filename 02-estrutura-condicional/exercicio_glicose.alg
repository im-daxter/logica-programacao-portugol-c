Algoritmo "glicose"


// Uma operadora de telefonia cobra R$ 50.00 por um plano básico que dá direito a 100 minutos de telefone.
// Cada minuto que exceder a franquia de 100 minutos custa R$ 2.00. 
// Fazer um programa para ler a quantidade de minutos que uma pessoa consumiu, daí mostrar o valor a ser pago. 


Var

	glicose : real
  
Inicio

	escreva("Digite a medida da glicose: ")
   leia(glicose)

   escreval("Seu nivel de glicose: ", glicose:4:2, " mg/dl")
   escreval("")

   se glicose <= 100.0 entao
      escreval("Classificacao: Normal")
   senao
      se glicose <= 140.0 entao
         escreval("Classificacao: Elevado")
      senao
         escreval("Classificacao: Diabetes")
      fimse
   fimse

fimalgoritmo