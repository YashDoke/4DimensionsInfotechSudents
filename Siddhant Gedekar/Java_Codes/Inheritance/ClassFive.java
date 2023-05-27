// Create an interface Playable with a method play(). Create an interface Recordable with methods record() and stopRecording(). Create a class MP3Player that implements both Playable and Recordable. Implement the methods to print "Playing MP3" for play(), "Recording MP3" for record(), and "Stopping MP3 recording" for stopRecording(). Create an instance of MP3Player and call all methods.

interface Playable{
    void play();
}
interface Recordable{
    void record();
    void stopRecording();
}

class MP3Player implements Playable, Recordable{
    public void play() {
        System.out.println("Playing MP3.");
    }
    public void record(){
        System.out.println("Recording MP3.");
    }
    public void stopRecording(){
        System.out.println("Stopping MP3 Recording.");
    }
}

public class ClassFive {
    public static void main(String[] args) {
        MP3Player m = new MP3Player();
        m.play();
        m.record();
        m.stopRecording();
    }
}
