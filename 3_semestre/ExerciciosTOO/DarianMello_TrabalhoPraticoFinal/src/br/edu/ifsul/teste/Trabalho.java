package br.edu.ifsul.teste;

import br.edu.ifsul.modelo.Empreiteira;
import br.edu.ifsul.modelo.Obra;
import br.edu.ifsul.modelo.Proprietario;
import br.edu.ifsul.modelo.Terreno;

import javax.swing.*;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Calendar;
import java.util.List;

public class Trabalho {
    public static final int totalTerrenos = 3;
    public static void main(String[] args) {
        boolean leu = false;
        String entrada;
        Calendar data = Calendar.getInstance();
        SimpleDateFormat formato = new SimpleDateFormat("dd/MM/yyyy");

        Obra obra = new Obra();
        Proprietario proprietario = new Proprietario();
        Terreno te = new Terreno();
        List<Terreno> terrenos = new ArrayList<>();
        Empreiteira empreiteira = new Empreiteira();

        do{
            try{
                entrada = JOptionPane.showInputDialog("Informe o código da obra: ");
                obra.setCodigo(Integer.parseInt(entrada));
                obra.setNome(JOptionPane.showInputDialog("Informe o nome da obra: "));
                obra.setDescricao(JOptionPane.showInputDialog("Informe a descrição da obra: "));
                entrada = JOptionPane.showInputDialog("Informe o Orçamento da obra: ");
                obra.setOrcamento(Double.parseDouble(entrada));
                entrada = JOptionPane.showInputDialog("Informe o Custo Total da obra: ");
                obra.setCustoTotal(Double.parseDouble(entrada));

                entrada = JOptionPane.showInputDialog("Informe o nome a data de entrega da obra NO FORMATO: \"DD/MM/AAAA\": ");
                data.setTime(formato.parse(entrada));
                obra.setDataEntrega(data);

                leu = true;
            }catch (Exception e){
                JOptionPane.showMessageDialog(null, "Ocorreu um erro:\n" + e.getMessage() + "\n" + e.getClass());
            }
        }while(!leu);

        leu = false;
        do{
            try{
                for(int i = 0; i<totalTerrenos; i++){
                    te = new Terreno();
                    proprietario = new Proprietario();

                    entrada = JOptionPane.showInputDialog("Informe o código do " + (i+1) + "º terreno: ");
                    te.setCodigo(Integer.parseInt(entrada));
                    entrada = JOptionPane.showInputDialog("Informe o comprimento do " + (i+1) + "º terreno: ");
                    te.setComprimento(Double.parseDouble(entrada));
                    entrada = JOptionPane.showInputDialog("Informe a largura do " + (i+1) + "º terreno: ");
                    te.setLargura(Double.parseDouble(entrada));
                    te.setMetrosQuadrados(te.getComprimento() * te.getLargura());

                    entrada = JOptionPane.showInputDialog("Informe o código do proprietario do " + (i+1) + "º terreno: ");
                    proprietario.setCodigo(Integer.parseInt(entrada));
                    proprietario.setNome(JOptionPane.showInputDialog("Informe o nome do proprietario " + (i+1) + "º terreno: "));
                    proprietario.setCpf(JOptionPane.showInputDialog("Informe o CPF do proprietario " + (i+1) + "º terreno: "));

                    te.setProprietario(proprietario);
                    terrenos.add(te);
                }

                obra.setTerrenos(terrenos);
                leu = true;
            }catch (Exception e){
                JOptionPane.showMessageDialog(null, "Ocorreu um erro:\n" + e.getMessage() + "\n" + e.getClass());
            }
        }while(!leu);

        leu = false;
        do{
            try{
                entrada = JOptionPane.showInputDialog("Informe o código da empreiteira: ");
                empreiteira.setCodigo(Integer.parseInt(entrada));
                empreiteira.setNome(JOptionPane.showInputDialog("Informe o nome da empreiteira: "));

                obra.setEmpreiteira(empreiteira);
                leu = true;
            }catch (Exception e){
                JOptionPane.showMessageDialog(null, "Ocorreu um erro:\n" + e.getMessage() + "\n" + e.getClass());
            }
        }while(!leu);

        obra.exibirDados();
    }
}
