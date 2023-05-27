public class FindLargest {
    public static void main(String[] args) {
        int a=10,b=23,c=12;
        if(a>b & a>c){
            System.out.println("A is greater: "+a);
        }
        else if(b>a & b>c){
            System.out.println("B is greater: "+b);
        }
        else{
            System.out.println("C is greater: "+c);
        }
    }
}
