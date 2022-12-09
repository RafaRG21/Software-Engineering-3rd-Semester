
namespace Proyecto_POE
{
    partial class UserHome
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
            this.grpUserHome = new System.Windows.Forms.GroupBox();
            this.SuspendLayout();
            // 
            // grpUserHome
            // 
            this.grpUserHome.Font = new System.Drawing.Font("Segoe UI", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.grpUserHome.ForeColor = System.Drawing.Color.White;
            this.grpUserHome.Location = new System.Drawing.Point(12, 12);
            this.grpUserHome.Name = "grpUserHome";
            this.grpUserHome.Size = new System.Drawing.Size(953, 608);
            this.grpUserHome.TabIndex = 0;
            this.grpUserHome.TabStop = false;
            this.grpUserHome.Text = "Home";
            // 
            // UserAlert
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.DarkSlateBlue;
            this.ClientSize = new System.Drawing.Size(977, 632);
            this.Controls.Add(this.grpUserHome);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.None;
            this.Name = "UserAlert";
            this.Text = "UserAlert";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.GroupBox grpUserHome;
    }
}