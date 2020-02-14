using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace JogoProcura
{
    public partial class frm_login : Form
    {
        public frm_login()
        {
            InitializeComponent();
        }

        int x, y;


        private void loginform_Load(object sender, EventArgs e)
        {
            cbo_users.Items.Add("Duarte Marques");
            cbo_users.Items.Add("Rafael Girao");
            this.AcceptButton = btn_login;

        }

        private void btn_login_Click(object sender, EventArgs e)
        {
            if (cbo_users.Text == "Rafael Girao")
            {
                if (txt_pwd.Text == "123banana")
                {
                    lbl_loginrslt.Text = "Bem vindo, Rafael Girão";
                    frm_opcoes form = new frm_opcoes();
                    form.Show();
                }
                else
                {
                    lbl_loginrslt.Text = "Palavra passe errada.";
                }
            }
            else if (cbo_users.Text == "Duarte Marques")
            {
                if (txt_pwd.Text == "123sim")
                {
                    lbl_loginrslt.Text = "Bem vindo, Duarte Marques";
              
                    frm_opcoes form = new frm_opcoes();
                    form.Show();
                }
                else
                {
                    lbl_loginrslt.Text = "Palavra passe errada.";
                }
            }
            else
            {
                lbl_loginrslt.Text = "Utilizador desconhecido.";
            }
            txt_pwd.Text = "";
        }


    }
}
