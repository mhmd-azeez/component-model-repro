using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

public class Program
{
    // this doesn't work
    // [DllImport("extism:host/user")]

    // this works
    [DllImport("extism")]
    public static extern void do_something();

    public static void Main(string[] args)
    {
        
    }
}