﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace calculator
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            textBox2.Enabled = false;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Calculation complete");
            decimal dml = Convert.ToDecimal(textBox1.Text) * Convert.ToDecimal(textBox1.Text);
            textBox2.Text = dml.ToString();
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            int number;
            //Int32.Parse(number)
            number = Int32.Parse(textBox1.Text);
            System.Convert.ToString(number);
        }
        private void textBox2_TextChanged(object sender, EventArgs e)
        {
        }

       
    }
}
