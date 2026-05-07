// Function: FUN_01b8db70
// Address: 01b8db70
// Size: 812 bytes
// Class: MUDetectionActivationSlider
// String references:
//   "MUDetectionActivationSlider"

void FUN_01b8db70(uint64_t param_1,uint32_t param_2)

{
  float fVar1;
  int64_t *plVar2;
  char cVar3;
  uint8_t uVar4;
  int iVar5;
  int64_t *this_ptr;
  int64_t **pplVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint32_t uVar10;
  uint32_t in_XMM1_Dc;
  int64_t *local_48;
  char local_40;
  float local_34;
  
  pplVar6 = &local_48;
  FUN_01e40eb0();
  plVar2 = local_48;
  if ((g_02732250 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_027321a0 = FUN_001b37d0();
    g_02732188 = "MUDetectionActivationSlider";
    g_02732190 = 0x1e8;
    g_02732198 = FUN_008264b0;
    g_027321a8 = 0;
    ram_00000000027321b0 = 0;
    g_027321b8 = 0;
    g_02732230 = 0;
    ram_0000000002732238 = 0;
    g_02732240 = 0;
    g_02732242 = 1;
    g_027321c0 = 0;
    ram_00000000027321c8 = 0;
    g_027321d0 = 0;
    ram_00000000027321d8 = 0;
    g_027321e0 = 0;
    ram_00000000027321e8 = 0;
    g_027321f0 = 0;
    ram_00000000027321f8 = 0;
    g_02732200 = 0;
    ram_0000000002732208 = 0;
    g_02732210 = 0;
    ram_0000000002732218 = 0;
    g_02732220 = 0;
    ram_0000000002732228 = 0;
    g_0273224b = 0;
    g_02732243 = 0;
    ___cxa_guard_release();
  }
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_01b8dbd3;
  }
  pplVar6 = (int64_t **)&g_02802688;
LAB_01b8dbd3:
  plVar2 = *pplVar6;
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 == (int64_t *)0x0) {
    local_34 = (float)(**(code **)(*this_ptr + 0xb10))();
    fVar1 = *(float *)((int64_t)this_ptr + 0x1dc);
    fVar7 = (float)(**(code **)(*this_ptr + 0xac0))();
    fVar8 = (float)(**(code **)(*this_ptr + 0xad0))();
    fVar9 = (float)(**(code **)(*this_ptr + 0xac0))();
    cVar3 = (**(code **)(*this_ptr + 0xaf0))();
    if (cVar3 != '\0') {
      local_34 = g_02390124 - local_34;
    }
    (**(code **)(*this_ptr + 0x640))();
    plVar2 = local_48;
    if ((((local_40 == '\0') && (local_48 != (int64_t *)0x0)) && (FUN_00d50b00(), local_40 != '\0')
        ) && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar10 = FUN_01e3f820();
    uVar4 = (**(code **)(*this_ptr + 0x9a0))();
    (**(code **)(*this_ptr + 0xa70))();
    (**(code **)(*plVar2 + 0x3f0))(uVar10,0xe,0,uVar4);
    uVar10 = FUN_01e3f820();
    (**(code **)(*this_ptr + 0x9a0))();
    (**(code **)(*this_ptr + 0xa70))();
    FUN_01cc0c20(uVar10,param_2,local_34,(fVar1 - fVar7) / (fVar8 - fVar9),param_2,in_XMM1_Dc);
    FUN_00d50b20();
  }
  return;
}

