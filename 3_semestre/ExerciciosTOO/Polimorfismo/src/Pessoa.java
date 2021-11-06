import javax.swing.*;

public class Pessoa {
    Integer codigo;
    String nome;
    Integer cargaHoraria;
    Double valorHora;
    Double salario;
    Cidade cidade;

    public Pessoa() {
        this.codigo = 0;
        this.nome = "Não informado";
        this.cargaHoraria = 0;
        this.valorHora = 0.0;
        this.salario = 0.0;
        this.cidade = new Cidade();
    }

    public Pessoa(Integer codigo, String nome, Integer cargaHoraria, Double valorHora, Double salario, Cidade cidade) {
        this.codigo = codigo;
        this.nome = nome;
        this.cargaHoraria = cargaHoraria;
        this.valorHora = valorHora;
        this.salario = salario;
        this.cidade = cidade;
    }

    public void mostraPessoa(){
        String saidaCD = "Codigo: " + this.cidade.codigo +
                "\nNome: " + this.cidade.nome +
                "\nUF: " + this.cidade.uf;

        String saida = "Codigo: " + this.codigo +
                "\nNome: " + this.nome +
                "\nCarga Horária: " + this.cargaHoraria +
                "\nValor por Hora: " + this.valorHora +
                "\nSalário: " + this.salario;

        JOptionPane.showMessageDialog(null, saida + "\n\nCidade da Pessoa:\n" + saidaCD);
    }

    public void calculaSalario(){
        this.salario = this.cargaHoraria * this.valorHora;
    }
}
