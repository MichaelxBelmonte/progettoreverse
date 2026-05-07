// Function: FUN_01a61310
// Address: 01a61310
// Size: 602 bytes
// Class: MUTool

void FUN_01a61310(void)

{
  void*arg1;
  uint32_t uVar1;
  uint32_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dd;
  float fVar5;
  uint32_t uVar6;
  float fVar7;
  int64_t local_38;
  char local_30;
  
  FUN_01cfcdc0(g_02390124,g_0239011c,g_02394288,g_0239011c);
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  FUN_01d488d0();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40(g_023908d8);
  uVar1 = FUN_01a5ffc0();
  uVar2 = FUN_01a608f0();
  uVar3 = FUN_01e437f0(uVar1);
  uVar6 = (uint32_t)((uint64_t)uVar3 >> 0x20);
  uVar4 = FUN_01e437f0(uVar2);
  fVar7 = (float)uVar4;
  fVar5 = (fVar7 - (float)uVar3) * g_02390118 + fVar7;
  uVar1 = extraout_XMM0_Dd;
  uVar2 = extraout_XMM0_Dc;
  (**(code **)(*(int64_t *)*arg1 + 0x4e0))();
  (**(code **)(*(int64_t *)*arg1 + 0x4f8))
            (fVar5,uVar6,fVar5,(int)((uint64_t)uVar4 >> 0x20),uVar6,uVar1,fVar7,uVar2);
  (**(code **)(*(int64_t *)*arg1 + 0x520))();
  FUN_01cfbee0(g_02390124,g_02390124,0);
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  FUN_01d488d0();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40(g_02390124);
  (**(code **)(*(int64_t *)*arg1 + 0x520))();
  return;
}

