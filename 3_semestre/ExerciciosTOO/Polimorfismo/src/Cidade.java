import javax.swing.*;

public class Cidade {
    Integer codigo;
    String nome;
    String uf;

    public Cidade() {
        this.codigo = 0;
        this.nome = "Não informado";
        this.uf = "";
    }
    public Cidade(Integer codigo, String nome, String uf) {
        this.codigo = codigo;
        this.nome = nome;
        this.uf = uf;
    }

    public void mostraCidade(){
        String saida = "Codigo: " + this.codigo +
                "\nNome: " + this.nome +
                "\nUF: " + this.uf;

        JOptionPane.showMessageDialog(null, saida);
    }
}
