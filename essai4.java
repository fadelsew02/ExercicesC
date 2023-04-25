import  java.util.Scanner;
class essai4
{
    public static void main (String[] args)
    {
        System.out.println("Hello world");
        System.out.println("C'est Fadel qui écrit");
        System.out.print("Entrez un nombre:");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.print("/n Vous avez entré "+n);
    }
}