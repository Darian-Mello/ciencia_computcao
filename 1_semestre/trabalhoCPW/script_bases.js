function muda_entrada(tipo){
    document.getElementById("resultado").style.display = "none";
    if(tipo == 0){
        document.getElementById("span_entrada").innerHTML = "Binário";
        document.getElementById("idn").placeholder = "Binário";
    }
    else if(tipo == 1){
        document.getElementById("span_entrada").innerHTML = "Octal";
        document.getElementById("idn").placeholder = "Octal";
    }
    else if(tipo == 2){
        document.getElementById("span_entrada").innerHTML = "Decimal";
        document.getElementById("idn").placeholder = "Decimal";
    }
    else{
        document.getElementById("span_entrada").innerHTML = "Hexadecimal";
        document.getElementById("idn").placeholder = "Hexadecimal";
    }
}
function muda_saida(tipo){
    document.getElementById("resultado").style.display = "none";
    if(tipo == 0)
        document.getElementById("span_saida").innerHTML = "Binário";
    else if(tipo == 1)
        document.getElementById("span_saida").innerHTML = "Octal";
    else if(tipo == 2)
        document.getElementById("span_saida").innerHTML = "Decimal";
    else
        document.getElementById("span_saida").innerHTML = "Hexadecimal";
}

function valida_entrada(entrada, n){
    var rode = true;
    if(entrada == 0){
        var verifica = /^([0-1|\+|-]?[0-1]+?)$/.test(n);
        n = parseInt(n, 2);
        if(verifica == false){
            alert("Informe um número binário inteiro!");
            rode = false;
            document.getElementById("idn").focus();
        }
    }
    else if(entrada == 1){
        var verifica = /^([0-7|\+|-]?[0-7]+?)$/.test(n);
        n = parseInt(n, 8);
        if(verifica == false){
            alert("Informe um número octal inteiro!");
            rode = false;
        }
    }
    else if(entrada == 2){
        var verifica = /^([0-9|\+|-]?[0-9]+?)$/.test(n);
        n = parseInt(n, 10);
        if(verifica == false){
            alert("Informe um número decimal inteiro!");
            rode = false;
        }
    }
    else{
        var verifica = /^([0-9|a-f|A-F|\+|-]?[0-9|a-f|A-F]+?)$/.test(n);
        n = parseInt(n, 16);
        if(verifica == false){
            alert("Informe um número hexadecimal inteiro!");
            rode = false;
        }
    }
    if(rode == true)
        calcula(n);
    else{
        document.getElementById("resultado").style.display = "none";
        document.getElementById("idn").focus();
    }
}
function calcula(n){
    var saida = document.getElementById("idsaida").value; 

    if(saida == 0)
        n = n.toString(2);
    else if(saida == 1)
        n = n.toString(8);
    else if(saida == 2){
        n = n.toString(10);
    }
    else
        n = n.toString(16);

    document.getElementById("resultado").innerHTML = "O resultado é: "+n;
    document.getElementById("resultado").style.display = "block";
}