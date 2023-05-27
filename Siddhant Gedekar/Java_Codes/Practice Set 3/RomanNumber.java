public class RomanNumber {
    public static void main(String [] args) {
        String r = "LVIIIV";
        String roman = "IVXLCDM";
        int value[] = {1,5,10,50,100,500,1000};
        int res=0;

        for(int i=0;i<r.length();i++){
            for(int j=0;j<roman.length();j++){
                if(r.charAt(i) == roman.charAt(j) && (value[j] < value[roman.indexOf(r.charAt(i))])){
                    res += value[roman.indexOf(r.charAt(i+1))]-value[j];
                    // i++;
                    System.out.println("<"+value[j]);
                    break;
                }
                if(r.charAt(i) == roman.charAt(j) && (value[j] >= value[roman.indexOf(r.charAt(i))])){
                    res += value[j];
                    System.out.println(">"+value[j]);
                }
            }
        }
        System.out.println(res);
    }
}