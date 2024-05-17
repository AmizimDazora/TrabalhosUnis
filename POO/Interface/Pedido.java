import java.util.ArrayList;

public class Pedido {
    private int numero;
    private String data;
    private Cliente cliente;
    private ArrayList<IProduto> itens = new ArrayList<>();
    private String status;

    public int getNumero() {
        return numero;
    }
    public void setNumero(int numero) {
        this.numero = numero;
    }
    public Cliente getCliente() {
        return cliente;
    }
    public void setCliente(Cliente cliente) {
        this.cliente = cliente;
    }
    public String getData() {
        return data;
    }
    public void setData(String data) {
        this.data = data;
    }
    public String getStatus() {
        return status;
    }
    public void setStatus(String status) {
        this.status = status;
    }

    public void addItem(IProduto item){
        this.itens.add(item);
    }
    public void removeItem(IProduto item){
        if (!this.itens.contains(item)){
        this.itens.remove(item);
    }
    }
    public double calculo(){
        double total = 0;
        for (IProduto item:itens){
            total += item.getPreco();
        }
        return total;
    }
}
