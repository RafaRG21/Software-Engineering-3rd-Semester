
namespace RGJR_PRACTICA_3
{
    partial class frmPractica3
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
            this.lblMateria1 = new System.Windows.Forms.Label();
            this.lblMateria2 = new System.Windows.Forms.Label();
            this.lblMateria3 = new System.Windows.Forms.Label();
            this.txtCalificacion3 = new System.Windows.Forms.TextBox();
            this.txtCalificacion2 = new System.Windows.Forms.TextBox();
            this.txtCalificacion1 = new System.Windows.Forms.TextBox();
            this.btnObtenerPromedio = new System.Windows.Forms.Button();
            this.btnCerrar = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // lblMateria1
            // 
            this.lblMateria1.AutoSize = true;
            this.lblMateria1.Font = new System.Drawing.Font("Times New Roman", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblMateria1.Location = new System.Drawing.Point(46, 87);
            this.lblMateria1.Name = "lblMateria1";
            this.lblMateria1.Size = new System.Drawing.Size(158, 19);
            this.lblMateria1.TabIndex = 0;
            this.lblMateria1.Text = "Calificación Materia 1";
            // 
            // lblMateria2
            // 
            this.lblMateria2.AutoSize = true;
            this.lblMateria2.Font = new System.Drawing.Font("Times New Roman", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblMateria2.Location = new System.Drawing.Point(320, 87);
            this.lblMateria2.Name = "lblMateria2";
            this.lblMateria2.Size = new System.Drawing.Size(158, 19);
            this.lblMateria2.TabIndex = 1;
            this.lblMateria2.Text = "Calificación Materia 2";
            // 
            // lblMateria3
            // 
            this.lblMateria3.AutoSize = true;
            this.lblMateria3.Font = new System.Drawing.Font("Times New Roman", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblMateria3.ForeColor = System.Drawing.SystemColors.ControlText;
            this.lblMateria3.Location = new System.Drawing.Point(582, 87);
            this.lblMateria3.Name = "lblMateria3";
            this.lblMateria3.Size = new System.Drawing.Size(158, 19);
            this.lblMateria3.TabIndex = 2;
            this.lblMateria3.Text = "Calificación Materia 3";
            // 
            // txtCalificacion3
            // 
            this.txtCalificacion3.Location = new System.Drawing.Point(586, 122);
            this.txtCalificacion3.Name = "txtCalificacion3";
            this.txtCalificacion3.Size = new System.Drawing.Size(100, 20);
            this.txtCalificacion3.TabIndex = 3;
            // 
            // txtCalificacion2
            // 
            this.txtCalificacion2.Location = new System.Drawing.Point(324, 122);
            this.txtCalificacion2.Name = "txtCalificacion2";
            this.txtCalificacion2.Size = new System.Drawing.Size(100, 20);
            this.txtCalificacion2.TabIndex = 4;
            // 
            // txtCalificacion1
            // 
            this.txtCalificacion1.Location = new System.Drawing.Point(50, 122);
            this.txtCalificacion1.Name = "txtCalificacion1";
            this.txtCalificacion1.Size = new System.Drawing.Size(100, 20);
            this.txtCalificacion1.TabIndex = 5;
            // 
            // btnObtenerPromedio
            // 
            this.btnObtenerPromedio.Location = new System.Drawing.Point(324, 219);
            this.btnObtenerPromedio.Name = "btnObtenerPromedio";
            this.btnObtenerPromedio.Size = new System.Drawing.Size(113, 23);
            this.btnObtenerPromedio.TabIndex = 6;
            this.btnObtenerPromedio.Text = "Obtener Promedio";
            this.btnObtenerPromedio.UseVisualStyleBackColor = true;
            this.btnObtenerPromedio.Click += new System.EventHandler(this.btnObtenerPromedio_Click);
            // 
            // btnCerrar
            // 
            this.btnCerrar.Location = new System.Drawing.Point(324, 278);
            this.btnCerrar.Name = "btnCerrar";
            this.btnCerrar.Size = new System.Drawing.Size(75, 23);
            this.btnCerrar.TabIndex = 7;
            this.btnCerrar.Text = "Cerrar ";
            this.btnCerrar.UseVisualStyleBackColor = true;
            this.btnCerrar.Click += new System.EventHandler(this.btnCerrar_Click);
            // 
            // frmPractica3
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.btnCerrar);
            this.Controls.Add(this.btnObtenerPromedio);
            this.Controls.Add(this.txtCalificacion1);
            this.Controls.Add(this.txtCalificacion2);
            this.Controls.Add(this.txtCalificacion3);
            this.Controls.Add(this.lblMateria3);
            this.Controls.Add(this.lblMateria2);
            this.Controls.Add(this.lblMateria1);
            this.Name = "frmPractica3";
            this.Text = "Práctica 3";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label lblMateria1;
        private System.Windows.Forms.Label lblMateria2;
        private System.Windows.Forms.Label lblMateria3;
        private System.Windows.Forms.TextBox txtCalificacion3;
        private System.Windows.Forms.TextBox txtCalificacion2;
        private System.Windows.Forms.TextBox txtCalificacion1;
        private System.Windows.Forms.Button btnObtenerPromedio;
        private System.Windows.Forms.Button btnCerrar;
    }
}

