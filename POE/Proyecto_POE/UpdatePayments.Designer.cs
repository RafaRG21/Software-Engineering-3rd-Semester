
namespace Proyecto_POE
{
    partial class UpdatePayments
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
            this.grpExpenses = new System.Windows.Forms.GroupBox();
            this.grpCosts = new System.Windows.Forms.GroupBox();
            this.SuspendLayout();
            // 
            // grpExpenses
            // 
            this.grpExpenses.Font = new System.Drawing.Font("Segoe UI", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.grpExpenses.ForeColor = System.Drawing.Color.White;
            this.grpExpenses.Location = new System.Drawing.Point(12, 12);
            this.grpExpenses.Name = "grpExpenses";
            this.grpExpenses.Size = new System.Drawing.Size(953, 295);
            this.grpExpenses.TabIndex = 0;
            this.grpExpenses.TabStop = false;
            this.grpExpenses.Text = "Expenses";
            // 
            // grpCosts
            // 
            this.grpCosts.Font = new System.Drawing.Font("Segoe UI", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.grpCosts.ForeColor = System.Drawing.Color.White;
            this.grpCosts.Location = new System.Drawing.Point(12, 313);
            this.grpCosts.Name = "grpCosts";
            this.grpCosts.Size = new System.Drawing.Size(953, 307);
            this.grpCosts.TabIndex = 0;
            this.grpCosts.TabStop = false;
            this.grpCosts.Text = "Costs";
            // 
            // UpdatePayments
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.DarkSlateBlue;
            this.ClientSize = new System.Drawing.Size(977, 632);
            this.Controls.Add(this.grpCosts);
            this.Controls.Add(this.grpExpenses);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.None;
            this.Name = "UpdatePayments";
            this.Text = "UpdatePayments";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.GroupBox grpExpenses;
        private System.Windows.Forms.GroupBox grpCosts;
    }
}