namespace JogoProcura
{
    partial class frm_opcoes
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(frm_opcoes));
            this.menu_opcoes = new System.Windows.Forms.MenuStrip();
            this.menu_regras = new System.Windows.Forms.ToolStripMenuItem();
            this.sairToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.lbl_dificuldade = new System.Windows.Forms.Label();
            this.rb_dificil = new System.Windows.Forms.RadioButton();
            this.rb_medio = new System.Windows.Forms.RadioButton();
            this.btn_iniciar = new System.Windows.Forms.Button();
            this.rb_facil = new System.Windows.Forms.RadioButton();
            this.créditosToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.menu_opcoes.SuspendLayout();
            this.SuspendLayout();
            // 
            // menu_opcoes
            // 
            this.menu_opcoes.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.menu_regras,
            this.créditosToolStripMenuItem,
            this.sairToolStripMenuItem});
            resources.ApplyResources(this.menu_opcoes, "menu_opcoes");
            this.menu_opcoes.Name = "menu_opcoes";
            // 
            // menu_regras
            // 
            this.menu_regras.Name = "menu_regras";
            resources.ApplyResources(this.menu_regras, "menu_regras");
            this.menu_regras.Click += new System.EventHandler(this.regrasToolStripMenuItem_Click);
            // 
            // sairToolStripMenuItem
            // 
            this.sairToolStripMenuItem.Name = "sairToolStripMenuItem";
            resources.ApplyResources(this.sairToolStripMenuItem, "sairToolStripMenuItem");
            this.sairToolStripMenuItem.Click += new System.EventHandler(this.sairToolStripMenuItem_Click);
            // 
            // lbl_dificuldade
            // 
            resources.ApplyResources(this.lbl_dificuldade, "lbl_dificuldade");
            this.lbl_dificuldade.Name = "lbl_dificuldade";
            // 
            // rb_dificil
            // 
            resources.ApplyResources(this.rb_dificil, "rb_dificil");
            this.rb_dificil.Name = "rb_dificil";
            this.rb_dificil.TabStop = true;
            this.rb_dificil.UseVisualStyleBackColor = true;
            // 
            // rb_medio
            // 
            resources.ApplyResources(this.rb_medio, "rb_medio");
            this.rb_medio.Name = "rb_medio";
            this.rb_medio.TabStop = true;
            this.rb_medio.UseVisualStyleBackColor = true;
            this.rb_medio.CheckedChanged += new System.EventHandler(this.rb_medio_CheckedChanged);
            // 
            // btn_iniciar
            // 
            resources.ApplyResources(this.btn_iniciar, "btn_iniciar");
            this.btn_iniciar.Name = "btn_iniciar";
            this.btn_iniciar.UseVisualStyleBackColor = true;
            this.btn_iniciar.Click += new System.EventHandler(this.btn_iniciar_Click);
            // 
            // rb_facil
            // 
            resources.ApplyResources(this.rb_facil, "rb_facil");
            this.rb_facil.Name = "rb_facil";
            this.rb_facil.TabStop = true;
            this.rb_facil.UseVisualStyleBackColor = true;
            // 
            // créditosToolStripMenuItem
            // 
            this.créditosToolStripMenuItem.Name = "créditosToolStripMenuItem";
            resources.ApplyResources(this.créditosToolStripMenuItem, "créditosToolStripMenuItem");
            this.créditosToolStripMenuItem.Click += new System.EventHandler(this.créditosToolStripMenuItem_Click);
            // 
            // frm_opcoes
            // 
            resources.ApplyResources(this, "$this");
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.Controls.Add(this.rb_facil);
            this.Controls.Add(this.rb_medio);
            this.Controls.Add(this.rb_dificil);
            this.Controls.Add(this.btn_iniciar);
            this.Controls.Add(this.lbl_dificuldade);
            this.Controls.Add(this.menu_opcoes);
            this.MainMenuStrip = this.menu_opcoes;
            this.Name = "frm_opcoes";
            this.menu_opcoes.ResumeLayout(false);
            this.menu_opcoes.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.MenuStrip menu_opcoes;
        private System.Windows.Forms.ToolStripMenuItem sairToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem menu_regras;
        private System.Windows.Forms.Label lbl_dificuldade;
        private System.Windows.Forms.RadioButton rb_dificil;
        private System.Windows.Forms.RadioButton rb_medio;
        private System.Windows.Forms.Button btn_iniciar;
        private System.Windows.Forms.RadioButton rb_facil;
        private System.Windows.Forms.ToolStripMenuItem créditosToolStripMenuItem;
    }
}