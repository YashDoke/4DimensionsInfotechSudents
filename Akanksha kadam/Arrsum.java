public class Arrsum{
    public static void main(String args[]){
        int [] arr={1,2,3,4,5,6};
        int sum=0;
        for(int i=0;i<arr.length;i++){
            System.out.println(" "+arr[i]);
        }
     
        for(int i=0;i<arr.length;i++){
            sum+=arr[i];
        }
        System.out.println("Addition: "+sum);
    }
}