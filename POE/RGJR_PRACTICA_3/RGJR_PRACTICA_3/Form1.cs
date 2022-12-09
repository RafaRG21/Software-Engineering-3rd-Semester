using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace RGJR_PRACTICA_3
{
    public partial class frmPractica3 : Form
    {
        public frmPractica3()
        {
            InitializeComponent();
        }

        private void btnObtenerPromedio_Click(object sender, EventArgs e)
        {
            float calf1, calf2, calf3,media;
            string promedio;
            calf1 = float.Parse(txtCalificacion1.Text);
            calf2 = float.Parse(txtCalificacion2.Text);
            calf3 = float.Parse(txtCalificacion3.Text);
            media = (calf1 + calf2 + calf3) / 3;
            promedio = media.ToString();
            MessageBox.Show("El promedio del alumno/a es de: "+promedio, "Promedio Total", MessageBoxButtons.OK, MessageBoxIcon.Information);
        }

        private void btnCerrar_Click(object sender, EventArgs e)
        {
            Close();
        }
    }
}
