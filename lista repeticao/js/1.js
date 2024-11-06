const prompt = require('prompt-sync')();

do {
    let n1 = Number(prompt("Digite um Número: "));
    let n2 = Number(prompt("Digite outro Número: "));
    let soma = n1 + n2;
    console.log(`A soma dos números é: ${soma}!`);
    
    var opcao = prompt("Gostaria de fazer a conta novamente? (Digite S para sim): ");
} while (opcao == 's' || opcao == 'S');





