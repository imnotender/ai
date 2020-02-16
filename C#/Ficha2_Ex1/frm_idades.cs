using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Ficha2_Ex1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
        private int V_input(string var)
        {
            int rslt;
            if(int.TryParse(var, out rslt) == true)
            {
                return rslt;
            }
            else
            {
                return -7045454;
            }
            
        }

        private void btn_idades_Click(object sender, EventArgs e)
        {
            int idades = V_input(txt_idades.Text);
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
        private void txt_idades_TextChanged(object sender, EventArgs e)
        {

        }
    }
}
