import java.util.Scanner;

class TheGreatest{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);

        int num1 = scanner.nextInt();
        int num2 = scanner.nextInt();
        int num3 = scanner.nextInt();

        if(num1 > num2 && num1 > num3){
            System.out.println(abs(num1) + " eh o maior");
        }

        else if (num2 > num1 && num2 > num3){
            System.out.println(abs(num2) + " eh o maior");
        }

        else if (num3 > num1 && num3 > num2){
            System.out.println(abs(num3) + " eh o maior");
        }
        scanner.close();
    }
}
