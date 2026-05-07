// Function: FUN_019ebb20
// Address: 019ebb20
// Size: 672 bytes
// Class: GNDictionary
// String references:
//   "GNDictionary"

void FUN_019ebb20(uint32_t param_1)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar7;
  int64_t **pplVar8;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_31;
  
  plVar7 = (int64_t *)*arg1;
  if ((g_026fdd40 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), param_1 = extraout_XMM0_Da_00, iVar5 != 0)) {
    g_026cd0e8 = FUN_00d4fe50();
    g_026cd0d0 = "GNDictionary";
    g_026cd0d8 = 0x28;
    g_026cd0e0 = FUN_00022d20;
    g_026cd0f0 = 0;
    ram_00000000026cd0f8 = 0;
    g_026cd100 = 0;
    g_026cd178 = 0;
    ram_00000000026cd180 = 0;
    g_026cd188 = 0;
    g_026cd18a = 6;
    g_026cd108 = 0;
    ram_00000000026cd110 = 0;
    g_026cd118 = 0;
    ram_00000000026cd120 = 0;
    g_026cd128 = 0;
    ram_00000000026cd130 = 0;
    g_026cd138 = 0;
    ram_00000000026cd140 = 0;
    g_026cd148 = 0;
    ram_00000000026cd150 = 0;
    g_026cd158 = 0;
    ram_00000000026cd160 = 0;
    g_026cd168 = 0;
    ram_00000000026cd170 = 0;
    g_026cd193 = 0;
    g_026cd18b = 0;
    param_1 = ___cxa_guard_release();
  }
  if (plVar7 == (int64_t *)0x0) {
LAB_019ebb6c:
    arg1 = &g_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar4 = FUN_00e85ea0();
    param_1 = extraout_XMM0_Da;
    if (cVar4 == '\0') goto LAB_019ebb6c;
  }
  local_40 = *arg1;
  if (local_40 == 0) {
    return;
  }
  local_31 = (char)arg1[1];
  if (local_31 != '\0') {
    param_1 = FUN_00d50b00();
  }
  lVar3 = g_026dc290;
  if (g_026dc290 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_50 = lVar3;
  local_48 = '\x01';
  pplVar8 = &local_60;
  FUN_000175c0(param_1,&local_50);
  plVar7 = local_60;
  FUN_00053ac0();
  if (plVar7 != (int64_t *)0x0) {
    (**(code **)(*plVar7 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_019ebbfc;
  }
  pplVar8 = (int64_t **)&g_02802688;
LAB_019ebbfc:
  plVar7 = *pplVar8;
  if (plVar7 == (int64_t *)0x0) {
    bVar2 = true;
    bVar1 = true;
    plVar7 = (int64_t *)0x0;
  }
  else {
    if (*(char *)(pplVar8 + 1) == '\0') {
      FUN_00d50b00();
    }
    else {
      *(void*)(pplVar8 + 1) = 0;
    }
    bVar2 = false;
    bVar1 = false;
  }
  if ((local_58 != '\0') && (bVar1 = bVar2, local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (plVar7 != (int64_t *)0x0) {
    iVar5 = (**(code **)(*this_ptr + 0xd08))();
    iVar6 = FUN_00d45870();
    if (iVar6 == 0) {
      (**(code **)(*this_ptr + 0xd00))();
    }
    else if (iVar6 == 1) {
      (**(code **)(*this_ptr + 0xd00))();
    }
    else if (iVar6 == 2) {
      (**(code **)(*this_ptr + 0xd00))();
    }
    iVar6 = (**(code **)(*this_ptr + 0xd08))();
    if (iVar5 != iVar6) {
      (**(code **)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                  *this_ptr + 0x40))();
    }
    if (!bVar1) {
      FUN_00d50b20();
    }
  }
  if (local_31 != '\0') {
    FUN_00d50b20();
  }
  return;
}

