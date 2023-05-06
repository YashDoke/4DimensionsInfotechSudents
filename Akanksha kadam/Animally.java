class Animally{
    String name="tommy";
    String name1="Kittu";
    public static void main(String args[]){
        Doggy d=new Doggy();
        d.getName();
        Caty c=new Caty();
        c.getName();
    }
}
class Doggy extends Animally{
    public void getName(){
        System.out.println("Name of Dog :"+name);
    }
}
class Caty extends Animally{
    public void getName(){
        System.out.println("Name of Cat :"+name1);
    }
}