class Car{
    private String make;
    private String model;
    private int year;

    public String getMake(){
        return make;
    }
    public String getModel(){
        return model;
    }
    public int getYear(){
        return year;
    }

    public void setMake(String newMake){
        this.make= newMake;
    }
    public void setModel(String newModel){
        this.model = newModel;
    }
    public void setYear(int newYear){
        this.year = newYear;
    }

    public void details(){
        System.out.println("Car detials:\n Make: "+make+"\n Model: "+model+"\n Year: "+year);
    }
}

public class Main4 {
    public static void main(String[] args) {
        Car c = new Car();
        c.setMake("Honda");
        c.setModel("Accord");
        c.setYear(1920);
        c.details();
    }
}
