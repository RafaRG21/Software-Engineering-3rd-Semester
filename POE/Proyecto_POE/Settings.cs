using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Proyecto_POE
{
    public partial class Settings : Form
    {
        public Settings()
        {
            InitializeComponent();
        }

        private void btnChange_Click(object sender, EventArgs e)
        {
            SQLcarwash setting = new SQLcarwash();
            setting.Search("SELECT * FROM LoginAdmin WHERE Password LIKE ",txtpassword.Text);
            String pass = setting.getPassword();           

            if ((txtoldPassword.Text == txtoldPassword2.Text) && (txtpassword.Text == pass)) 
            {
                setting.ChangeAdminPass(txtpassword.Text);
                MessageBox.Show("Contraseña cambiada con exito", "Confirmacion", MessageBoxButtons.OK, MessageBoxIcon.Information);
            }else if ((txtoldPassword.Text != txtoldPassword2.Text))
            {
                MessageBox.Show(txtoldPassword.Text + " es diferente que " + txtoldPassword2.Text, "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
            else if ((txtpassword.Text != pass))
            {
                MessageBox.Show("Contraseña incorrecta", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }
    }
}
