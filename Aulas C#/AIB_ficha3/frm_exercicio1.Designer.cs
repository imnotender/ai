namespace AIB_ficha3
{
    partial class frm_exercicio1
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
            this.nud_aluno = new System.Windows.Forms.NumericUpDown();
            this.lbl_nraluno = new System.Windows.Forms.Label();
            this.lbl_laboratorio = new System.Windows.Forms.Label();
            this.cbo_lab = new System.Windows.Forms.ComboBox();
            this.cbo_projeto = new System.Windows.Forms.ComboBox();
            this.cbo_avaliacao = new System.Windows.Forms.ComboBox();
            this.lbl_projeto = new System.Windows.Forms.Label();
            this.lbl_avaliacao = new System.Windows.Forms.Label();
            this.lbl_nralunos1 = new System.Windows.Forms.Label();
            this.lbl_media1 = new System.Windows.Forms.Label();
            this.lbl_nralunos2 = new System.Windows.Forms.Label();
            this.lbl_media2 = new System.Windows.Forms.Label();
            this.dgv_grelha = new System.Windows.Forms.DataGridView();
            this.col_nr = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.col_lab = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.col_proj = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.col_aval = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.col_media = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.col_obs = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.btn_calcular = new System.Windows.Forms.Button();
            this.btn_voltar = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.nud_aluno)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.dgv_grelha)).BeginInit();
            this.SuspendLayout();
            // 
            // nud_aluno
            // 
            this.nud_aluno.Location = new System.Drawing.Point(132, 49);
            this.nud_aluno.Name = "nud_aluno";
            this.nud_aluno.Size = new System.Drawing.Size(120, 20);
            this.nud_aluno.TabIndex = 0;
            this.nud_aluno.ValueChanged += new System.EventHandler(this.nud_aluno_ValueChanged);
            // 
            // lbl_nraluno
            // 
            this.lbl_nraluno.AutoSize = true;
            this.lbl_nraluno.Location = new System.Drawing.Point(12, 49);
            this.lbl_nraluno.Name = "lbl_nraluno";
            this.lbl_nraluno.Size = new System.Drawing.Size(88, 13);
            this.lbl_nraluno.TabIndex = 1;
            this.lbl_nraluno.Text = "Número do aluno";
            this.lbl_nraluno.Click += new System.EventHandler(this.lbl_nraluno_Click);
            // 
            // lbl_laboratorio
            // 
            this.lbl_laboratorio.AutoSize = true;
            this.lbl_laboratorio.Location = new System.Drawing.Point(12, 92);
            this.lbl_laboratorio.Name = "lbl_laboratorio";
            this.lbl_laboratorio.Size = new System.Drawing.Size(60, 13);
            this.lbl_laboratorio.TabIndex = 2;
            this.lbl_laboratorio.Text = "Laboratório";
            // 
            // cbo_lab
            // 
            this.cbo_lab.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.cbo_lab.FormattingEnabled = true;
            this.cbo_lab.Location = new System.Drawing.Point(131, 92);
            this.cbo_lab.Name = "cbo_lab";
            this.cbo_lab.Size = new System.Drawing.Size(121, 21);
            this.cbo_lab.TabIndex = 3;
            this.cbo_lab.SelectedIndexChanged += new System.EventHandler(this.cbo_lab_SelectedIndexChanged);
            // 
            // cbo_projeto
            // 
            this.cbo_projeto.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.cbo_projeto.FormattingEnabled = true;
            this.cbo_projeto.Location = new System.Drawing.Point(131, 135);
            this.cbo_projeto.Name = "cbo_projeto";
            this.cbo_projeto.Size = new System.Drawing.Size(121, 21);
            this.cbo_projeto.TabIndex = 4;
            this.cbo_projeto.SelectedIndexChanged += new System.EventHandler(this.cbo_projeto_SelectedIndexChanged);
            // 
            // cbo_avaliacao
            // 
            this.cbo_avaliacao.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.cbo_avaliacao.FormattingEnabled = true;
            this.cbo_avaliacao.Location = new System.Drawing.Point(131, 176);
            this.cbo_avaliacao.Name = "cbo_avaliacao";
            this.cbo_avaliacao.Size = new System.Drawing.Size(121, 21);
            this.cbo_avaliacao.TabIndex = 5;
            this.cbo_avaliacao.SelectedIndexChanged += new System.EventHandler(this.cbo_avaliacao_SelectedIndexChanged);
            // 
            // lbl_projeto
            // 
            this.lbl_projeto.AutoSize = true;
            this.lbl_projeto.Location = new System.Drawing.Point(12, 135);
            this.lbl_projeto.Name = "lbl_projeto";
            this.lbl_projeto.Size = new System.Drawing.Size(40, 13);
            this.lbl_projeto.TabIndex = 6;
            this.lbl_projeto.Text = "Projeto";
            // 
            // lbl_avaliacao
            // 
            this.lbl_avaliacao.AutoSize = true;
            this.lbl_avaliacao.Location = new System.Drawing.Point(12, 167);
            this.lbl_avaliacao.Name = "lbl_avaliacao";
            this.lbl_avaliacao.Size = new System.Drawing.Size(103, 13);
            this.lbl_avaliacao.TabIndex = 8;
            this.lbl_avaliacao.Text = "Avaliação Semestral";
            // 
            // lbl_nralunos1
            // 
            this.lbl_nralunos1.AutoSize = true;
            this.lbl_nralunos1.Location = new System.Drawing.Point(12, 204);
            this.lbl_nralunos1.Name = "lbl_nralunos1";
            this.lbl_nralunos1.Size = new System.Drawing.Size(94, 13);
            this.lbl_nralunos1.TabIndex = 9;
            this.lbl_nralunos1.Text = "Número de Alunos";
            // 
            // lbl_media1
            // 
            this.lbl_media1.AutoSize = true;
            this.lbl_media1.Location = new System.Drawing.Point(16, 254);
            this.lbl_media1.Name = "lbl_media1";
            this.lbl_media1.Size = new System.Drawing.Size(84, 13);
            this.lbl_media1.TabIndex = 10;
            this.lbl_media1.Text = "Média da Turma";
            // 
            // lbl_nralunos2
            // 
            this.lbl_nralunos2.BackColor = System.Drawing.Color.White;
            this.lbl_nralunos2.Location = new System.Drawing.Point(128, 218);
            this.lbl_nralunos2.MaximumSize = new System.Drawing.Size(200, 200);
            this.lbl_nralunos2.Name = "lbl_nralunos2";
            this.lbl_nralunos2.Size = new System.Drawing.Size(124, 23);
            this.lbl_nralunos2.TabIndex = 14;
            this.lbl_nralunos2.Click += new System.EventHandler(this.lbl_nralunos2_Click);
            // 
            // lbl_media2
            // 
            this.lbl_media2.BackColor = System.Drawing.Color.White;
            this.lbl_media2.Location = new System.Drawing.Point(131, 254);
            this.lbl_media2.MaximumSize = new System.Drawing.Size(200, 200);
            this.lbl_media2.Name = "lbl_media2";
            this.lbl_media2.Size = new System.Drawing.Size(121, 23);
            this.lbl_media2.TabIndex = 15;
            // 
            // dgv_grelha
            // 
            this.dgv_grelha.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dgv_grelha.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.col_nr,
            this.col_lab,
            this.col_proj,
            this.col_aval,
            this.col_media,
            this.col_obs});
            this.dgv_grelha.Location = new System.Drawing.Point(334, 48);
            this.dgv_grelha.Name = "dgv_grelha";
            this.dgv_grelha.Size = new System.Drawing.Size(512, 269);
            this.dgv_grelha.TabIndex = 16;
            this.dgv_grelha.CellContentClick += new System.Windows.Forms.DataGridViewCellEventHandler(this.dataGridView1_CellContentClick_1);
            // 
            // col_nr
            // 
            this.col_nr.AutoSizeMode = System.Windows.Forms.DataGridViewAutoSizeColumnMode.ColumnHeader;
            this.col_nr.HeaderText = "Número";
            this.col_nr.Name = "col_nr";
            this.col_nr.SortMode = System.Windows.Forms.DataGridViewColumnSortMode.Programmatic;
            this.col_nr.Width = 69;
            // 
            // col_lab
            // 
            this.col_lab.AutoSizeMode = System.Windows.Forms.DataGridViewAutoSizeColumnMode.ColumnHeader;
            this.col_lab.HeaderText = "Lab";
            this.col_lab.Name = "col_lab";
            this.col_lab.Width = 50;
            // 
            // col_proj
            // 
            this.col_proj.AutoSizeMode = System.Windows.Forms.DataGridViewAutoSizeColumnMode.ColumnHeader;
            this.col_proj.HeaderText = "Proj.";
            this.col_proj.Name = "col_proj";
            this.col_proj.Width = 53;
            // 
            // col_aval
            // 
            this.col_aval.HeaderText = "Aval.";
            this.col_aval.Name = "col_aval";
            this.col_aval.Width = 50;
            // 
            // col_media
            // 
            this.col_media.AutoSizeMode = System.Windows.Forms.DataGridViewAutoSizeColumnMode.ColumnHeader;
            this.col_media.HeaderText = "Média";
            this.col_media.Name = "col_media";
            this.col_media.Width = 61;
            // 
            // col_obs
            // 
            this.col_obs.AutoSizeMode = System.Windows.Forms.DataGridViewAutoSizeColumnMode.Fill;
            this.col_obs.HeaderText = "Obs.";
            this.col_obs.Name = "col_obs";
            // 
            // btn_calcular
            // 
            this.btn_calcular.Location = new System.Drawing.Point(19, 294);
            this.btn_calcular.Name = "btn_calcular";
            this.btn_calcular.Size = new System.Drawing.Size(87, 23);
            this.btn_calcular.TabIndex = 17;
            this.btn_calcular.Text = "Calcular";
            this.btn_calcular.UseVisualStyleBackColor = true;
            this.btn_calcular.Click += new System.EventHandler(this.btn_calcular_Click);
            // 
            // btn_voltar
            // 
            this.btn_voltar.Location = new System.Drawing.Point(149, 294);
            this.btn_voltar.Name = "btn_voltar";
            this.btn_voltar.Size = new System.Drawing.Size(87, 23);
            this.btn_voltar.TabIndex = 18;
            this.btn_voltar.Text = "Voltar";
            this.btn_voltar.UseVisualStyleBackColor = true;
            this.btn_voltar.Click += new System.EventHandler(this.btn_voltar_Click);
            // 
            // frm_exercicio1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.ScrollBar;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.btn_voltar);
            this.Controls.Add(this.btn_calcular);
            this.Controls.Add(this.dgv_grelha);
            this.Controls.Add(this.lbl_media2);
            this.Controls.Add(this.lbl_nralunos2);
            this.Controls.Add(this.lbl_media1);
            this.Controls.Add(this.lbl_nralunos1);
            this.Controls.Add(this.lbl_avaliacao);
            this.Controls.Add(this.lbl_projeto);
            this.Controls.Add(this.cbo_avaliacao);
            this.Controls.Add(this.cbo_projeto);
            this.Controls.Add(this.cbo_lab);
            this.Controls.Add(this.lbl_laboratorio);
            this.Controls.Add(this.lbl_nraluno);
            this.Controls.Add(this.nud_aluno);
            this.Name = "frm_exercicio1";
            this.Text = "Avaliação";
            this.Load += new System.EventHandler(this.frm_exercicio1_Load);
            ((System.ComponentModel.ISupportInitialize)(this.nud_aluno)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.dgv_grelha)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.NumericUpDown nud_aluno;
        private System.Windows.Forms.Label lbl_nraluno;
        private System.Windows.Forms.Label lbl_laboratorio;
        private System.Windows.Forms.ComboBox cbo_lab;
        private System.Windows.Forms.ComboBox cbo_projeto;
        private System.Windows.Forms.ComboBox cbo_avaliacao;
        private System.Windows.Forms.Label lbl_projeto;
        private System.Windows.Forms.Label lbl_avaliacao;
        private System.Windows.Forms.Label lbl_nralunos1;
        private System.Windows.Forms.Label lbl_media1;
        private System.Windows.Forms.Label lbl_nralunos2;
        private System.Windows.Forms.Label lbl_media2;
        private System.Windows.Forms.DataGridView dgv_grelha;
        private System.Windows.Forms.Button btn_calcular;
        private System.Windows.Forms.Button btn_voltar;
        private System.Windows.Forms.DataGridViewTextBoxColumn col_nr;
        private System.Windows.Forms.DataGridViewTextBoxColumn col_lab;
        private System.Windows.Forms.DataGridViewTextBoxColumn col_proj;
        private System.Windows.Forms.DataGridViewTextBoxColumn col_aval;
        private System.Windows.Forms.DataGridViewTextBoxColumn col_media;
        private System.Windows.Forms.DataGridViewTextBoxColumn col_obs;
    }
}