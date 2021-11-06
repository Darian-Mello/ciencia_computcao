import javax.swing.*;

public class Pessoa {
    String nome;
    String cpf;
    String telefone;
    Cidade cid;
    Profissao prof;

    Pessoa(){
        this.nome = "Não informado";
        this.cpf = "Não informado";
        this.telefone = "Não informado";
        this.cid = new Cidade();
        this.prof = new Profissao();
    }

    public void MostraPessoa(){
        String saida = "Pessoa :" + this.nome +
                ":\nCPF: " + this.cpf +
                "\nTelefone: " + this.telefone +
                "\nCidade: " + this.cid.nome +
                "\nEstado onde está a cidade: " + this.cid.estado +
                "\nProfissão: " + this.prof.nome +
                "\nDescrição da profissão: " + this.prof.descricao;
        JOptionPane.showMessageDialog(null,saida);
    }
}
