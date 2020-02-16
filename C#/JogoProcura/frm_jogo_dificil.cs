using System;
using System.Drawing;
using System.Media;
using System.Windows.Forms;


namespace JogoProcura
{
    public partial class frm_jogo_dificil : Form
    {
        public frm_jogo_dificil()
        {
            InitializeComponent();
        }

        private void frm_jogo_Load(object sender, EventArgs e)
        {
            FormBorderStyle = FormBorderStyle.None;
            WindowState = FormWindowState.Maximized;
            int formHeight = this.Height;
            int formWidth = this.Width;
            Random r = new Random();
            int R_height = r.Next(32, this.Height - 32); 
            int R_width = r.Next(32, this.Width - 32);
            img_galinha.Location = new Point(
             R_width,
             R_height
            );
            if (frm_opcoes.expertmode == true)
            {
              
                img_galinha.Cursor = Cursors.Cross;
            }
            timer.Start();

        }
        

        private void img_galinha_Click(object sender, EventArgs e)
        {
            img_galinha.Image = JogoProcura.Properties.Resources.galinha_32;
            timer.Stop();
            if (MessageBox.Show("Jogar novamente? (Ao cancelar irá voltar ao menu de opções)", "PARABÉNS!", MessageBoxButtons.OKCancel, MessageBoxIcon.Question) == DialogResult.OK)
            {
                this.Close();
                frm_jogo_dificil form = new frm_jogo_dificil();
                form.Show();
            }
            else
            {
                this.Close();
            }
        }
        private void playsound_agudo() // defining the function
        {
            SoundPlayer audio = new SoundPlayer(JogoProcura.Properties.Resources.galinha_aguda); // here WindowsFormsApplication1 is the namespace and Connect is the audio file name
            audio.Play();

        }
        private void playsound_medio() // defining the function
        {
            SoundPlayer audio = new SoundPlayer(JogoProcura.Properties.Resources.galinha_medio); // here WindowsFormsApplication1 is the namespace and Connect is the audio file name
            audio.Play();

        }

        private void playsound_grave() // defining the function
        {
            SoundPlayer audio = new SoundPlayer(JogoProcura.Properties.Resources.galinha_grave); // here WindowsFormsApplication1 is the namespace and Connect is the audio file name
            audio.Play();

        }


        
        private void timer1_Tick(object sender, EventArgs e)
        {
            double raio_agudo = img_galinha.Width * 1.5;
            double raio_medio = img_galinha.Width * 2.5;

            this.Cursor = new Cursor(Cursor.Current.Handle);
            double Cx = Cursor.Position.X;
            double Cy = Cursor.Position.Y;
            double Gx = img_galinha.Location.X;
            double Gy = img_galinha.Location.Y;
            double distance = Math.Sqrt(Math.Pow(Cx - Gx, 2) + Math.Pow(Cy - Gy, 2));

            //Raio para som agudo
            if (distance <= raio_agudo)
            {
                playsound_agudo();
            }
            else if (distance <= raio_medio)
            {
                playsound_medio();
            }
            else
            {
                playsound_grave();
            }

        }
        private void frm_jogo_dificil_KeyDown(object sender, KeyEventArgs e)
        {
            if (e.KeyCode == Keys.Escape)
            {
                if (MessageBox.Show("Deseja voltar ao Menu de Opções?", "Voltar ao Menu", MessageBoxButtons.YesNo, MessageBoxIcon.Question) == DialogResult.Yes)
                {
                    this.Close();
                }
            }

        }
    }
}
