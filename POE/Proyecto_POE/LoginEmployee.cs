using System;
using System.Windows.Forms;
using System.Runtime.InteropServices;

namespace Proyecto_POE
{
    public partial class frmUserReg : Form
    {
        public frmUserReg()
        {
            InitializeComponent();
        }

        private void btnSubmit_Click(object sender, EventArgs e)
        {
            SQLcarwash login = new SQLcarwash();
            login.Search("SELECT * FROM LoginUser WHERE ID LIKE ", txbEmp.Text);
            String admin = login.getId();
            String pass = login.getPassword();

            if ((admin == txbEmp.Text) && (pass == txbPass.Text))
            {
                frmEmployee f = new frmEmployee();
                frmEmployee.ActiveForm.Hide();
                f.ShowDialog();
                Close();
            }
            else
            {
                lblInfo.Text = "Usuario o Contraseña Incorrectos";
            }        
        }

        private void btnClose_Click(object sender, EventArgs e)
        {
            Close();
        }

        [DllImport("user32.DLL", EntryPoint = "ReleaseCapture")]
        private extern static void ReleaseCapture();
        [DllImport("user32.DLL", EntryPoint = "SendMessage")]
        private extern static void SendMessage(System.IntPtr hWind, int wMsg, int wParam, int lParam);

        private void pnlSide_MouseDown(object sender, MouseEventArgs e)
        {
            ReleaseCapture();
            SendMessage(this.Handle, 0x112, 0xf012, 0);
        }
    }
}
