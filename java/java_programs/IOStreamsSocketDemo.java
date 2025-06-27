import java.io.*;
public class IOStreamsSocketDemo {
    public static void main(String[] args) {
        try {
            FileWriter fw = new FileWriter("sample.txt");
            fw.write("Hello, file!");
            fw.close();
            BufferedReader br = new BufferedReader(new FileReader("sample.txt"));
            System.out.println("File content: " + br.readLine());
            br.close();
        } catch (IOException e) {
            System.out.println("I/O Error: " + e.getMessage());
        }
    }
} 