import java.io.*;
import java.nio.CharBuffer;

public class PhoneBook {
    public static void main(String[] args) {
//        System.out.println("File Input output");
        File myFile = new File("newFile.txt");
        try {
            myFile.createNewFile();
        } catch (IOException e) {
            e.printStackTrace();
            System.out.println("Exception " + e);
        }
        try {
            FileWriter fileWriter = new FileWriter(myFile);
            fileWriter.write("Name : Rashed \n Roll:1607103 \n");
            fileWriter.write("Name : Yousuf \n Roll :1607102\n");
            fileWriter.write("Name : Robiul \n Roll :1607107\n");
            fileWriter.write("Name : Delowar \n Roll :1607094\n");
            fileWriter.flush();
            fileWriter.close();
            System.out.println("write file successfully");
        } catch (IOException e) {
            e.printStackTrace();
        }

        try {
            FileReader fileReader=new FileReader(myFile);
            char [] data=new char[200];
            fileReader.read(data);
            System.out.println("Out put file :\n"+data);

        } catch (FileNotFoundException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
