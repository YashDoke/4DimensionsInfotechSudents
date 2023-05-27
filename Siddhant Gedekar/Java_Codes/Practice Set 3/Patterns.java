public class Patterns {
    public static void main(String[] args){
        for(int i=10;i>0;i--){
            for(int j=i;j>0;j--){
                if(2*i-1 == i){
                    System.out.print("*");
                }
                else{
                    System.out.print(" ");
                }
            }System.out.println();
            // System.out.println(2*i-1);
            // if(i%2==1){
            //     for(int j=0;j<i;j++){
            //         System.out.print("*");
            //     }System.out.println();
            // }
            // else{
            //     for(int j=10;j>i;j--){
            //         System.out.print(" ");
            //     }System.out.println();
            // }
            // for(int k=0;k<i;k++){
            //     System.out.print(" ");
            // }
            // for(int j=i;j<10;j++){
            //     System.out.print(" *");
            // }System.out.println();
        }System.out.println();
    }
}
