import javax.swing.*;

public class IMC {
    String nome;
    Double peso;
    Double altura;
    Double IMC;
    String classificacao;

    public IMC(){
        this.nome = "Não informado";
        this.peso = 0.0;
        this.altura = 0.0;
        this.IMC = 0.0;
        this.classificacao = "Não calculada";
    }

    public void ler(){
        String entrada;
        boolean leu = false;

        do {
            try {
                this.nome = JOptionPane.showInputDialog("Informe seus dados para saber o seu IMC:\nInforme seu nome:");
                this.peso = Double.parseDouble(JOptionPane.showInputDialog("Informe seu peso(em Kg):"));
                this.altura = Double.parseDouble(JOptionPane.showInputDialog("Informe sua altura(altura):"));
                leu = true;
            } catch (Exception e) {
                JOptionPane.showMessageDialog(null, "Ocorreu um erro na leitura dos dados. Informe novamente, por favor. "
                        + "\n" + e.getClass() + "\n" + e.getMessage() + "\n");
            }
        }while(!leu);
    }
    public void calculaIMC(){
        this.IMC = this.peso/(this.altura * this.altura);

        if(this.IMC <= 18.5)
            this.classificacao = "MAGREZA";
        else if(this.IMC > 18.5 && this.IMC <= 24.9)
            this.classificacao = "NORMAL";
        else if(this.IMC > 24.9 && this.IMC <= 29.9)
            this.classificacao = "SOBREPESO";
        else if(this.IMC > 29.9 && this.IMC <= 39.9)
            this.classificacao = "OBESIDADE";
        else
            this.classificacao = "OBESIDADE GRAVE";
    }
    public void exibirDados(){
        String saida = "Nome: " + this.nome;
        saida += "\nPeso: " + this.peso;
        saida += "\nAltura: " + this.altura;
        saida += "\nIMC: " + this.IMC;
        saida += "\nClassificação do IMC: " + this.classificacao;
        JOptionPane.showMessageDialog(null, "Dados do colaborador:\n\n" + saida);
    }
}
