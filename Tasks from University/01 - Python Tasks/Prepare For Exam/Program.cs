using System;

namespace PrepareForExam
{
    class Program
    {
        // 1va zadacha
        static void Main(string[] args)
        {
            int N  = int.Parse(Console.ReadLine());
        }
        static int[,] InitMatrix(int N)
        {
            int[,] matrix = new int[N, N];
            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    matrix[i, j] = int.Parse(line[j]);
                }
            }
            return matrix;
        }
        static int LargestNegativeOnAntidiagonal(int[,] matrix)
        {
            //1va vtoro poduslovie
            int largestNegative = matrix[0, matrix.GetLength(0) - 1];
            bool foundNegative = false;
            for (int i = 0; i < matrix.GetLength(0); i++)
            {
                if ( largestNegative > matrix[i, matrix.GetLength(0) - 1 - i])
                {
                    largestNegative = matrix[i, matrix.GetLength(0) - 1 - i];
                    foundNegative = true;
                }
            }
            if (foundNegative == true)
            {
                return largestNegative;
            }
            else
            {
                return null;
            }
        }
        static int SumOddElements(int[,] matrix)
        {
            //1va vtoro poduslovie
            int sum = 0;
            for (int i = 0; i < matrix.GetLength(0); i++)
            {
                for (int j = 0; j < matrix.GetLength(0); j++)
                {
                    if (matrix[i, j] % 2 != 0)
                    {
                        sum += matrix[i, j];
                    }
                }
            }
            return sum;
        }
        static int[] FindMaxInRows(int[,] matrix)
        {
            //1va treto poduslovie
            int[] maxInRows = new int[matrix.GetLength(0)];
            for (int i = 0; i < matrix.GetLength(0); i++)
            {
                int max = matrix[i, 0];
                for (int j = 0; j < matrix.GetLength(0); j++)
                {
                    if (max < matrix[i, j])
                    {
                        max = matrix[i, j];
                    }
                }
                maxInRows[i] = max;
            }
            return maxInRows;
        }
    }
    static int SumDigitsIterative(int x)
    {
        //2ra zadacha
        int sum = 0;
        while (x != 0)
        {
            sum += x % 10;
            x /= 10;
        }
        return sum;
    }
    static int SUmDigitsRecursive(int x)
    {
        //2ra zadacha
        if (x == 0)
        {
            return 0;
        }
        return x % 10 + SUmDigitsRecursive(x / 10);
    }
}