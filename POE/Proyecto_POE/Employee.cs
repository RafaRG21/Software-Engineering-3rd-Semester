using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Runtime.InteropServices;

namespace Proyecto_POE
{
    public partial class frmEmployee : Form
    {
        public frmEmployee()
        {
            InitializeComponent();
        }

        private void OpenFormChild(object formchild)
        {
            if (this.pnlUserContainer.Controls.Count > 0)
                this.pnlUserContainer.Controls.RemoveAt(0);
            Form fchild = formchild as Form;
            fchild.TopLevel = false;
            fchild.Dock = DockStyle.Fill;
            this.pnlUserContainer.Controls.Add(fchild);
            this.pnlUserContainer.Tag = fchild;
            fchild.Show();
        }

        private void btnLogout_Click(object sender, EventArgs e)
        {
            frmEmployee.ActiveForm.Close();
            frmRegister.ActiveForm.Close();
        }

        [DllImport("user32.DLL", EntryPoint = "ReleaseCapture")]
        private extern static void ReleaseCapture();
        [DllImport("user32.DLL", EntryPoint = "SendMessage")]
        private extern static void SendMessage(System.IntPtr hWind, int wMsg, int wParam, int lParam);

        private void pnlTitleBar_MouseDown(object sender, MouseEventArgs e)
        {
            ReleaseCapture();
            SendMessage(this.Handle, 0x112, 0xf012, 0);
        }

        private void btnSale_Click(object sender, EventArgs e)
        {
            OpenFormChild(new NewSale());
        }

        private void btnCustomer_Click(object sender, EventArgs e)
        {
            OpenFormChild(new AddCustomer());
        }

        private void btnService_Click(object sender, EventArgs e)
        {
            OpenFormChild(new CheckServices());
        }

        private void btnReport_Click(object sender, EventArgs e)
        {
            OpenFormChild(new MyReports());
        }

        private void picLogo_Click(object sender, EventArgs e)
        {
            OpenFormChild(new UserHome());
        }
    }
}
