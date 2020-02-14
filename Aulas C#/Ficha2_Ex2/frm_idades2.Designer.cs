namespace Ficha2_Ex2
{
    partial class frm_idades2
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
            this.btn_idades = new System.Windows.Forms.Button();
            this.lbl_situacao = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // btn_idades
            // 
            this.btn_idades.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btn_idades.Location = new System.Drawing.Point(60, 32);
            this.btn_idades.Name = "btn_idades";
            this.btn_idades.Size = new System.Drawing.Size(189, 61);
            this.btn_idades.TabIndex = 0;
            this.btn_idades.Text = "Classificar Idades";
            this.btn_idades.UseVisualStyleBackColor = true;
            this.btn_idades.Click += new System.EventHandler(this.btn_idades_Click);
            // 
            // lbl_situacao
            // 
            this.lbl_situacao.BackColor = System.Drawing.SystemColors.ControlDarkDark;
            this.lbl_situacao.Location = new System.Drawing.Point(60, 148);
            this.lbl_situacao.Name = "lbl_situacao";
            this.lbl_situacao.Size = new System.Drawing.Size(189, 43);
            this.lbl_situacao.TabIndex = 1;
            this.lbl_situacao.Click += new System.EventHandler(this.lbl_situacao_Click);
            // 
            // frm_idades2
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(308, 241);
            this.Controls.Add(this.lbl_situacao);
            this.Controls.Add(this.btn_idades);
            this.Name = "frm_idades2";
            this.Text = "Idades";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button btn_idades;
        private System.Windows.Forms.Label lbl_situacao;
    }
}

