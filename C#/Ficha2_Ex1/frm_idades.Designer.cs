namespace Ficha2_Ex1
{
    partial class Form1
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
            this.lbl_idades = new System.Windows.Forms.Label();
            this.txt_idades = new System.Windows.Forms.TextBox();
            this.btn_idades = new System.Windows.Forms.Button();
            this.lbl_situacao = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // lbl_idades
            // 
            this.lbl_idades.AutoSize = true;
            this.lbl_idades.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lbl_idades.Location = new System.Drawing.Point(125, 69);
            this.lbl_idades.Name = "lbl_idades";
            this.lbl_idades.Size = new System.Drawing.Size(72, 24);
            this.lbl_idades.TabIndex = 0;
            this.lbl_idades.Text = "Idades";
            // 
            // txt_idades
            // 
            this.txt_idades.Location = new System.Drawing.Point(261, 74);
            this.txt_idades.Multiline = true;
            this.txt_idades.Name = "txt_idades";
            this.txt_idades.Size = new System.Drawing.Size(147, 20);
            this.txt_idades.TabIndex = 1;
            this.txt_idades.TextChanged += new System.EventHandler(this.txt_idades_TextChanged);
            // 
            // btn_idades
            // 
            this.btn_idades.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btn_idades.Location = new System.Drawing.Point(117, 127);
            this.btn_idades.Name = "btn_idades";
            this.btn_idades.Size = new System.Drawing.Size(269, 41);
            this.btn_idades.TabIndex = 2;
            this.btn_idades.Text = "Classificar Idades";
            this.btn_idades.UseVisualStyleBackColor = true;
            this.btn_idades.Click += new System.EventHandler(this.btn_idades_Click);
            // 
            // lbl_situacao
            // 
            this.lbl_situacao.BackColor = System.Drawing.Color.DimGray;
            this.lbl_situacao.Location = new System.Drawing.Point(117, 220);
            this.lbl_situacao.Name = "lbl_situacao";
            this.lbl_situacao.Size = new System.Drawing.Size(269, 30);
            this.lbl_situacao.TabIndex = 3;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(519, 297);
            this.Controls.Add(this.lbl_situacao);
            this.Controls.Add(this.btn_idades);
            this.Controls.Add(this.txt_idades);
            this.Controls.Add(this.lbl_idades);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label lbl_idades;
        private System.Windows.Forms.TextBox txt_idades;
        private System.Windows.Forms.Button btn_idades;
        private System.Windows.Forms.Label lbl_situacao;
    }
}

