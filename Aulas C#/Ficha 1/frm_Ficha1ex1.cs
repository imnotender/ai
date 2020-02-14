using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Ficha_1
{
    public partial class frm_Ficha1ex1 : Form
    {
        float n1, n2, calc;
        public frm_Ficha1ex1()
        {
            InitializeComponent();
        }

        public void obter_dados()
        {
            n1 = float.Parse(txt_n1.Text);
            n2 = float.Parse(txt_n2.Text);
            
        }

        private void btn_soma_Click(object sender, EventArgs e)
        {
            lbl_sinal.Text = "+";
            obter_dados();
            calc = n1 + n2;
            lbl_resultado.Text = calc.ToString();
        }
        private void btn_divisao_Click(object sender, EventArgs e)
        {
            lbl_sinal.Text = "/";
            obter_dados();
            calc = n1 / n2;
            lbl_resultado.Text = calc.ToString();
        }
      



        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void txt_n1_TextChanged(object sender, EventArgs e)
        {

        }

        private void btn_limpar_Click(object sender, EventArgs e)
        {

        }

        private void btn_subtracao_Click(object sender, EventArgs e)
        {
            lbl_sinal.Text = "-";
            obter_dados();
            calc = n1 - n2;
            lbl_resultado.Text = calc.ToString();
        }

        private void btn_multiplicacao_Click(object sender, EventArgs e)
        {
            lbl_sinal.Text = "*";
            obter_dados();
            calc = n1 * n2;
            lbl_resultado.Text = calc.ToString();
        }

        private void btn_limpar_Click_1(object sender, EventArgs e)
        {
            txt_n1.ResetText();
            txt_n2.ResetText();
            lbl_resultado.Text = "";
            lbl_sinal.Text = "";
            txt_n1.Focus();
        }

        private void lbl_resultado_Click(object sender, EventArgs e)
        {

        }

        private void btn_sair_Click(object sender, EventArgs e)
        {
            if (MessageBox.Show("Deseja Sair da Aplicação?", "Sair da Calculadora", MessageBoxButtons.YesNo, MessageBoxIcon.Question) == DialogResult.Yes)
            {
                Application.Exit();
            }
        }

        private void btn_autor_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Elaborado por Rafael Girão 12º A2", "Programação Orientada a Objetos - Visual C#", MessageBoxButtons.OK);
        }

        private void label1_Click_1(object sender, EventArgs e)
        {

        }



        private void frm_Ficha1ex1_Load(object sender, EventArgs e)
        {

        }
    }
}
