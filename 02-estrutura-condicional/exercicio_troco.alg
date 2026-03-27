algoritmo "troco"

var
 
	unitPrice, amount, receivedMoney, total, change : real

inicio

  escreva("Preço unitário do produto: ")
  leia(unitPrice)

  escreva("Quantidade comprada: ")
  leia(amount)

  escreva("Dinheiro recebido: ")
  leia(receivedMoney)

  total <- unitPrice * amount

  se receivedMoney >= total entao
     change <- receivedMoney - total
     escreval("TROCO = ", change:4:2)
  senao
     change <- total - receivedMoney
     escreval("DINHEIRO INSUFICIENTE! FALTAM ", change:4:2, " REAIS")
  fimse

fimalgoritmo