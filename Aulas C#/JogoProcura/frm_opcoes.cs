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
    public partial class frm_opcoes : Form
    {
        public frm_opcoes()
        {
            InitializeComponent();
        }
        /*
         * Níveis Dificuldade:
         * 1 - Fácil
         * 2 - Médio
         * 3 - Difícil
         */



        // Show the text of the selected RadioButton.
        void btn_iniciar_Click(object sender, EventArgs e)
        {
            if (rb_dificil.Checked)
            {
               // frm_jogo_dificil form = new frm_jogo_dificil();
               // form.Show();
            }
            else if (rb_medio.Checked)
            {
                // frm_jogo_medio form = new frm_jogo_medio();
                // form.Show();
            }
            else
            {
                 frm_jogo_facil form = new frm_jogo_facil();
                 form.Show();
            }
        }


        private void regrasToolStripMenuItem_Click(object sender, EventArgs e)
        {
            MessageBox.Show("-É necessário ter o som ativado no computador.\n" +
                "- Para encontrar a galinha, tem de clickar no botao esquerdo do mouse, para se ouvir a galinha.\n" +
                "- Quanto mais perto estiver o cursor da galinha, mais agudo será o som da galinha.\n" +
                "- Ganhará o jogo quando encontrar a galinha.\n"+
                "- Divirta-se!!!", "Regras do Jogo");
        }

        private void sairToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (MessageBox.Show("Deseja Sair da Aplicação?", "Sair do Jogo",MessageBoxButtons.YesNo, MessageBoxIcon.Question) == DialogResult.Yes)
            {
                Application.Exit();
            }

        }

      
        private void rb_medio_CheckedChanged(object sender, EventArgs e)
        {

        }

        private void créditosToolStripMenuItem_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Edgar Lopes - Voz da Galinha", "Menções Honrosas");
        }
    }
}
