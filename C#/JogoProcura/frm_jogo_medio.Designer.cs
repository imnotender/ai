namespace JogoProcura
{
    partial class frm_jogo_medio
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
            this.components = new System.ComponentModel.Container();
            this.timer = new System.Windows.Forms.Timer(this.components);
            this.img_galinha = new System.Windows.Forms.PictureBox();
            ((System.ComponentModel.ISupportInitialize)(this.img_galinha)).BeginInit();
            this.SuspendLayout();
            // 
            // timer
            // 
            this.timer.Interval = 1500;
            this.timer.Tick += new System.EventHandler(this.timer1_Tick);
            // 
            // img_galinha
            // 
            this.img_galinha.BackColor = System.Drawing.Color.Transparent;
            this.img_galinha.Cursor = System.Windows.Forms.Cursors.Hand;
            this.img_galinha.Image = global::JogoProcura.Properties.Resources.blank_64;
            this.img_galinha.Location = new System.Drawing.Point(292, 130);
            this.img_galinha.Name = "img_galinha";
            this.img_galinha.Size = new System.Drawing.Size(64, 64);
            this.img_galinha.TabIndex = 0;
            this.img_galinha.TabStop = false;
            this.img_galinha.WaitOnLoad = true;
            this.img_galinha.Click += new System.EventHandler(this.img_galinha_Click);
            // 
            // frm_jogo_medio
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.ControlDark;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.img_galinha);
            this.Cursor = System.Windows.Forms.Cursors.Cross;
            this.Name = "frm_jogo_medio";
            this.Text = "Jogo";
            this.Load += new System.EventHandler(this.frm_jogo_Load);
            this.KeyDown += new System.Windows.Forms.KeyEventHandler(this.frm_jogo_medio_KeyDown);
            ((System.ComponentModel.ISupportInitialize)(this.img_galinha)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.PictureBox img_galinha;
        private System.Windows.Forms.Timer timer;
    }
}