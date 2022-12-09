
namespace Proyecto_POE
{
    partial class AdminHome
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
            this.grpAlerts = new System.Windows.Forms.GroupBox();
            this.lblAdvertisements = new System.Windows.Forms.Label();
            this.grpAlerts.SuspendLayout();
            this.SuspendLayout();
            // 
            // grpAlerts
            // 
            this.grpAlerts.Controls.Add(this.lblAdvertisements);
            this.grpAlerts.ForeColor = System.Drawing.Color.White;
            this.grpAlerts.Location = new System.Drawing.Point(12, 12);
            this.grpAlerts.Name = "grpAlerts";
            this.grpAlerts.Size = new System.Drawing.Size(953, 608);
            this.grpAlerts.TabIndex = 0;
            this.grpAlerts.TabStop = false;
            this.grpAlerts.Text = "Home";
            // 
            // lblAdvertisements
            // 
            this.lblAdvertisements.AutoSize = true;
            this.lblAdvertisements.Location = new System.Drawing.Point(87, 112);
            this.lblAdvertisements.Name = "lblAdvertisements";
            this.lblAdvertisements.Size = new System.Drawing.Size(141, 25);
            this.lblAdvertisements.TabIndex = 0;
            this.lblAdvertisements.Text = "Advertisements";
            // 
            // AdminAlert
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(11F, 25F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.DarkSlateBlue;
            this.ClientSize = new System.Drawing.Size(977, 632);
            this.Controls.Add(this.grpAlerts);
            this.Font = new System.Drawing.Font("Segoe UI", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.ForeColor = System.Drawing.SystemColors.ActiveBorder;
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.None;
            this.Margin = new System.Windows.Forms.Padding(6, 6, 6, 6);
            this.Name = "AdminAlert";
            this.Text = "AdminAlert";
            this.grpAlerts.ResumeLayout(false);
            this.grpAlerts.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.GroupBox grpAlerts;
        private System.Windows.Forms.Label lblAdvertisements;
    }
}