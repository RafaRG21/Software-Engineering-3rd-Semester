using System;
using System.Collections.Generic;
using System.Data;
using System.Data.SqlClient;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Proyecto_POE
{
    class SQLcarwash
    {
        private String id;
        private String password;

        public SQLcarwash()
        {
            
        }
        
        public String getId()
        {
            return id;
        }

        public String getPassword()
        {
            return password;
        }

        public void Search( string Query, string search)
        {
            String query = Query + "'" + search + "'";
            SqlConnection sqlCon = new SqlConnection(@"Data Source=ROG-GL503VM; Initial Catalog=Carwash;Integrated Security=True;");
            SqlDataAdapter sqlDataAdapter = new SqlDataAdapter(query, sqlCon);

            DataTable table = new DataTable();

            sqlCon.Open();       

            if (sqlCon.State == ConnectionState.Open)
            {
                sqlDataAdapter.Fill(table);

                foreach (DataRow row in table.Rows)
                {
                    this.id = row.Field<String>("ID");
                    this.password = row.Field<String>("Password");
                }
            }
            sqlCon.Close();
        }

        public void ChangeAdminPass(string password)
        {         
            SqlConnection sqlCon = new SqlConnection(@"Data Source=ROG-GL503VM; Initial Catalog=Carwash;Integrated Security=True;");
            SqlDataAdapter adapter = new SqlDataAdapter();
            SqlCommand change = new SqlCommand("UPDATE LoginAdmin SET Password = '" + password + "'", sqlCon);
            sqlCon.Open();
            adapter.UpdateCommand = new SqlCommand("UPDATE LoginAdmin SET Password = '" + password + "'", sqlCon);
            adapter.UpdateCommand.ExecuteNonQuery();
            sqlCon.Close();
        }
    }
}