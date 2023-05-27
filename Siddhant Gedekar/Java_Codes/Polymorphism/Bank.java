class Bank1{
    double rateoi;
    public void roi(double ri){
        System.out.println("Rate of Interest Method.");
    }
}

class SBI extends Bank1{
    public void roi(double ri){
        this.rateoi = ri;
        System.out.println("Rate of Interest Method.");
    }
}
class ICICI extends Bank1{
    public void roi(double ri){
        this.rateoi = ri;
        System.out.println("Rate of Interest Method.");
    }
}

public class Bank {
    
}
