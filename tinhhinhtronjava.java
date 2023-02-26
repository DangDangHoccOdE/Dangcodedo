import java.util.Scanner;

public class tinhhinhtronjava {
    public static void main(String[] args) {
        double r , chuVi , dienTich;
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhap so r=");
        r = sc.nextDouble();
        
        // tinh chu vi:
        chuVi=2 * Math.PI * r;
        System.out.println("Chu vi la :"+chuVi);
        //System.out.println("Chu vi la :"+Math.round(chuVi));
        System.out.println("Chu vi la :"+Math.round((chuVi*100.0)/100.0));
        
        // tinh dien tich :
        dienTich=Math.PI * Math.pow(r,2);
        System.out.println("Dien tich la :"+dienTich);
    }
}