
namespace RGJR_practica1
{
    partial class frmPractica1
    {
        /// <summary>
        /// Variable del diseñador necesaria.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Limpiar los recursos que se estén usando.
        /// </summary>
        /// <param name="disposing">true si los recursos administrados se deben desechar; false en caso contrario.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Código generado por el Diseñador de Windows Forms

        /// <summary>
        /// Método necesario para admitir el Diseñador. No se puede modificar
        /// el contenido de este método con el editor de código.
        /// </summary>
        private void InitializeComponent()
        {
            this.lblDatos = new System.Windows.Forms.Label();
            this.btnMostrardatos = new System.Windows.Forms.Button();
            this.btnCerrar = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // lblDatos
            // 
            this.lblDatos.AutoSize = true;
            this.lblDatos.Location = new System.Drawing.Point(283, 67);
            this.lblDatos.Name = "lblDatos";
            this.lblDatos.Size = new System.Drawing.Size(178, 52);
            this.lblDatos.TabIndex = 0;
            this.lblDatos.Text = "Jose Rafael Ruiz Gudiño\r\n3° Semestre\r\nGrupo 3°P\r\nIngenieria en Desarrollo de Soft" +
    "ware\r\n";
            // 
            // btnMostrardatos
            // 
            this.btnMostrardatos.Location = new System.Drawing.Point(93, 233);
            this.btnMostrardatos.Name = "btnMostrardatos";
            this.btnMostrardatos.Size = new System.Drawing.Size(118, 23);
            this.btnMostrardatos.TabIndex = 1;
            this.btnMostrardatos.Text = "Mostrar datos";
            this.btnMostrardatos.UseVisualStyleBackColor = true;
            this.btnMostrardatos.Click += new System.EventHandler(this.btnMostrardatos_Click);
            // 
            // btnCerrar
            // 
            this.btnCerrar.Location = new System.Drawing.Point(602, 233);
            this.btnCerrar.Name = "btnCerrar";
            this.btnCerrar.Size = new System.Drawing.Size(75, 23);
            this.btnCerrar.TabIndex = 2;
            this.btnCerrar.Text = "Cerrar";
            this.btnCerrar.UseVisualStyleBackColor = true;
            this.btnCerrar.Click += new System.EventHandler(this.btnCerrar_Click);
            // 
            // frmPractica1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.btnCerrar);
            this.Controls.Add(this.btnMostrardatos);
            this.Controls.Add(this.lblDatos);
            this.Name = "frmPractica1";
            this.Text = "Practica 1";
            this.Load += new System.EventHandler(this.frmPractica1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label lblDatos;
        private System.Windows.Forms.Button btnMostrardatos;
        private System.Windows.Forms.Button btnCerrar;
    }
}

