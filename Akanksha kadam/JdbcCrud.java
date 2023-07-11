import java.sql.*;
import java.util.Scanner;
public class JdbcCrud {
     private static void createDatabase(Statement stmt,String dbname ) throws SQLException
     {
        try{
            String sql = "CREATE DATABASE " + dbname;

            stmt.executeUpdate(sql);

            System.out.println(dbname+" Database created successfully...");
        }
        catch(SQLException e){
            System.err.println(e);
            // e.printStackTrace();
            
        }finally {
            try {
                if (stmt != null)
                    stmt.close();
            } catch (SQLException se2) {
            
            } // nothing we can do

            
        }
     }
     private static void displayDatabases(Connection connection) throws SQLException {
        DatabaseMetaData metaData = connection.getMetaData();
        ResultSet resultSet = metaData.getCatalogs();

        System.out.println("Existing Databases:");
        while (resultSet.next()) {
            String dbname = resultSet.getString(1);
            System.out.println("- " + dbname);
        }

        resultSet.close();
    }
    private static Connection getConnection(String dbname) throws SQLException {
        String url = "jdbc:mysql://localhost:3306/" + dbname;
        String userName = "root";
        String password = "root";

        return DriverManager.getConnection(url, userName, password);
    }







    public static void selectDatabase() throws SQLException, ClassNotFoundException {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the Database Name:");
        String databaseName = scanner.nextLine();

        try (Connection connection = getConnection(databaseName);
             Statement statement = connection.createStatement()) {
            System.out.println("Connection successfully established.");

            String sql = "SELECT * from student";
            ResultSet resultSet = statement.executeQuery(sql);

            while (resultSet.next()) {
                int stud_id = resultSet.getInt("stud_id");
                String first_name = resultSet.getString("first_name");
                String last_name = resultSet.getString("last_name");
                //int age = resultSet.getInt("age");

                System.out.println("stud_id: " + stud_id + ", name: " + first_name + " " + last_name + "");
            }

            resultSet.close();
        }
    }


    






     




    private static void insertData(int Stud_id,String first_name,String last_name,String  dbasename)throws SQLException
        {
            String sql="INSERT INTO student (stud_id,first_name,last_name)VALUES (?,?,?,?)";
            // getConnection(dbasename);
            Connection connection = getConnection(dbasename);
            System.out.println("Connection successfully established.");

            try(PreparedStatement preparedStatement=connection.prepareStatement(sql) ){

                preparedStatement.setInt(1,Stud_id );
                preparedStatement.setString(2,first_name);
                preparedStatement.setString(3, last_name);
               // preparedStatement.setDouble(4, age);

                int rowsInserted=preparedStatement.executeUpdate();
                if(rowsInserted>0){
                    System.out.println("Students data Inserted successfully......");
                }else{
                    System.out.println("Failed to insert data......");
                }
            }
             String alterSql = "ALTER TABLE student ADD COLUMN new_column VARCHAR(50)";
             try (Statement statement = connection.createStatement()) {
            statement.executeUpdate(alterSql);
            
            System.out.println("New column added successfully.");
    }
            
        }
        private static void updateData(int stud_id,String dbasename) throws SQLException
         {
            String sql = "UPDATE student SET age = ? WHERE stud_id = ?";
            Connection connection = getConnection(dbasename);
            System.out.println("Connection successfully established.");
            try (PreparedStatement preparedStatement = connection.prepareStatement(sql))
             {
                //preparedStatement.setInt(1, age);
                preparedStatement.setInt(2, stud_id);
    
                int rowsUpdated = preparedStatement.executeUpdate();
                if (rowsUpdated > 0) {
                    System.out.println("Student data updated successfully.");
                }
            }
        }
       

            public static void dropRow(int stud_id, String dbasename) throws SQLException {
                String sql = "DELETE FROM student WHERE stud_id = ?";
                Connection connection = getConnection(dbasename);
                System.out.println("Connection successfully established.");
            
                try (PreparedStatement preparedStatement = connection.prepareStatement(sql)) {
                    preparedStatement.setInt(1, stud_id);
            
                    int rowdrop= preparedStatement.executeUpdate();
                    if (rowdrop > 0) {
                        System.out.println("Student row deleted successfully.");
                    } 
                }
            }
            
            public static void dropColumn(String columnName, String dbasename) throws SQLException {
                String sql = "ALTER TABLE student DROP COLUMN " + columnName;
                Connection connection = getConnection(dbasename);
                System.out.println("Connection successfully established.");
            
                try (Statement statement = connection.createStatement()) {
                    statement.executeUpdate(sql);
                    System.out.println("Column  dropped successfully.");
                }
            }
            



        
        
        public static void dropData(Statement stmt,String dbasename)throws SQLException{
            //Connection connection = getConnection(dbasename);
            try{
                
                String sql = "DROP DATABASE " + dbasename;
                stmt.executeUpdate(sql);
                System.out.println("Database deleted Successfully ");
            }catch(SQLException e){
                    System.out.println(e);
                    e.printStackTrace();
            }
        }
    
           
        
      

public static void main(String [] args){

    try{
            Scanner sc = new Scanner(System.in);
            Class.forName("com.mysql.cj.jdbc.Driver");

            String url = "jdbc:mysql://localhost:3306/";
            String username = "root";
            String password = "root";
            Connection connection = DriverManager.getConnection(url, username, password);
            System.out.println("Databse Connection Succesfully");
            Statement stmt = connection.createStatement();

            boolean A = true;
           
            String dbasename = "";
            while(A){
            System.out.println("1)Create New Databse\n2)Choose Exsting Databse\n3)Exit");
            int choice = sc.nextInt();
           
            switch (choice){
                case 1:
                    System.out.println("Enter new Database Name:");
                    String dbname = sc.next();
                    createDatabase(stmt,dbname);

                    break;
                case 2:  displayDatabases(connection);
                         selectDatabase();
                         System.out.println("1) Insert DataBase 2) Update DataBase 3) Drop DataBase");
                         int ch=sc.nextInt();
                         Scanner scanner = new Scanner(System.in);
                         switch(ch){
                            case 1:
                                    System.out.println("Insert Data into :"+dbasename);
                                    
                                    dbasename=scanner.next();
                                    System.out.print("Enter the number of values: ");
                                    int n = scanner.nextInt();
                                    int age,stud_id;
                                    String first_name,last_name;
                                    for (int i = 0; i < n; i++) {
                                    stud_id = scanner.nextInt();
                                    first_name = scanner.next();
                                    last_name= scanner.next();
                                    age=scanner.nextInt();
                                    insertData(stud_id,first_name , last_name,  dbasename);
                                    }
                        
                                     break;
                            case 2:
                                    System.out.println("UPDATE Data into :"+dbasename);
                                    dbasename=scanner.next();       
                                    updateData(102,dbasename);
                                    break;
                         
                            case 3:
                                    System.out.println("1) DROP ROW in table 2) DROP COULMN in table 3) Drop DataBase");
                                    int dropch=sc.nextInt();
                                    //Scanner scanner = new Scanner(System.in);
                                    switch(dropch)
                                    {
                                        case 1:
                                                dbasename=scanner.next();
                                                 System.out.println("Enter the id of the row to drop:");
                                                
                                                 int stud_idToDrop = sc.nextInt();
                                                 dropRow(stud_idToDrop, dbasename);
                                                  break;
                                        case 2:
                                                 dbasename=scanner.next();
                                                System.out.println("Enter the column name to drop:");
                                                String columnNameToDrop = sc.next();
                                                dropColumn(columnNameToDrop, dbasename);
                                                break;
                                        case 3:
                                                 System.out.println("Enter the database name to drop:");
                                                dbasename = scanner.next();
                                                dropData(stmt, dbasename);
                                                break;
                        

                                    

                                        
                                    }
                         }
                            break;
             
             
                case 3:
                    A = false;
                    break;
            }
            
            }

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