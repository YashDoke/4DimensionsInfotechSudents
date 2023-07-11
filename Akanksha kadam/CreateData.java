import java.sql.Connection;
import java.sql.SQLException;
import java.sql.Statement;
import java.sql.DriverManager;

public class CreateData{
    public static void main(String [] args){

        String url="jdbc:mysql://localhost:3306/";
        String userName="root";
        String password="root";
        
        String dbName="newdb";

        Connection conn=null;
        Statement stmt=null;

        try{
            Class.forName("com.mysql.cj.jdbc.Driver");
            conn= DriverManager.getConnection(url,userName,password);
            System.out.println("Connection succesfully.....");

            stmt =conn.createStatement();

            stmt.executeUpdate("DROP DATABASE "+dbName);
            System.out.println("Database deleted succesfully....");

            String sql= "CREATE DATABASE " + dbName;
            stmt.executeUpdate(sql);
            System.out.println("Database created succesfully...");

            stmt.executeUpdate("USE " + dbName);

            String createTable="CREATE TABLE student(stud_id int(20), first_name varchar(30), last_name varchar(30),age int(10))";

             
            stmt.executeUpdate(createTable);

            System.out.println("Table created succesfully...");

            conn.close();
        }
        catch(SQLException e){
            System.out.println("Error in connection");
            e.printStackTrace();
        }
        catch(ClassNotFoundException ex){
            System.out.println("Jdbc driver not found");
            ex.printStackTrace();
        }
        finally{
            try{
                if(stmt !=null)
                stmt.close();
            }
            catch(SQLException se2){

            }

            try{
                if(conn !=null)
                conn.close();
            }
            catch(SQLException se){
             se.printStackTrace();
            }
        }
    }
}