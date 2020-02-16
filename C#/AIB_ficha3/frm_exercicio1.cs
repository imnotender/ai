using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Diagnostics;

namespace AIB_ficha3
{
    public partial class frm_exercicio1 : Form
    {
        public frm_exercicio1()
        {
            InitializeComponent();
        }

        private void frm_exercicio1_Load(object sender, EventArgs e)
        {
            for (int i=1;i<=20;i++)
            {
                cbo_lab.Items.Add(i);
                cbo_projeto.Items.Add(i);
                cbo_avaliacao.Items.Add(i);


            }

        }

        private void cbo_lab_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void cbo_projeto_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void cbo_avaliacao_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void txt_nralunos_TextChanged(object sender, EventArgs e)
        {

        }

        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {

        }

        private void dataGridView1_CellContentClick_1(object sender, DataGridViewCellEventArgs e)
        {

        }

        private void btn_voltar_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void nud_aluno_ValueChanged(object sender, EventArgs e)
        {

        }

        private void btn_calcular_Click(object sender, EventArgs e)
        {
            float n, lab, proj, aval, media, media_turma, soma_turma = 0, nr_alunos = 0;

            string obs;
            n = int.Parse(nud_aluno.Text);
            lab = int.Parse(cbo_lab.Text);
            proj = int.Parse(cbo_projeto.Text);
            aval = int.Parse(cbo_avaliacao.Text);
            media = (lab + proj + aval) / 3;
            if (media >= 10)
            {
                obs = "Aluno aprovado!";
            }
            else
            {
                obs = "Aluno reprovado!";
            }
            dgv_grelha.Rows.Add(n, lab, proj, aval, media, obs);
            nr_alunos = nr_alunos + 1;
            soma_turma = soma_turma + media;
            media_turma = (soma_turma / nr_alunos);
            lbl_nralunos2.Text = nr_alunos.ToString();
            lbl_media2.Text = media_turma.ToString();
            Debug.WriteLine(nr_alunos);
            lbl_nralunos2.Text = "Banana";
        }

        private void lbl_nralunos2_Click(object sender, EventArgs e)
        {

        }

        private void lbl_nraluno_Click(object sender, EventArgs e)
        {

        }
    }
}