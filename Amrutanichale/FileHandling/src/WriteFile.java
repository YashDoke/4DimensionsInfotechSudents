import java.io.FileWriter;
import java.io.IOException;
public class WriteFile {

	public static void main(String[] args) {
		try {
		FileWriter mf=new FileWriter("newfile.txt");
		mf.write("this is my fileIn the following example, we use the FileWriter class together with its write() method to write some text to the file we created in the example above. Note that when you are done writing to the file, you should close it with the close() method:");
		mf.close();
		System.out.println("File wrote succesfully");
		}
		catch(IOException e){
			System.out.println("An error occurd");
			e.printStackTrace();
		}
	}

}
