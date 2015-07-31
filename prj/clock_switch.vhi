
-- VHDL Instantiation Created from source file clock_switch.vhd -- 11:55:12 07/31/2015
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT clock_switch
	PORT(
		start : IN std_logic;
		c_lock : IN std_logic;
		clk1 : IN std_logic;
		clk2 : IN std_logic;
		clk3 : IN std_logic;          
		clk_edge : OUT std_logic;
		state : OUT std_logic_vector(9 downto 0);
		done : OUT std_logic;
		counter : OUT std_logic_vector(10 downto 0);
		clk_condition : OUT std_logic;
		reset : OUT std_logic
		);
	END COMPONENT;

	Inst_clock_switch: clock_switch PORT MAP(
		start => ,
		c_lock => ,
		clk1 => ,
		clk2 => ,
		clk3 => ,
		clk_edge => ,
		state => ,
		done => ,
		counter => ,
		clk_condition => ,
		reset => 
	);


