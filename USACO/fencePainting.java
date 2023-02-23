// problem link: http://www.usaco.org/index.php?page=viewproblem2&cpid=567
import java.util.Scanner;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileWriter;
import java.io.IOException; 

public class fencePainting {
    public static void main(String[] args) throws FileNotFoundException, IOException{

        int a,b,c,d; 
        File file = new File("paint.in"); 
        Scanner scan = new Scanner(file); 
        a = scan.nextInt(); 
        b = scan.nextInt(); 
        scan.nextLine(); 
        c = scan.nextInt(); 
        d = scan.nextInt(); 
        scan.close(); 
        File out = new File("paint.out"); 
        FileWriter writer = new FileWriter(out); 
        int painted = (b-a) + (d-c) - Math.max(Math.min(b,d) - Math.max(a,c), 0); 
        writer.write(String.valueOf(painted)); 
        writer.close(); 
    }
}
