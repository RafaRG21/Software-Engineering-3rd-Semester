
namespace Proyecto_POE
{
    partial class AddCustomer
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.grpAddCustomer = new System.Windows.Forms.GroupBox();
            this.SuspendLayout();
            // 
            // grpAddCustomer
            // 
            this.grpAddCustomer.Font = new System.Drawing.Font("Segoe UI", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.grpAddCustomer.ForeColor = System.Drawing.Color.White;
            this.grpAddCustomer.Location = new System.Drawing.Point(12, 12);
            this.grpAddCustomer.Name = "grpAddCustomer";
            this.grpAddCustomer.Size = new System.Drawing.Size(953, 608);
            this.grpAddCustomer.TabIndex = 0;
            this.grpAddCustomer.TabStop = false;
            this.grpAddCustomer.Text = "Add Customer";
            // 
            // AddCustomer
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.DarkSlateBlue;
            this.ClientSize = new System.Drawing.Size(977, 632);
            this.Controls.Add(this.grpAddCustomer);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.None;
            this.Name = "AddCustomer";
            this.Text = "AddCustomer";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.GroupBox grpAddCustomer;
    }
}