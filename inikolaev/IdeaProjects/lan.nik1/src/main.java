import java.io.PrintWriter;
import java.util.Scanner;
import java.io.IOException;

public class main {

    static int n, num;

    public static void main(String[] argv) throws IOException {
        System.out.println("6.8 Задачи по теме 'Двумерные массивы'");
        System.out.println("6.8.2 Операции с элементами массивов. Вариант 23");

        Scanner s = new Scanner(System.in);
        PrintWriter out = new PrintWriter(System.out);
        System.out.println("Введите n размерность матрицы n*n:");
        n = s.nextInt();
        num = n;
        int[][] arr = new int[n][n];
        System.out.print("Изначальная матрица n*n:");
        Integer[][] array = new Integer[n][n];
        Integer[][] arrayAbs = new Integer[n][n];
        for(int i = 0 ; i < n ; i++){
            System.out.print("\n");
            for(int j = 0 ; j < n ; j++){
                array[i][j] = (int)(Math.random()*201-100);
                System.out.print(" "+array[i][j]);
                arrayAbs[i][j] = Math.abs(array[i][j]);
            }
        }
        int maxi = 0;
        int maxj = 0;
        double max = Math.abs(array[0][0]);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (max < Math.abs(array[i][j]))
                {
                    max = Math.abs(array[i][j]); maxi = i; maxj = j;
                }
            }
        }
        System.out.println("");
        System.out.println("Максимальный по модулю элемент: " + max + " (строка №" + maxi + ", столбец №" + maxj + ")");
        System.out.println("Полученная матрица:");
        Integer[][] arrayResult = new Integer[n-1][n-1];
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            if (i == maxi) continue;
            int l = 0;
            for (int j = 0; j < n; j++)
            {
                if (j == maxj) continue;
                arrayResult[k][l] = array[i][j];
                l++; System.out.print(array[i][j] + " ");
            }
            k++; System.out.println();
        }
    }
}
