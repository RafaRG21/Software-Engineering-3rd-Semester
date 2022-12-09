
namespace RGJR_PRACTICA_2
{
    partial class frmPractica2
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
            this.lbl_instruccion = new System.Windows.Forms.Label();
            this.txtFrase = new System.Windows.Forms.TextBox();
            this.btnCambiarcolor = new System.Windows.Forms.Button();
            this.lblCambio = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // lbl_instruccion
            // 
            this.lbl_instruccion.AutoSize = true;
            this.lbl_instruccion.Location = new System.Drawing.Point(28, 30);
            this.lbl_instruccion.Name = "lbl_instruccion";
            this.lbl_instruccion.Size = new System.Drawing.Size(139, 13);
            this.lbl_instruccion.TabIndex = 0;
            this.lbl_instruccion.Text = "Ingresa una palabra o frase:";
            // 
            // txtFrase
            // 
            this.txtFrase.Location = new System.Drawing.Point(31, 68);
            this.txtFrase.Name = "txtFrase";
            this.txtFrase.Size = new System.Drawing.Size(248, 20);
            this.txtFrase.TabIndex = 1;
            this.txtFrase.TextChanged += new System.EventHandler(this.textBox1_TextChanged);
            // 
            // btnCambiarcolor
            // 
            this.btnCambiarcolor.Location = new System.Drawing.Point(31, 133);
            this.btnCambiarcolor.Name = "btnCambiarcolor";
            this.btnCambiarcolor.Size = new System.Drawing.Size(82, 23);
            this.btnCambiarcolor.TabIndex = 2;
            this.btnCambiarcolor.Text = "Presione aquí";
            this.btnCambiarcolor.UseVisualStyleBackColor = true;
            this.btnCambiarcolor.Click += new System.EventHandler(this.btnCambiarcolor_Click);
            // 
            // lblCambio
            // 
            this.lblCambio.AutoSize = true;
            this.lblCambio.Location = new System.Drawing.Point(28, 246);
            this.lblCambio.Name = "lblCambio";
            this.lblCambio.Size = new System.Drawing.Size(81, 13);
            this.lblCambio.TabIndex = 3;
            this.lblCambio.Text = "Predeterminado";
            // 
            // frmPractica2
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.lblCambio);
            this.Controls.Add(this.btnCambiarcolor);
            this.Controls.Add(this.txtFrase);
            this.Controls.Add(this.lbl_instruccion);
            this.Name = "frmPractica2";
            this.Text = "Práctica 2";
            this.Load += new System.EventHandler(this.frmPractica2_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label lbl_instruccion;
        private System.Windows.Forms.TextBox txtFrase;
        private System.Windows.Forms.Button btnCambiarcolor;
        private System.Windows.Forms.Label lblCambio;
    }
}

