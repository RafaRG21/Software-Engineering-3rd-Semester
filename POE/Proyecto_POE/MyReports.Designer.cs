
namespace Proyecto_POE
{
    partial class MyReports
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
            this.grpMyReports = new System.Windows.Forms.GroupBox();
            this.SuspendLayout();
            // 
            // grpMyReports
            // 
            this.grpMyReports.Font = new System.Drawing.Font("Segoe UI", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.grpMyReports.ForeColor = System.Drawing.Color.White;
            this.grpMyReports.Location = new System.Drawing.Point(12, 12);
            this.grpMyReports.Name = "grpMyReports";
            this.grpMyReports.Size = new System.Drawing.Size(953, 608);
            this.grpMyReports.TabIndex = 0;
            this.grpMyReports.TabStop = false;
            this.grpMyReports.Text = "My Reports";
            // 
            // MyReports
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.DarkSlateBlue;
            this.ClientSize = new System.Drawing.Size(977, 632);
            this.Controls.Add(this.grpMyReports);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.None;
            this.Name = "MyReports";
            this.Text = "MyReports";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.GroupBox grpMyReports;
    }
}