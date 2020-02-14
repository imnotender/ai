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
    public partial class frm_jogo_facil : Form
    {
        public frm_jogo_facil()
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
            int R_height = r.Next(0, this.Height); 
            int R_width = r.Next(0, this.Width);
            img_galinha.Location = new Point(
             R_width,
             R_height
            );
        }

        private void radioButton1_CheckedChanged(object sender, EventArgs e)
        {

        }

        private void img_galinha_Click(object sender, EventArgs e)
        {
            img_galinha.Visible = true;
        }


        private void frm_jogo_facil_MouseClick(object sender, MouseEventArgs e)
        {
            this.Cursor = new Cursor(Cursor.Current.Handle);
            double Cx = Cursor.Position.X;
            double Cy = Cursor.Position.Y;
            double Gx = img_galinha.Location.X;
            double Gy = img_galinha.Location.Y;
            double distance = Math.Sqrt(Math.Pow(Cx - Gx, 2) + Math.Pow(Cy - Gy, 2));
        }
    }
}
