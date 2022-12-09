using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace RGJR_practica1
{
    public partial class frmPractica1 : Form
    {
        public frmPractica1()
        {
            InitializeComponent();
        }

        private void frmPractica1_Load(object sender, EventArgs e)
        {
            lblDatos.Text = "";
        }

        private void btnMostrardatos_Click(object sender, EventArgs e)
        {
            lblDatos.Text = "Jose Rafael Ruiz Gudiño\n3er Semestre\nGrupo 3P\nIngenieria en Desarrollo de Software";
        }

        private void btnCerrar_Click(object sender, EventArgs e)
        {
            Close();
        }
    }
}
