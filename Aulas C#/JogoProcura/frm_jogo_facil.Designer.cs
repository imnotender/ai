namespace JogoProcura
{
    partial class frm_jogo_facil
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
            this.img_galinha = new System.Windows.Forms.PictureBox();
            ((System.ComponentModel.ISupportInitialize)(this.img_galinha)).BeginInit();
            this.SuspendLayout();
            // 
            // img_galinha
            // 
            this.img_galinha.Image = global::JogoProcura.Properties.Resources.hen_64;
            this.img_galinha.Location = new System.Drawing.Point(292, 130);
            this.img_galinha.Name = "img_galinha";
            this.img_galinha.Size = new System.Drawing.Size(64, 64);
            this.img_galinha.TabIndex = 0;
            this.img_galinha.TabStop = false;
            this.img_galinha.WaitOnLoad = true;
            this.img_galinha.Click += new System.EventHandler(this.img_galinha_Click);
//            this.img_galinha.MouseClick += new System.Windows.Forms.MouseEventHandler(this.img_galinha_MouseClick);
            // 
            // frm_jogo_facil
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.img_galinha);
            this.Name = "frm_jogo_facil";
            this.Text = "Jogo da Procura | Modo Fácil";
            this.Load += new System.EventHandler(this.frm_jogo_Load);
            this.MouseClick += new System.Windows.Forms.MouseEventHandler(this.frm_jogo_facil_MouseClick);
            ((System.ComponentModel.ISupportInitialize)(this.img_galinha)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.PictureBox img_galinha;
    }
}