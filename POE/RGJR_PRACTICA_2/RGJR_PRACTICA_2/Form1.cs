using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace RGJR_PRACTICA_2
{
    public partial class frmPractica2 : Form
    {
        public frmPractica2()
        {
            InitializeComponent();
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void btnCambiarcolor_Click(object sender, EventArgs e)
        {
            lblCambio.Text = txtFrase.Text;
            lblCambio.ForeColor = Color.FromArgb(0, 139, 139);
            lblCambio.Font = new Font("Verdana", 28);
        }

        private void frmPractica2_Load(object sender, EventArgs e)
        {
            lblCambio.Text = "";
        }
    }
}
