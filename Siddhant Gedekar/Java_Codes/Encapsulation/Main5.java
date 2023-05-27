class BankAccount{
    private int accountNumber;
    private double balance;
    private String accountHolder;

    public int getaccountNumber(){
        return accountNumber;
    }
    public String getHolderName(){
        return accountHolder;
    }
    public double getBalance(){
        return balance;
    }

    // set values
    public void setAccountNumber(int newAccountNumber){
        this.accountNumber = newAccountNumber;
    }
    public void setAccountHolder(String newHolder){
        this.accountHolder = newHolder;
    }
    public void setBalance(double newBalance){
        this.balance = newBalance;
        System.out.println("Current Balance: "+balance);
    }

    public void deposit(double newBalance){
        this.balance += newBalance;
        System.out.println("After Deposite Balance: "+balance);
    }
    public void withdrawl(double newBalance){
        if(newBalance > this.balance){
            System.out.println("Cannot withdrawl "+newBalance);
        }else{
            this.balance -= newBalance;
            System.out.println("After Withdrawl Balance: "+balance);
        }
    }
}

public class Main5 {
    public static void main(String[] args) {
        BankAccount ba = new BankAccount();
        ba.setAccountHolder("Sid");
        ba.setAccountNumber(123456789);
        ba.setBalance(10000);
        ba.deposit(5000);
        ba.withdrawl(5000);
    }
}
