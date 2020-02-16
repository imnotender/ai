namespace Ficha_1
{
    partial class frm_Ficha1ex1
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
            this.lbl_sinal = new System.Windows.Forms.Label();
            this.txt_n1 = new System.Windows.Forms.TextBox();
            this.txt_n2 = new System.Windows.Forms.TextBox();
            this.btn_soma = new System.Windows.Forms.Button();
            this.btn_subtracao = new System.Windows.Forms.Button();
            this.btn_multiplicacao = new System.Windows.Forms.Button();
            this.btn_divisao = new System.Windows.Forms.Button();
            this.lbl_res = new System.Windows.Forms.Label();
            this.lbl_resultado = new System.Windows.Forms.Label();
            this.btn_limpar = new System.Windows.Forms.Button();
            this.btn_autor = new System.Windows.Forms.Button();
            this.btn_sair = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // lbl_sinal
            // 
            this.lbl_sinal.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.lbl_sinal.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lbl_sinal.Location = new System.Drawing.Point(294, 47);
            this.lbl_sinal.Name = "lbl_sinal";
            this.lbl_sinal.Size = new System.Drawing.Size(71, 38);
            this.lbl_sinal.TabIndex = 0;
            this.lbl_sinal.Click += new System.EventHandler(this.label1_Click);
            // 
            // txt_n1
            // 
            this.txt_n1.Location = new System.Drawing.Point(101, 53);
            this.txt_n1.Name = "txt_n1";
            this.txt_n1.Size = new System.Drawing.Size(100, 20);
            this.txt_n1.TabIndex = 1;
            this.txt_n1.TextChanged += new System.EventHandler(this.txt_n1_TextChanged);
            // 
            // txt_n2
            // 
            this.txt_n2.Location = new System.Drawing.Point(452, 53);
            this.txt_n2.Name = "txt_n2";
            this.txt_n2.Size = new System.Drawing.Size(100, 20);
            this.txt_n2.TabIndex = 2;
            // 
            // btn_soma
            // 
            this.btn_soma.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btn_soma.Location = new System.Drawing.Point(126, 132);
            this.btn_soma.Name = "btn_soma";
            this.btn_soma.Size = new System.Drawing.Size(75, 47);
            this.btn_soma.TabIndex = 3;
            this.btn_soma.Text = "+";
            this.btn_soma.UseVisualStyleBackColor = true;
            this.btn_soma.Click += new System.EventHandler(this.btn_soma_Click);
            // 
            // btn_subtracao
            // 
            this.btn_subtracao.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btn_subtracao.Location = new System.Drawing.Point(226, 132);
            this.btn_subtracao.Name = "btn_subtracao";
            this.btn_subtracao.Size = new System.Drawing.Size(75, 47);
            this.btn_subtracao.TabIndex = 4;
            this.btn_subtracao.Text = "-";
            this.btn_subtracao.UseVisualStyleBackColor = true;
            this.btn_subtracao.Click += new System.EventHandler(this.btn_subtracao_Click);
            // 
            // btn_multiplicacao
            // 
            this.btn_multiplicacao.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btn_multiplicacao.Location = new System.Drawing.Point(337, 132);
            this.btn_multiplicacao.Name = "btn_multiplicacao";
            this.btn_multiplicacao.Size = new System.Drawing.Size(75, 47);
            this.btn_multiplicacao.TabIndex = 5;
            this.btn_multiplicacao.Text = "*";
            this.btn_multiplicacao.UseVisualStyleBackColor = true;
            this.btn_multiplicacao.Click += new System.EventHandler(this.btn_multiplicacao_Click);
            // 
            // btn_divisao
            // 
            this.btn_divisao.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btn_divisao.Location = new System.Drawing.Point(452, 132);
            this.btn_divisao.Name = "btn_divisao";
            this.btn_divisao.Size = new System.Drawing.Size(75, 47);
            this.btn_divisao.TabIndex = 6;
            this.btn_divisao.Text = "/";
            this.btn_divisao.UseVisualStyleBackColor = true;
            this.btn_divisao.Click += new System.EventHandler(this.btn_divisao_Click);
            // 
            // lbl_res
            // 
            this.lbl_res.AutoSize = true;
            this.lbl_res.Font = new System.Drawing.Font("Microsoft Sans Serif", 11.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lbl_res.Location = new System.Drawing.Point(126, 243);
            this.lbl_res.Name = "lbl_res";
            this.lbl_res.Size = new System.Drawing.Size(89, 18);
            this.lbl_res.TabIndex = 7;
            this.lbl_res.Text = "Resultado:";
            this.lbl_res.Click += new System.EventHandler(this.label1_Click_1);
            // 
            // lbl_resultado
            // 
            this.lbl_resultado.BackColor = System.Drawing.Color.White;
            this.lbl_resultado.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.lbl_resultado.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lbl_resultado.Location = new System.Drawing.Point(337, 243);
            this.lbl_resultado.Name = "lbl_resultado";
            this.lbl_resultado.Size = new System.Drawing.Size(100, 23);
            this.lbl_resultado.TabIndex = 8;
            this.lbl_resultado.Click += new System.EventHandler(this.lbl_resultado_Click);
            // 
            // btn_limpar
            // 
            this.btn_limpar.Location = new System.Drawing.Point(522, 215);
            this.btn_limpar.Name = "btn_limpar";
            this.btn_limpar.Size = new System.Drawing.Size(75, 23);
            this.btn_limpar.TabIndex = 9;
            this.btn_limpar.Text = "Limpar";
            this.btn_limpar.UseVisualStyleBackColor = true;
            this.btn_limpar.Click += new System.EventHandler(this.btn_limpar_Click_1);
            // 
            // btn_autor
            // 
            this.btn_autor.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btn_autor.Image = global::Ficha_1.Properties.Resources.dino;
            this.btn_autor.Location = new System.Drawing.Point(32, 244);
            this.btn_autor.Name = "btn_autor";
            this.btn_autor.Size = new System.Drawing.Size(75, 65);
            this.btn_autor.TabIndex = 11;
            this.btn_autor.Text = "Autor";
            this.btn_autor.TextAlign = System.Drawing.ContentAlignment.BottomCenter;
            this.btn_autor.UseVisualStyleBackColor = true;
            this.btn_autor.Click += new System.EventHandler(this.btn_autor_Click);
            // 
            // btn_sair
            // 
            this.btn_sair.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btn_sair.Image = global::Ficha_1.Properties.Resources.logout;
            this.btn_sair.Location = new System.Drawing.Point(522, 244);
            this.btn_sair.Name = "btn_sair";
            this.btn_sair.Size = new System.Drawing.Size(75, 66);
            this.btn_sair.TabIndex = 10;
            this.btn_sair.Text = "Sair";
            this.btn_sair.TextAlign = System.Drawing.ContentAlignment.BottomCenter;
            this.btn_sair.UseVisualStyleBackColor = true;
            this.btn_sair.Click += new System.EventHandler(this.btn_sair_Click);
            // 
            // frm_Ficha1ex1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(642, 322);
            this.Controls.Add(this.btn_autor);
            this.Controls.Add(this.btn_sair);
            this.Controls.Add(this.btn_limpar);
            this.Controls.Add(this.lbl_resultado);
            this.Controls.Add(this.lbl_res);
            this.Controls.Add(this.btn_divisao);
            this.Controls.Add(this.btn_multiplicacao);
            this.Controls.Add(this.btn_subtracao);
            this.Controls.Add(this.btn_soma);
            this.Controls.Add(this.txt_n2);
            this.Controls.Add(this.txt_n1);
            this.Controls.Add(this.lbl_sinal);
            this.Name = "frm_Ficha1ex1";
            this.Text = "Calculadora";
            this.Load += new System.EventHandler(this.frm_Ficha1ex1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label lbl_sinal;
        private System.Windows.Forms.TextBox txt_n1;
        private System.Windows.Forms.TextBox txt_n2;
        private System.Windows.Forms.Button btn_soma;
        private System.Windows.Forms.Button btn_subtracao;
        private System.Windows.Forms.Button btn_multiplicacao;
        private System.Windows.Forms.Button btn_divisao;
        private System.Windows.Forms.Label lbl_res;
        private System.Windows.Forms.Label lbl_resultado;
        private System.Windows.Forms.Button btn_limpar;
        private System.Windows.Forms.Button btn_sair;
        private System.Windows.Forms.Button btn_autor;
    }
}

