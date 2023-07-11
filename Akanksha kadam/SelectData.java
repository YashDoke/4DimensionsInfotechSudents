import java.sql.*;

public class SelectData{

    public static void main(String [] args){
        try{
        String url="jdbc:mysql://localhost:3306/newdb";
        String userName="root";
        String password="root";

        Class.forName("com.mysql.cj.jdbc.Driver");
        Connection connection= DriverManager.getConnection(url,userName,password);
        System.out.println("Connection succesfully.....");

        Statement statement=connection.createStatement();

        String sql="SELECT * from student";
        ResultSet resultSet=statement.executeQuery(sql);

        while(resultSet.next()){
            int stud_id=resultSet.getInt("stud_id");
            String first_name=resultSet.getString("first_name");
            String last_name=resultSet.getString("last_name");
            int age=resultSet.getInt("age");

            System.out.println("stud_id: " + stud_id + " ,name: " + first_name + " " + last_name + " , Age: " +age);
        }

        resultSet.close();
        statement.close();
        connection.close();

        }
    
        catch(SQLException e){
            System.err.println("Error in sql connection");
            e.printStackTrace();
        }
        catch(ClassNotFoundException ex){
            System.err.println("Driver not found");
            ex.printStackTrace();
        }
    }
    
}