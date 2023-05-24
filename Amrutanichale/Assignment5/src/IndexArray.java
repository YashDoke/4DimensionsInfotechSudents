//Write a Java method that takes an integer array as an argument and returns the index of the largest element.
public class IndexArray {

	public static void main(int[] arr) {
		int maxIndex = 0;
	    for (int i = 1; i < arr.length; i++) {
	        if (arr[i] > arr[maxIndex]) {
	            maxIndex = i;
	        }
	    }
	    System.out.println( maxIndex);

	}

}
