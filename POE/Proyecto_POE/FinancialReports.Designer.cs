
namespace Proyecto_POE
{
    partial class FinancialReports
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
            System.Windows.Forms.DataVisualization.Charting.ChartArea chartArea3 = new System.Windows.Forms.DataVisualization.Charting.ChartArea();
            System.Windows.Forms.DataVisualization.Charting.Legend legend3 = new System.Windows.Forms.DataVisualization.Charting.Legend();
            System.Windows.Forms.DataVisualization.Charting.Series series3 = new System.Windows.Forms.DataVisualization.Charting.Series();
            this.grpFinancial = new System.Windows.Forms.GroupBox();
            this.chart1 = new System.Windows.Forms.DataVisualization.Charting.Chart();
            this.lblPeriod = new System.Windows.Forms.Label();
            this.lblChart = new System.Windows.Forms.Label();
            this.comboBox1 = new System.Windows.Forms.ComboBox();
            this.comboBox2 = new System.Windows.Forms.ComboBox();
            this.grpFinancial.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.chart1)).BeginInit();
            this.SuspendLayout();
            // 
            // grpFinancial
            // 
            this.grpFinancial.Controls.Add(this.comboBox2);
            this.grpFinancial.Controls.Add(this.comboBox1);
            this.grpFinancial.Controls.Add(this.lblChart);
            this.grpFinancial.Controls.Add(this.lblPeriod);
            this.grpFinancial.Controls.Add(this.chart1);
            this.grpFinancial.Font = new System.Drawing.Font("Segoe UI", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.grpFinancial.ForeColor = System.Drawing.Color.White;
            this.grpFinancial.Location = new System.Drawing.Point(12, 12);
            this.grpFinancial.Name = "grpFinancial";
            this.grpFinancial.Size = new System.Drawing.Size(953, 608);
            this.grpFinancial.TabIndex = 0;
            this.grpFinancial.TabStop = false;
            this.grpFinancial.Text = "Financial Reports";
            // 
            // chart1
            // 
            chartArea3.Name = "ChartArea1";
            this.chart1.ChartAreas.Add(chartArea3);
            legend3.Name = "Legend1";
            this.chart1.Legends.Add(legend3);
            this.chart1.Location = new System.Drawing.Point(139, 243);
            this.chart1.Name = "chart1";
            series3.ChartArea = "ChartArea1";
            series3.Legend = "Legend1";
            series3.Name = "Series1";
            this.chart1.Series.Add(series3);
            this.chart1.Size = new System.Drawing.Size(674, 342);
            this.chart1.TabIndex = 0;
            this.chart1.Text = "chart1";
            // 
            // lblPeriod
            // 
            this.lblPeriod.AutoSize = true;
            this.lblPeriod.Location = new System.Drawing.Point(186, 64);
            this.lblPeriod.Name = "lblPeriod";
            this.lblPeriod.Size = new System.Drawing.Size(66, 25);
            this.lblPeriod.TabIndex = 1;
            this.lblPeriod.Text = "Period";
            // 
            // lblChart
            // 
            this.lblChart.AutoSize = true;
            this.lblChart.Location = new System.Drawing.Point(443, 64);
            this.lblChart.Name = "lblChart";
            this.lblChart.Size = new System.Drawing.Size(102, 25);
            this.lblChart.TabIndex = 2;
            this.lblChart.Text = "Chart Type";
            // 
            // comboBox1
            // 
            this.comboBox1.FormattingEnabled = true;
            this.comboBox1.Location = new System.Drawing.Point(267, 61);
            this.comboBox1.Name = "comboBox1";
            this.comboBox1.Size = new System.Drawing.Size(170, 33);
            this.comboBox1.TabIndex = 3;
            // 
            // comboBox2
            // 
            this.comboBox2.FormattingEnabled = true;
            this.comboBox2.Location = new System.Drawing.Point(551, 61);
            this.comboBox2.Name = "comboBox2";
            this.comboBox2.Size = new System.Drawing.Size(164, 33);
            this.comboBox2.TabIndex = 4;
            // 
            // FinancialReports
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.DarkSlateBlue;
            this.ClientSize = new System.Drawing.Size(977, 632);
            this.Controls.Add(this.grpFinancial);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.None;
            this.Name = "FinancialReports";
            this.Text = "FinancialReports";
            this.grpFinancial.ResumeLayout(false);
            this.grpFinancial.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.chart1)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.GroupBox grpFinancial;
        private System.Windows.Forms.ComboBox comboBox2;
        private System.Windows.Forms.ComboBox comboBox1;
        private System.Windows.Forms.Label lblChart;
        private System.Windows.Forms.Label lblPeriod;
        private System.Windows.Forms.DataVisualization.Charting.Chart chart1;
    }
}