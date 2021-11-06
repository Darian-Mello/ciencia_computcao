function Ponderada(peso){
    document.getElementById("resultado").style.display = "none";
    var novo = "";
    if(peso == 1){
        for(var i=1; i<=(formulario.numero.value); i++){
            novo += "<p><label for='idp"+i+"'>Informe o peso do "+i+"ª valor: </label><input type='number' name='p"+i+"' id='idp"+i+"'></p>";
        }
        document.getElementById("pesos").innerHTML = novo;
        document.getElementById("h3").innerHTML = "Ponderada";
    }
    else if(peso == 0){
        document.getElementById("pesos").innerHTML = "";
        document.getElementById("h3").innerHTML = "Aritmética";
    }
    else{
        document.getElementById("pesos").innerHTML = "";
        document.getElementById("h3").innerHTML = "Harmônica";
    }
}

function gera(n){
    var termos = "";
    for(var i=1; i<=n; i++){
        termos += "<p><label for='idn"+i+"'>Informe o "+i+"º valor: </label><input type='number' name='n"+i+"' id='idn"+i+"'></p>";
    }
    document.getElementById("termos").innerHTML = termos;
}

function valida(operacao){
    document.getElementById("resultado").style.display = "none";
    var aux, calcula, verifica = true;
    for(var i=1; i<=(formulario.numero.value); i++){
        calcula = true;
        aux = parseFloat(document.getElementById("idn"+i).value, 10);
        if(isNaN(aux)){
            alert("Informe todos os valores válidos!");
            document.getElementById("idn"+i).focus();
            calcula = false;
            break;
        }
        else if(aux <= 0){
            verifica = false;
        }
    }

    if(operacao == 1){
        calcula = true;
        for(var i=1; i<=(formulario.numero.value); i++){
            aux = parseFloat(document.getElementById("idp"+i).value, 10);
            if(isNaN(aux)){
                alert("Informe todos os pesos correspondentes a seus valores!");
                document.getElementById("idp"+i).focus();
                calcula = false;
                break;
            }
            else if(aux <= 0){
                varifica = false;
            }
        }
    }
    if(verifica == false){
        verifica = confirm("Cuidado! Números negativos ou nulos podem causar erro no resultado, conforme o tipo de média.");
    }
    if(calcula == true && verifica == true)
        calcula_media(operacao, formulario.numero.value);
}

function calcula_media(operacao, numero){
    var media = 0, tipo;
    if(operacao == 0){
        tipo = "aritmética";
        var soma = 0;
        for(var i=1; i<=numero; i++){
            soma += parseFloat(document.getElementById("idn"+i).value, 10);
        }
        media = soma/numero;
    }
    else if(operacao == 1){
        tipo = "ponderada";
        var numerador = 0, denominador = 0;
        for(var i=1; i<=numero; i++){
            numerador += (parseFloat(document.getElementById("idn"+i).value, 10)) * (parseFloat(document.getElementById("idp"+i).value, 10));
            denominador += parseFloat(document.getElementById("idp"+i).value, 10);
        }
        media = numerador / denominador;
    }
    else if(operacao == 2){
        tipo = "harmônica";
        var soma = 0;
        for(var i=1; i<=numero; i++){
            soma += 1 / (parseFloat(document.getElementById("idn"+i).value, 10));
        }
        media = numero / soma;
    }
    document.getElementById("resultado").innerHTML = "A média "+tipo+" é: " + media.toFixed(2).replace(".", ",");
    document.getElementById("resultado").style.display = "block";
}