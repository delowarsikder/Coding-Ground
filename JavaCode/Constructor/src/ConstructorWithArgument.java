
public class ConstructorWithArgument {
    public int a=10;
    ConstructorWithArgument() {
    }

    public ConstructorWithArgument(String arg1, String arg2) {
        System.out.println("arg1 : " + arg1 + "\n arg2 : " + arg2);
    }

    public ConstructorWithArgument(String arg1) {
        this("2k18", null);
        System.out.println("a :"+ a);
    }

    public static void main(String[] args) {
        ConstructorWithArgument constructorWithArgument = new ConstructorWithArgument("kuet");


    }

}
