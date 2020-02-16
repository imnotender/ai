namespace JogoProcura
{
    partial class frm_login
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(frm_login));
            this.cbo_users = new System.Windows.Forms.ComboBox();
            this.lbl_users = new System.Windows.Forms.Label();
            this.cbo_pwd = new System.Windows.Forms.Label();
            this.txt_pwd = new System.Windows.Forms.TextBox();
            this.btn_login = new System.Windows.Forms.Button();
            this.lbl_loginrslt = new System.Windows.Forms.Label();
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.btn_outroutilizador = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            this.SuspendLayout();
            // 
            // cbo_users
            // 
            this.cbo_users.FormattingEnabled = true;
            this.cbo_users.Location = new System.Drawing.Point(26, 94);
            this.cbo_users.Name = "cbo_users";
            this.cbo_users.Size = new System.Drawing.Size(121, 21);
            this.cbo_users.TabIndex = 1;
            // 
            // lbl_users
            // 
            this.lbl_users.AutoSize = true;
            this.lbl_users.Location = new System.Drawing.Point(23, 66);
            this.lbl_users.Name = "lbl_users";
            this.lbl_users.Size = new System.Drawing.Size(118, 13);
            this.lbl_users.TabIndex = 2;
            this.lbl_users.Text = "Escolha o seu utilizador";
            // 
            // cbo_pwd
            // 
            this.cbo_pwd.AutoSize = true;
            this.cbo_pwd.Location = new System.Drawing.Point(23, 130);
            this.cbo_pwd.Name = "cbo_pwd";
            this.cbo_pwd.Size = new System.Drawing.Size(75, 13);
            this.cbo_pwd.TabIndex = 3;
            this.cbo_pwd.Text = "Palavra Passe";
            // 
            // txt_pwd
            // 
            this.txt_pwd.Location = new System.Drawing.Point(26, 160);
            this.txt_pwd.Multiline = true;
            this.txt_pwd.Name = "txt_pwd";
            this.txt_pwd.PasswordChar = '*';
            this.txt_pwd.Size = new System.Drawing.Size(169, 23);
            this.txt_pwd.TabIndex = 4;
            this.txt_pwd.UseSystemPasswordChar = true;
            // 
            // btn_login
            // 
            this.btn_login.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btn_login.Location = new System.Drawing.Point(26, 201);
            this.btn_login.Name = "btn_login";
            this.btn_login.Size = new System.Drawing.Size(75, 23);
            this.btn_login.TabIndex = 5;
            this.btn_login.Text = "Login";
            this.btn_login.UseVisualStyleBackColor = true;
            this.btn_login.Click += new System.EventHandler(this.btn_login_Click);
            // 
            // lbl_loginrslt
            // 
            this.lbl_loginrslt.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lbl_loginrslt.Location = new System.Drawing.Point(23, 240);
            this.lbl_loginrslt.Name = "lbl_loginrslt";
            this.lbl_loginrslt.Size = new System.Drawing.Size(226, 24);
            this.lbl_loginrslt.TabIndex = 6;
            // 
            // pictureBox1
            // 
            this.pictureBox1.Image = ((System.Drawing.Image)(resources.GetObject("pictureBox1.Image")));
            this.pictureBox1.Location = new System.Drawing.Point(26, 12);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(35, 38);
            this.pictureBox1.TabIndex = 0;
            this.pictureBox1.TabStop = false;
            // 
            // btn_outroutilizador
            // 
            this.btn_outroutilizador.Location = new System.Drawing.Point(167, 91);
            this.btn_outroutilizador.Name = "btn_outroutilizador";
            this.btn_outroutilizador.Size = new System.Drawing.Size(75, 37);
            this.btn_outroutilizador.TabIndex = 7;
            this.btn_outroutilizador.Text = "Outro utilizador";
            this.btn_outroutilizador.UseVisualStyleBackColor = true;
            this.btn_outroutilizador.Click += new System.EventHandler(this.btn_outroutilizador_Click);
            // 
            // frm_login
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(377, 317);
            this.Controls.Add(this.btn_outroutilizador);
            this.Controls.Add(this.lbl_loginrslt);
            this.Controls.Add(this.btn_login);
            this.Controls.Add(this.txt_pwd);
            this.Controls.Add(this.cbo_pwd);
            this.Controls.Add(this.lbl_users);
            this.Controls.Add(this.cbo_users);
            this.Controls.Add(this.pictureBox1);
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Name = "frm_login";
            this.Text = "Jogo da Procura | Login";
            this.Load += new System.EventHandler(this.loginform_Load);
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.PictureBox pictureBox1;
        private System.Windows.Forms.ComboBox cbo_users;
        private System.Windows.Forms.Label lbl_users;
        private System.Windows.Forms.Label cbo_pwd;
        private System.Windows.Forms.TextBox txt_pwd;
        private System.Windows.Forms.Button btn_login;
        private System.Windows.Forms.Label lbl_loginrslt;
        private System.Windows.Forms.Button btn_outroutilizador;
    }
}

