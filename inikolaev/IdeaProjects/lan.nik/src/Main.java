import java.io.IOException;
import java.io.PrintWriter;
import java.util.Scanner;

public class Main {

    static int n, k, num;

    public static void main(String[] argv) throws IOException {

        System.out.println("6.8 Задачи по теме 'Двумерные массивы'");

        System.out.println("6.8.1 Задачи на формирование массивов. Вариант 23");

        Scanner s = new Scanner(System.in);
        PrintWriter out = new PrintWriter(System.out);
        System.out.println("Введите n размерность матрицы n*n:");
        n = s.nextInt();
        k = 1;
        num = n;
        int[][] arr = new int[n][n];
        System.out.println("Полученная матрица n*n:");

        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr.length; j++) {
                arr[i][j] = k;
                k++;
            }
        }
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr.length; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
    }
}