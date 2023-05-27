public class Removevowels {
    public static void main(String[] args) {
        char vowels[] = {'a','e','i','o','u'};
        String name = "My name is Siddhant Gedekar";
        name = name.toLowerCase();
        for(int i=0;i<vowels.length;i++){
            for(int j=i;j<name.length();j++){
                if(vowels[i]==name.charAt(j)){
                }
            }
        }
    }
}