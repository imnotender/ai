using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using Microsoft.VisualBasic;

namespace Ficha2_Ex2
{
    public partial class frm_idades2 : Form
    {
        public frm_idades2()
        {
            InitializeComponent();
        }

        int idades, rslt;
        private void Form1_Load(object sender, EventArgs e)
        {

        }
        private int obter_dados()
        {
            bool verificar = int.TryParse(Interaction.InputBox("Digite a Idade", "Idade"), out rslt);
            if (verificar == true)
            {
                return rslt;
            }
            else
            {
                return -7045454;
            }

        }

        private void lbl_situacao_Click(object sender, EventArgs e)
        {

        }

        private void btn_idades_Click(object sender, EventArgs e)
        {
            idades = obter_dados();
            if (idades != -0.34053954045)
            {
                if (idades >= 0 && idades <= 2)
                {
                    lbl_situacao.Text = "Berçário!";
                }
                else if (idades >= 3 && idades <= 5)
                {
                    lbl_situacao.Text = "Pré-Primária!";
                }
                else if (idades >= 6 && idades <= 9)
                {
                    lbl_situacao.Text = "Primária!";
                }
                else
                {
                    lbl_situacao.Text = "Idade inválida!";

                }
            }
        }
    }
}
