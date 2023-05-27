// check if char 'e' is present in umbrella
// Write a program to check if the word 'orange' is present in the "This is orange juice".
// Write a program to find the first and the last occurrence of the letter 'o' and character ',' in "Hello, World"
// Write the string after the first occurrence of ',' and the string after the last occurrence of ',' in the string "Hello, Good, Morning"
// Write a program that takes your full name as input and displays the abbreviations of the first and middle names except the last name which is displayed as it is. For example, if your name is Robert Brett Roser, then the output should be R.B.Roser.
// Write down the names of 10 of your friends in an array and then sort those in alphabetically ascending order.
// Write a program to delete all the consonents from the string "Hello, have a good day".
public class FourCharPresent {
    public static void main(String[] args) {
        String name = "Umbrella";
        String name2 = "This is orange juice";
        String name3 = "Hello, World";
        String name4 = "Hello, Good, Morning";
        String first = "Robert";
        String middle = "Brett";
        String last = "Roser";
        if(name.contains("e")){
            System.out.println("True");
        }
        else{
            System.out.println("False");
        }
        if(name2.contains("orange")){
            System.out.println("True");
        }
        else{
            System.out.println("False");
        }
        System.out.println(name3.indexOf("o"));
        System.out.println(name3.lastIndexOf("o"));
        System.out.println(name4.indexOf(","));
        System.out.println(name4.lastIndexOf(","));
        System.out.println(first.charAt(0)+". "+middle.charAt(0)+". "+last);
        // String one = "sid";
        // String two = "dove";
        // String three = "clove";
        // String four = "messi";
        String arr[] = {"sid","dove","clove","messi"};
        for(int i=0;i<arr.length;i++){
            for(int j=i+1;j<arr.length;j++){
                if(arr[i].charAt(0)>arr[j].charAt(0)){
                    String temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
            System.out.println(arr[i]);
        }
        String s = "Hello, have a good day";
        String s1[] = s.split("");
        String vowels[] = {"a","e","i","o","u"};
        // System.out.println(s.length());
        System.out.println("Removing Consonants, hope it works.");
        // if(s1[1].equals(consonants[1])){
        //     System.out.println("true");
        // }
        for(int i=0;i<s.length();i++){
            // Holding a single character from the string array s1
            // and comparing it with the vowels using below loop.
            for(int j=0;j<vowels.length;j++){
                // if character from s1 is equals to character in vowels
                // then we print that vowels, hence removing the consonants
                if(s1[i].equals(vowels[j])){
                    System.out.print(vowels[j]);
                }
            }
        }

        // Write a program to delete the word "the" in the sentence "This is the lion in the cage".
        String str = "This is the lion in the cage";
        String str1[] = str.split(" ");
        System.out.println();
        for(String i : str1){
            if(!i.equals("the")){
                System.out.print(i+" ");
            }
        }

        // Write a program to reverse a string with and without using strrev.
        for(int i=str.length()-1;i>=0;i--){
            System.out.print(str.charAt(i));
        }

        // Write a program to find the length of a string without using predefined String functions.
        // int i=1;
        // while(str.charAt(i)!='\0'){
        //     ++i;
        // }
        // System.out.println(i);
        // for(i=0;i!=i-1;i++){
        //     if(str.charAt(i) == '\0'){
        //         System.out.println(i+1);
        //         break;
        //     }
        // }

        // Check the occurrence of the letter 'e' and the word 'is' in the sentence "This is umbrella" without using predefined String functions
        String um = "This is umbrella";
        int count=0;
        for(int i=0;i<um.length();i++){
            if(um.charAt(i) == 'e'){
                count++;
            }
        }
        System.out.println("\nOccured "+count+" time.");

        String pal = "acca";
        int j = pal.length()-1;
        count = 0;
        for(int i=0;i<pal.length();i++){
            if(pal.charAt(i) == pal.charAt(j)){
                j--;
                count++;
            }
        }
        if(pal.length()==count){
            System.out.println("palindrome");
        }
        else{
            System.out.println("not");
        }

        // Write a program to check if the two strings entered by user are anagrams or not. Two words are said to be anagrams if the letters of one word can be rearranged to form the other word. For example, jaxa and ajax are anagrams of each other.
        String ana = "jaxa";
        String ana1 = "ajax";
        // int len = ana.length();
        int occur[];
        if(ana.length() == ana1.length()){
            occur = new int[ana.length()];
            for(int i=0;i<ana.length();i++){
                count = 0;
                for(j=0;j<ana.length();j++){
                    if(ana.charAt(i) == ana.charAt(j)){
                        count++;
                    }
                }
                occur[i] = count;
            }
            int a=1;
            for(int i=0;i<ana1.length();i++){
                count = 0;
                for(j=0;j<ana1.length();j++){
                    if(ana.charAt(i)==ana1.charAt(j)){
                        count++;
                    }
                }
                if(count == occur[i]){
                    a=1;
                    continue;
                }
                else{
                    a=0;
                    count=0;
                    System.out.println("Not an anagram.");
                    break;
                }
            }
            if(a == ana.length()){
                System.out.println("Anagram");
            }
        }
    }
}
