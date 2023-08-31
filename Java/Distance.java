import java.util.Scanner;

public class Distance{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);

        double x1 = scanner.nextInt();
        double y1 = scanner.nextInt();
        double x2 = scanner.nextInt();
        double y2 = scanner.nextInt();

        double distance = Math.sqrt((Math.pow((x2-x1),2)) + (Math.pow((y2-y1), 2)));

        System.out.println(distance);

        scanner.close();
    }
}
