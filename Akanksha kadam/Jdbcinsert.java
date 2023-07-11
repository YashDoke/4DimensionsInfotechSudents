import java.net.SocketPermission;
import java.sql.Connection;
import java.sql.SQLException;
import java.sql.PreparedStatement;
import java.sql.DriverManager;

public class Jdbcinsert{

    private static void insertData(Connection connection,int stud_id,String first_name,String last_name,int age)throws SQLException{
    String sql="INSERT INTO student (stud_id,first_name,last_name,age)VALUES (?,?,?,?)";
    try(PreparedStatement preparedStatement=connection.prepareStatement(sql)){
        preparedStatement.setInt(1,stud_id );
        preparedStatement.setString(2,first_name);
        preparedStatement.setString(3, last_name);
        preparedStatement.setDouble(4, age);
        int rowsInserted=preparedStatement.executeUpdate();
        if(rowsInserted>0){
            System.out.println("Employee data Inserted successfully......");
        }
    }
}
 public static void main(String[] args) {
    try{
        Class.forName("com.mysql.cj.jdbc.Driver");


        String url="jdbc:mysql://localhost:3306/newdb";
        String username="root";
        String password="root";
        Connection connection=DriverManager.getConnection(url, username, password);
        System.out.println("Connection Established successfully....");
       
        insertData(connection, 101, "Akanksha", "kadam", 22);
       insertData(connection, 102, "Aditya", "kadam", 19);
       insertData(connection, 103, "Sumit", "kande", 23);
        insertData(connection, 104, "Sanket", "kande", 25);
        connection.close();

    }
    catch(ClassNotFoundException e){
        System.out.println("JDBC Driver Not Found....");
        e.printStackTrace();
    }catch(SQLException e){
        System.out.println("Error in Database Connection");
        e.printStackTrace();
    }
}
}