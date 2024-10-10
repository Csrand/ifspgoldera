prompt = require('prompt-sync')();
let n1 = Number(prompt("Digite um número: "));
let n2 = Number(prompt("Digite outro número: "));
let n3 = Number(prompt("Digite outro número: "));
 let maior, meio, menor;
 if(n1 >=n2){
    if(n1>=n3){
        maior = n1;
        if(n2 >= n3){
            meio = n2;
            menor = n3;
        }
        else{
            meio = n3;
            menor = n2;
        }
    }else{
        meio = n1;
        menor = n2;
        maior = n3;
    }
 }
 else{
    if(n2 >= n3){
        maior = n2;
        if(n1 >= n3){
            meio = n1;
            menor = n3;
        }
        else{
            meio = n3;
            menor = n1;
        }
    }else{
        menor = n1;
        meio =n2;
        maior =n3;
    }
 }
 console.log("A ordem decrescente é: ");
 console.log(maior + " " + meio + " " + menor);
