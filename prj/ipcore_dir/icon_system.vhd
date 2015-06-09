-------------------------------------------------------------------------------
-- Copyright (c) 2015 Xilinx, Inc.
-- All Rights Reserved
-------------------------------------------------------------------------------
--   ____  ____
--  /   /\/   /
-- /___/  \  /    Vendor     : Xilinx
-- \   \   \/     Version    : 14.7
--  \   \         Application: XILINX CORE Generator
--  /   /         Filename   : icon_system.vhd
-- /___/   /\     Timestamp  : Fri May 22 13:36:39 Central Europe Daylight Time 2015
-- \   \  /  \
--  \___\/\___\
--
-- Design Name: VHDL Synthesis Wrapper
-------------------------------------------------------------------------------
-- This wrapper is used to integrate with Project Navigator and PlanAhead

LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
ENTITY icon_system IS
  port (
    CONTROL0: inout std_logic_vector(35 downto 0));
END icon_system;

ARCHITECTURE icon_system_a OF icon_system IS
BEGIN

END icon_system_a;
