using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace RGJR_PRACTICA_4
{
    public partial class frmPractica4 : Form
    {
        public frmPractica4()
        {
            InitializeComponent();
        }

        private void btnCURP_Click(object sender, EventArgs e)
        {
            int v = 1, c = 1,cmaterno=1,cname=1;
            string apellidos, apellidopa, apellidoma, name, entidad,inicialm,consom;
            apellidopa = txtApellido.Text.ToUpper();
            apellidoma = txtApellidoMaterno.Text.ToUpper();
            entidad = txtEntidad.Text.ToUpper();
            name = txtNombre.Text.ToUpper();


            while (apellidopa[v] != 'A' && apellidopa[v] != 'E' && apellidopa[v] != 'I' && apellidopa[v] != 'O' && apellidopa[v] != 'U')
            {
                v++;
            };
            while (apellidopa[c] == 'A' || apellidopa[c] == 'E' || apellidopa[c] == 'I' || apellidopa[c] == 'O' || apellidopa[c] == 'U')
            {
                c++;
            };
            if (apellidoma.Length > 0)
            {
                while (apellidoma[cmaterno] == 'A' || apellidoma[cmaterno] == 'E' || apellidoma[cmaterno] == 'I' || apellidoma[cmaterno] == 'O' || apellidoma[cmaterno] == 'U')
                {
                    cmaterno++;
                };
            }
            while (name[cname] == 'A' || name[cname] == 'E' || name[cname] == 'I' || name[cname] == 'O' || name[cname] == 'U')
            {
                cname++;
            };
            switch (entidad)
            {
                case "AGUASCALIENTES": entidad = "AS"; break;
                case "BAJA CALIFORNIA": entidad = "BC"; break;
                case "BAJA CALIFORNIA SUR": entidad = "BS"; break;
                case "CAMPECHE": entidad = "CC"; break;
                case "CHIAPAS": entidad = "CS"; break;
                case "CHIHUAHUA": entidad = "CH"; break;
                case "CIUDAD DE MEXICO": entidad = "DF"; break;
                case "COAHUILA": entidad = "CL"; break;
                case "COLIMA": entidad = "CM"; break;
                case "DURANGO": entidad = "DG"; break;
                case "GUANAJUATO": entidad = "GT";break;
                case "GUERRERO": entidad = "GR"; break;
                case "HIDALGO": entidad = "HG"; break;
                case "JALISCO":entidad = "JC"; break;
                case "MEXICO": entidad = "MC"; break;
                case "MICHOACAN": entidad = "MN"; break;
                case "MORELOS": entidad = "MS"; break;
                case "NAYARIT": entidad = "NT"; break;
                case "NUEVO LEON": entidad = "NL"; break;
                case "OAXACA": entidad = "OC"; break;
                case "PUEBLA": entidad = "PL"; break;
                case "QUERETARO": entidad = "QO"; break;
                case "QUINTANA ROO": entidad = "QR"; break;
                case "SAN LUIS POTOSI": entidad = "SP"; break;
                case "SINALOA": entidad = "SL"; break;
                case "SONORA": entidad = "SR"; break;
                case "TABASCO": entidad = "TC"; break;
                case "TAMAULIPAS": entidad = "TS"; break;
                case "VERACRUZ": entidad = "VZ"; break;
                case "YUCATAN": entidad = "YN"; break;
                case "ZACATECAS": entidad = "ZS"; break;
                default: break;
            }


            if (apellidoma.Length > 0)
            {
                inicialm = apellidoma.Substring(0, 1); consom = apellidoma.Substring(cmaterno, 1);
            }
            else inicialm = ""; consom = "";
            apellidos = apellidopa.Substring(0, 1) + apellidopa.Substring(v, 1); // Iniciales del apellido paterno
            apellidos = apellidos + inicialm + name.Substring(0, 1);
            apellidos = apellidos + txtAño.Text.Substring(2, 2) + txtMes.Text + txtDia.Text + txtSexo.Text.Substring(0, 1).ToUpper();
            apellidos = apellidos + entidad+apellidopa.Substring(c,1) + consom + name.Substring(cname,1);
            lblCURP.Text = apellidos;
            lblCURP.ForeColor = Color.Green;
            lblCURP.Font = new Font("Arial", 25);
            
        }
        
        private void txtAño_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (!char.IsControl(e.KeyChar) && !char.IsDigit(e.KeyChar))
            {
                e.Handled = true;
            }
        }

        private void txtMes_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (!char.IsControl(e.KeyChar) && !char.IsDigit(e.KeyChar))
            {
                e.Handled = true;
            }
        }

        private void txtDia_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (!char.IsControl(e.KeyChar) && !char.IsDigit(e.KeyChar))
            {
                e.Handled = true;
            }
        }

        private void frmPractica4_Load(object sender, EventArgs e)
        {
            lblCURP.Text = "";
        }

        private void btnClean_Click(object sender, EventArgs e)
        {
            txtNombre.Text = "";
            txtApellido.Text = "";
            txtApellidoMaterno.Text = "";
            txtAño.Text = "";
            txtMes.Text = "";
            txtDia.Text = "";
            txtSexo.Text = "";
            txtEntidad.Text = "";
            lblCURP.Text = "";
        }
    }
}
