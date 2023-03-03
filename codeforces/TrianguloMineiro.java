// da seletiva mineira da UFMG
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.Scanner;
import java.util.StringTokenizer;

public class Main{

    public static void main(String[] args) throws IOException{

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in)); 
        PrintWriter wr = new PrintWriter(System.out); 

        String line = br.readLine(); 

        StringTokenizer tokenizer = new StringTokenizer(line, " ");
        int t = Integer.parseInt(tokenizer.nextToken()); 
        for(int i= 0 ; i < t; i++)
        {
            line = br.readLine(); 
            tokenizer = new StringTokenizer(line); 
            int a = Integer.parseInt(tokenizer.nextToken()); 
            int b = Integer.parseInt(tokenizer.nextToken()); 
            int c = Integer.parseInt(tokenizer.nextToken()); 
    
            // a + b > c, b + c > a, a + c > b
            if(a+b > c && b+c > a && a+c > b) 
            {
                wr.println("Yes");
            }else 
            {
                wr.println("No"); 
            }
        }
        br.close(); 
        wr.close(); 
    }

}
