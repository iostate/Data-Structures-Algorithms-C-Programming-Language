/**
 * Created by qmtruong92 on 8/22/17.
 */

import java.util.Scanner;

public class Program1 {

    public static void main(String[] args) {

        Scanner kb = new Scanner(System.in);

        System.out.println("Enter a number: ");
        int num = kb.nextInt();
        System.out.println("You chose " + num + "\n");

        System.out.println();
        printNums(num);
    }

    static int fact(int number) {
        //begin the factorial at 1 always
        int factorial = 1;

        //start loop at 1 else it zeroes
        for (int i = 1; i <= number; i++) {

            factorial = factorial * i;

        }

        return factorial;

    }


    static void printNums(int num) {


        for (int i = 1; i <= num; i++) {

            boolean caught = false;
            boolean three = false;
            boolean five = false;


            if (i % 11 == 0 && i % 7 != 0) {
                i += 1;
            }

            if (i % 3 == 0 && i % 5 == 0 && i % 7 != 0) {
                System.out.println("fifteen");
                caught = true;
            }

            if (i % 5 == 0 && i % 7 != 0 && !caught) {
                System.out.println("five");
                five = true;
            }
            if (i % 3 == 0 && i % 7 != 0 && !caught) {
                System.out.println("three");
                three = true;
            }

            if (i % 7 != 0 && !caught && !three && !five) {
                System.out.println(i);
            }

        }


    }
}
