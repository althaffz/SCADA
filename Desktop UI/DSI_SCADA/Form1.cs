using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.Threading;
using System.IO;

namespace DSI_SCADA
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void panel5_Paint(object sender, PaintEventArgs e)
        {
                    }

        private void panel6_Paint(object sender, PaintEventArgs e)
        {

        }

        private void label10_Click(object sender, EventArgs e)
        {

        }

        private void button2_Click(object sender, EventArgs e)
        {

        }

        private void domainUpDown3_SelectedItemChanged(object sender, EventArgs e)
        {

        }

        private void domainUpDown4_SelectedItemChanged(object sender, EventArgs e)
        {

        }

        private void label67_Click(object sender, EventArgs e)
        {

        }

        private void label68_Click(object sender, EventArgs e)
        {

        }

        private void dateTimePicker3_ValueChanged(object sender, EventArgs e)
        {

        }

        private void dateTimePicker4_ValueChanged(object sender, EventArgs e)
        {

        }

        private void groupBox4_Enter(object sender, EventArgs e)
        {

        }

        private void tabPage7_Click(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void panel1_Paint(object sender, PaintEventArgs e)
        {

        }

        private void button7_Click(object sender, EventArgs e)
        {
            while (true)   //Need to fix the inifite loop
            {


            /*
             >>>>>>>>>>>Machine 1 Readings <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
            */
            System.Net.WebClient wc1 = new System.Net.WebClient();
            byte[] m1 = wc1.DownloadData("http://dsi_scada.netne.net/real_m1.php");

            string webData1 = System.Text.Encoding.UTF8.GetString(m1);

            String x1 = webData1.Substring(0, webData1.IndexOf('<'));

            String[] data1 = x1.Split(',');

            textBox1.Text = data1[0];
            textBox2.Text = data1[1];
            textBox4.Text = data1[2];
            textBox3.Text = data1[3];
            textBox6.Text = data1[4];
            textBox5.Text = data1[5];
            textBox8.Text = data1[6];
            textBox7.Text = data1[7];
            textBox10.Text = data1[8];
            textBox9.Text = data1[9];


            /*
             >>>>>>>>>>> Machine 2 Readings <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
            */

            System.Net.WebClient wc2 = new System.Net.WebClient();
            byte[] m2 = wc2.DownloadData("http://dsi_scada.netne.net/real_m2.php");

            string webData2 = System.Text.Encoding.UTF8.GetString(m2);

            String x2 = webData2.Substring(0, webData2.IndexOf('<'));

            String[] data2 = x2.Split(',');

            textBox20.Text = data2[0];
            textBox19.Text = data2[1];
            textBox18.Text = data2[2];
            textBox17.Text = data2[3];
            textBox16.Text = data2[4];
            textBox15.Text = data2[5];
            textBox14.Text = data2[6];
            textBox13.Text = data2[7];
            textBox12.Text = data2[8];
            textBox11.Text = data2[9];
            
            
            /*
             >>>>>>>>>>> Machine 3 Readings <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
            */


            System.Net.WebClient wc3 = new System.Net.WebClient();
            byte[] m3 = wc3.DownloadData("http://dsi_scada.netne.net/real_m3.php");

            string webData3 = System.Text.Encoding.UTF8.GetString(m3);

            String x3 = webData3.Substring(0, webData3.IndexOf('<'));

            String[] data3 = x3.Split(',');

            textBox30.Text = data3[0];
            textBox29.Text = data3[1];
            textBox28.Text = data3[2];
            textBox27.Text = data3[3];
            textBox26.Text = data3[4];
            textBox25.Text = data3[5];
            textBox24.Text = data3[6];
            textBox23.Text = data3[7];
            textBox22.Text = data3[8];
            textBox21.Text = data3[9];

            
            /*
             >>>>>>>>>>> Machine 4 Readings <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
            */

            System.Net.WebClient wc4 = new System.Net.WebClient();
            byte[] m4 = wc4.DownloadData("http://dsi_scada.netne.net/real_m4.php");

            string webData4 = System.Text.Encoding.UTF8.GetString(m4);

            String x4 = webData4.Substring(0, webData4.IndexOf('<'));

            String[] data4 = x4.Split(',');

            textBox60.Text = data4[0];
            textBox59.Text = data4[1];
            textBox58.Text = data4[2];
            textBox57.Text = data4[3];
            textBox56.Text = data4[4];
            textBox55.Text = data4[5];
            textBox54.Text = data4[6];
            textBox53.Text = data4[7];
            textBox52.Text = data4[8];
            textBox51.Text = data4[9];

            
            /*
             >>>>>>>>>>> Machine 5 Readings <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
            */

            System.Net.WebClient wc5 = new System.Net.WebClient();
            byte[] m5 = wc5.DownloadData("http://dsi_scada.netne.net/real_m5.php");

            string webData5 = System.Text.Encoding.UTF8.GetString(m5);

            String x5 = webData5.Substring(0, webData5.IndexOf('<'));

            String[] data5 = x5.Split(',');

            textBox50.Text = data5[0];
            textBox49.Text = data5[1];
            textBox48.Text = data5[2];
            textBox47.Text = data5[3];
            textBox46.Text = data5[4];
            textBox45.Text = data5[5];
            textBox44.Text = data5[6];
            textBox43.Text = data5[7];
            textBox42.Text = data5[8];
            textBox41.Text = data5[9];


            /*
             >>>>>>>>>>> Machine 6 Readings <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
            */

            System.Net.WebClient wc6 = new System.Net.WebClient();
            byte[] m6 = wc6.DownloadData("http://dsi_scada.netne.net/real_m6.php");

            string webData6 = System.Text.Encoding.UTF8.GetString(m6);

            String x6 = webData6.Substring(0, webData6.IndexOf('<'));

            String[] data6 = x6.Split(',');

            textBox40.Text = data6[0];
            textBox39.Text = data6[1];
            textBox38.Text = data6[2];
            textBox37.Text = data6[3];
            textBox36.Text = data6[4];
            textBox35.Text = data6[5];
            textBox34.Text = data6[6];
            textBox33.Text = data6[7];
            textBox32.Text = data6[8];
            textBox31.Text = data6[9];

            Thread.Sleep(15000);
            }
        }
    }
}