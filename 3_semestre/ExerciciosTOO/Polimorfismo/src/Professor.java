import javax.swing.*;

public class Professor extends Pessoa{
    String titulacao;
    Integer numeroTurmas;


    public Professor() {
        super();
        this.titulacao = "Não informada";
        this.numeroTurmas = 0;
    }
    public Professor(Integer codigo, String nome, Integer cargaHoraria, Double valorHora, Double salario, Cidade cidade, String titulacao, Integer numeroTurmas) {
        super(codigo, nome, cargaHoraria, valorHora, salario, cidade);
        this.titulacao = titulacao;
        this.numeroTurmas = numeroTurmas;
    }

    @Override
    public void calculaSalario(){
        this.salario = this.cargaHoraria * this.valorHora;
        this.salario += this.salario * this.numeroTurmas / 100;
    }

    public void mostraProfessor() {
        String saidaCD = "Codigo: " + this.cidade.codigo +
                "\nNome: " + this.cidade.nome +
                "\nUF: " + this.cidade.uf;

        String saida = "Codigo: " + this.codigo +
                "\nNome: " + this.nome +
                "\nCarga Horária: " + this.cargaHoraria +
                "\nValor por Hora: " + this.valorHora +
                "\nSalário: " + this.salario +
                "\nTitulação: " + this.titulacao +
                "\nNúmero de turmas: " + this.numeroTurmas;

        JOptionPane.showMessageDialog(null, saida + "\n\nCidade da Pessoa:\n" + saidaCD);
    }
}