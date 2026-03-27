Algoritmo "notas"

//Fazer um programa para ler as duas notas que um aluno obteve no primeiro e segundo semestres de uma disciplina anual.
// Em seguida, mostrar a nota final que o aluno obteve (com uma casa decimal) no ano juntamente com um texto explicativo. 
//Caso a nota final do aluno seja inferior a 60.00, mostrar a mensagem "REPROVADO".

Var

	nota1, nota2, notaFinal : real

Inicio

	escreval("Qual a nota do aluno no 1° semestre: ")
  leia(nota1)
  
  escreval("Qual a nota do aluno no 2° semestre: ")
  leia(nota2)
  
  notaFinal <- (nota1 + nota2) / 2
  escreval("Nota final: ", notaFinal:2:2)
  
  
  se notaFinal < 60 entao
  	escreval("REPROVADO")
  senao 
  	escreval("APROVADO")
  fimse

fimalgoritmo