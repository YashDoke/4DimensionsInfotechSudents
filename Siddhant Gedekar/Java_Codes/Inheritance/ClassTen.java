// Create an interface Instrument with a method play(). Create a class Piano that implements Instrument. Implement the method to print "Playing the piano". Create an interface StageProp with a method move(). Create a class PianoProp that implements both Instrument and StageProp. Implement the methods to print "Playing the piano" for play() and "Moving the piano" for move(). Create an instance of PianoProp and call both methods.
interface Instrument{
    void play();
}
class Piano implements Instrument{
    public void play(){
        System.out.println("Playing the Piano.");
    }
}
interface StageProp{
    void move();
}
class PianoProp implements StageProp, Instrument{
    public void play(){
        System.out.println("Playing the Piano.");
    }
    public void move(){
        System.out.println("Moving the Piano.");
    }
}

public class ClassTen {
    public static void main(String[] args) {
        PianoProp p = new PianoProp();
        p.play();
        p.move();
    }
}
