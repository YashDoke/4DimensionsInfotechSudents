import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class Read {

	public static void main(String[] args) {
	try {
		File mf = new File("newfile.txt");
	    Scanner mR = new Scanner(mf);
	while(mR.hasNextLine())
	{
		String data=mR.nextLine();
		System.out.println(data);
	}
	mR.close();
	}
	catch(FileNotFoundException e) {
		System.out.println("File not found");
		e.printStackTrace();
	}
	}

}
