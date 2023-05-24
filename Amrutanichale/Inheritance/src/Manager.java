class Team1 extends Manager{
	String str="Testing team";
}
class Team2 extends Manager{
	String str2="Development team";
}
public class Manager {
	String ProjectName="JVM";
	public static void main(String[] args) {
		Team1 t1=new Team1();
		
		System.out.println(t1.ProjectName);
		System.out.println(t1.str);
		
		Team2 t2=new Team2();
		System.out.println(t2.ProjectName);
		System.out.println(t2.str2);

	}

}
