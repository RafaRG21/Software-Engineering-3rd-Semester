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
    public partial class frmAdmin : Form
    {
        public frmAdmin()
        {
            InitializeComponent();
        }

        private void OpenFormChild(object formchild)
        {
            if (this.pnlAdminContainer.Controls.Count > 0)
                this.pnlAdminContainer.Controls.RemoveAt(0);
            Form fchild = formchild as Form;
            fchild.TopLevel = false;
            fchild.Dock = DockStyle.Fill;
            this.pnlAdminContainer.Controls.Add(fchild);
            this.pnlAdminContainer.Tag = fchild;
            fchild.Show();
        }

        private void btnLogout_Click(object sender, EventArgs e)
        {
            frmAdmin.ActiveForm.Close();
            frmRegister.ActiveForm.Show();
        }

        private void frmAdmin_Load(object sender, EventArgs e)
        {

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

        private void btnService_Click(object sender, EventArgs e)
        {
            OpenFormChild(new EditServices());
        }

        private void btnCustomer_Click(object sender, EventArgs e)
        {
            OpenFormChild(new CustomersData());
        }

        private void btnEmployee_Click(object sender, EventArgs e)
        {
            OpenFormChild(new EmployeesData());
        }

        private void btnPayments_Click(object sender, EventArgs e)
        {
            OpenFormChild(new UpdatePayments());
        }

        private void btnReport_Click(object sender, EventArgs e)
        {
            OpenFormChild(new FinancialReports());
        }

        private void btnSetting_Click(object sender, EventArgs e)
        {
            OpenFormChild(new Settings());
        }

        private void picLogo_Click(object sender, EventArgs e)
        {
            OpenFormChild(new AdminHome());
        }
    }
}
