using System;
using System.Windows.Forms;
using System.Runtime.InteropServices;

namespace Proyecto_POE
{
    public partial class frmAdminReg : Form
    {
        public frmAdminReg()
        {
            InitializeComponent();
        }

        private void btnLogin_Click(object sender, EventArgs e)
        {
            SQLcarwash login = new SQLcarwash();
            login.Search("SELECT * FROM LoginAdmin WHERE ID LIKE ",txbAdmin.Text);
            String admin = login.getId();
            String pass = login.getPassword();

            if((admin == txbAdmin.Text) && (pass == txbPass.Text))
            {
                frmAdmin f = new frmAdmin();
                frmRegister.ActiveForm.Hide();
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
