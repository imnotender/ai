using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace AIB_ficha3
{
    public partial class frm_menu : Form
    {
        public frm_menu()
        {
            InitializeComponent();
        }

        private void menuStrip1_ItemClicked(object sender, ToolStripItemClickedEventArgs e)
        {

        }


        private void exercício2ToolStripMenuItem_Click(object sender, EventArgs e)
        {

        }


        private void menubtn_sair_Click(object sender, EventArgs e)
        {
            if(MessageBox.Show("Deseja Sair da Aplicação?", "Sair da Ficha 3",

            MessageBoxButtons.YesNo, MessageBoxIcon.Question)==DialogResult.Yes)
            {
                Application.Exit();
            }
        }

        private void menubtn_autor_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Nome do aluno: Rafael Girão\nTurma:12ºA2\nAnoLetivo: 2019 / 2020","Autor da Ficha", MessageBoxButtons.OK,MessageBoxIcon.Information);

        }

        private void menubtn_excs_1_Click(object sender, EventArgs e)
        {
            frm_exercicio1 form = new frm_exercicio1();
            form.Show();
        }

        private void menubtn_excs_Click(object sender, EventArgs e)
        {

        }
    }
}
