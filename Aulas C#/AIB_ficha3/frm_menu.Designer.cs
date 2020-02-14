namespace AIB_ficha3
{
    partial class frm_menu
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
            this.menu_1 = new System.Windows.Forms.MenuStrip();
            this.menubtn_excs = new System.Windows.Forms.ToolStripMenuItem();
            this.menubtn_excs_1 = new System.Windows.Forms.ToolStripMenuItem();
            this.menubtn_excs_2 = new System.Windows.Forms.ToolStripMenuItem();
            this.menubtn_autor = new System.Windows.Forms.ToolStripMenuItem();
            this.menubtn_sair = new System.Windows.Forms.ToolStripMenuItem();
            this.menu_1.SuspendLayout();
            this.SuspendLayout();
            // 
            // menu_1
            // 
            this.menu_1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.menubtn_excs,
            this.menubtn_autor,
            this.menubtn_sair});
            this.menu_1.Location = new System.Drawing.Point(0, 0);
            this.menu_1.Name = "menu_1";
            this.menu_1.Size = new System.Drawing.Size(800, 24);
            this.menu_1.TabIndex = 0;
            this.menu_1.Text = "menuStrip1";
            this.menu_1.ItemClicked += new System.Windows.Forms.ToolStripItemClickedEventHandler(this.menuStrip1_ItemClicked);
            // 
            // menubtn_excs
            // 
            this.menubtn_excs.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.menubtn_excs_1,
            this.menubtn_excs_2});
            this.menubtn_excs.Name = "menubtn_excs";
            this.menubtn_excs.Size = new System.Drawing.Size(130, 20);
            this.menubtn_excs.Text = " Exercícios da Ficha 3";
            this.menubtn_excs.Click += new System.EventHandler(this.menubtn_excs_Click);
            // 
            // menubtn_excs_1
            // 
            this.menubtn_excs_1.Name = "menubtn_excs_1";
            this.menubtn_excs_1.Size = new System.Drawing.Size(180, 22);
            this.menubtn_excs_1.Text = "Exercício 1";
            this.menubtn_excs_1.Click += new System.EventHandler(this.menubtn_excs_1_Click);
            // 
            // menubtn_excs_2
            // 
            this.menubtn_excs_2.Name = "menubtn_excs_2";
            this.menubtn_excs_2.Size = new System.Drawing.Size(180, 22);
            this.menubtn_excs_2.Text = "Exercício 2";
            this.menubtn_excs_2.Click += new System.EventHandler(this.exercício2ToolStripMenuItem_Click);
            // 
            // menubtn_autor
            // 
            this.menubtn_autor.Name = "menubtn_autor";
            this.menubtn_autor.Size = new System.Drawing.Size(49, 20);
            this.menubtn_autor.Text = "Autor";
            this.menubtn_autor.Click += new System.EventHandler(this.menubtn_autor_Click);
            // 
            // menubtn_sair
            // 
            this.menubtn_sair.Name = "menubtn_sair";
            this.menubtn_sair.Size = new System.Drawing.Size(38, 20);
            this.menubtn_sair.Text = "Sair";
            this.menubtn_sair.Click += new System.EventHandler(this.menubtn_sair_Click);
            // 
            // frm_menu
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.menu_1);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedToolWindow;
            this.MainMenuStrip = this.menu_1;
            this.Name = "frm_menu";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Ficha de trabalho nº3";
            this.menu_1.ResumeLayout(false);
            this.menu_1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.MenuStrip menu_1;
        private System.Windows.Forms.ToolStripMenuItem menubtn_excs;
        private System.Windows.Forms.ToolStripMenuItem menubtn_excs_1;
        private System.Windows.Forms.ToolStripMenuItem menubtn_excs_2;
        private System.Windows.Forms.ToolStripMenuItem menubtn_autor;
        private System.Windows.Forms.ToolStripMenuItem menubtn_sair;
    }
}

