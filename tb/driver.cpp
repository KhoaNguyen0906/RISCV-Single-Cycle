#define MAX_SIM 20

void set_random(Vtop *dut, vluint64_t sim_unit) {
  dut->clk_i  =rand()%8;
  dut->rst_ni = rand()%8;
  
}