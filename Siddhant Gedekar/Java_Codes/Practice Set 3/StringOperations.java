public class StringOperations {
    public static void main(String [] args){
        String str = "Hello, This is a new string";
        // Printing the length of the string
        // we use .length() function
        System.out.println("The length of the string is: "+str.length());
        // Printing Upper and Lower case of the string
        // toUpperCase() makes string into upper case
        System.out.println("String in upper case: "+str.toUpperCase());
        // toLowerCase() makes string into lower case
        System.out.println("String in lower case: "+str.toLowerCase());
        // Printing the index of substring
        System.out.println("Index of new is: "+str.indexOf("new"));

        // String Concatenation, it is done by + operator
        String first = "Siddhant";
        String last = "Gedeakar";
        System.out.println("After concatenation: "+(first+last));
        // Using concat() function to concatenate two strings
        System.out.println("Concatenation using concat() function: " + (first.concat(last)));
        int x = 10;
        int y = 20;
        int z = x + y;
        System.out.println("Addition of two numbers: "+z);
        String x1 = "10";
        String y1 = "20";
        String z1 = x1 + y1;
        System.out.println("Addition of two numbers except they are strings: "+z1);
        String x2 = "10";
        int y2 = 20;
        String z2 = x2+y2;
        System.out.println("Addition of string and number results in: "+z2);

        // Escape characters in Strings
        System.out.println("we are the so-called \"Viking\" from the earth.");
        System.out.println("we are the so-called \'Viking\' from the earth.");
        System.out.println("The character \\ is called backslash.");
        // Form Feed escape character
        System.out.println("This is a sample \f string");
        // Carriage Return escapse character
        System.out.println("This is a sample \r string");
        
        // Type casting
        // below is called widening casting
        // byte-->short-->char-->int-->float-->long-->double
        // below is called narrowing casting
        // double-->long-->float-->int-->char-->short-->byte
        // below is automatic type casting from byte to int
        byte a = 12;
        int b = a;
        System.out.println("Converting byte to int: "+b);

        // below is manual type casting from int to byte
        int c = 32;
        byte d = (byte) c;
        System.out.println("Converting int to byte: "+d);
    }
}
