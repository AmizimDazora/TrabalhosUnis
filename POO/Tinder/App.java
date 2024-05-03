package Tinder;
public class App {
    public static void main(String[] args) {
        Perfil gay = new Perfil();
        Perfil lesb = new Perfil();
        gay.setCpf("635.837.499-45");
        lesb.setCpf("020.039.859-88");
        gay.setGenero("Homem");
        lesb.setGenero("Mulher");
        Preferencia penis = new Preferencia();
        Preferencia bct = new Preferencia();
        penis.setGenero("Pênis");
        bct.setGenero("Buceta");
        System.out.println("eu sou "+gay.getGenero());
        System.out.println("meu cpf é "+gay.getCpf());
        System.out.println("eu amo "+penis.getGenero());
        System.out.println("");
        System.out.println("eu sou "+lesb.getGenero());
        System.out.println("meu cpf é  "+lesb.getCpf());
        System.out.println("eu amo "+bct.getGenero());
    }
}
