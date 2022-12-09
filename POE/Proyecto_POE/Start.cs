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
    public partial class frmRegister : Form
    {
        public frmRegister()
        {
            InitializeComponent();
        }

        private void OpenFormChild(object formchild)
        {
            if (this.pnlStart.Controls.Count > 0)
                this.pnlStart.Controls.RemoveAt(0);
            Form fchild = formchild as Form;
            fchild.TopLevel = false;
            fchild.Dock = DockStyle.Fill;
            this.pnlStart.Controls.Add(fchild);
            this.pnlStart.Tag = fchild;
            fchild.Show();
        }

        private void btnAdmin_Click(object sender, EventArgs e)
        {        
            new frmAdminReg().ShowDialog();
        }

        private void btnUser_Click(object sender, EventArgs e)
        {
            new frmUserReg().ShowDialog();
        }

        private void btnClose_Click(object sender, EventArgs e)
        {
            Application.Exit();
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
    }
}
