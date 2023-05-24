import java.io.File;
import java.io.IOException;

	public class CreateNewFile {
		public static void main(String []args) {
			try {
			File nf=new File("newfile.txt");
			if(nf.createNewFile()) {
				System.out.println("File is created : " + nf.getName());
			}
			else {
				System.out.println("File already exit");
			}
				
			}
			catch(IOException e) {
				
				System.out.println("file not found");
				e.printStackTrace();
			}
		}
}
