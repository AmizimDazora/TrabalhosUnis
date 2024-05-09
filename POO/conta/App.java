package conta;

public class App {
    public static void main(String[] args) {
        
        ContaCorrente cc1 = new ContaCorrente();
        Titular t1 = new Titular();
        
        cc1.agencia = "10101010";
        cc1.numero = "010101010101011";
        cc1.saldo = 20;
        cc1.taxa = 3.98;
        cc1.titular = t1;



    }
}
