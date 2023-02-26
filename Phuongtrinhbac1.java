import java.util.Scanner;

/**
 * Phuongtrinhbac1
 */
public class Phuongtrinhbac1 {

    public static void main(String[] args) {
        double a ,b,x ;
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhap so a =");
        a = sc.nextDouble();
        System.out.println("Nhap so b =");
        b = sc.nextDouble();

        // giai ptb1 :
        // pt b1 :  ax+b=0;
        if(a==0){
            if(b==0){
                System.out.println("Phuong trinh vo so nghiem");
            }else{
                System.out.println("Phuong trinh vo nghiem");
            }
        }else{
            x = -b/a;
            System.out.println("Phuong trinh co nghiem duy nhat ="+x);
        }
    }
}
