// Function: FUN_01e02bc0
// Address: 01e02bc0
// Size: 517 bytes
// Class: GNDictionary
// String references:
//   "GNDictionary"

void FUN_01e02bc0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t *arg1;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar7;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  plVar6 = (int64_t *)*arg1;
  if (plVar6 != (int64_t *)0x0) {
    if ((g_026fdd40 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
      ___cxa_guard_release();
    }
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar6 = arg1;
    if (cVar4 == '\0') {
      plVar6 = &g_02802688;
    }
    if (*plVar6 != 0) {
      lVar1 = *arg1;
      lVar2 = arg1[1];
      uVar7 = extraout_XMM0_Da;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        uVar7 = FUN_00d50b00();
      }
      lVar3 = g_027f2f38;
      if (g_027f2f38 != 0) {
        uVar7 = FUN_00d50b00();
      }
      local_48 = lVar3;
      local_40 = '\x01';
      FUN_000175c0(uVar7,&local_48);
      lVar3 = local_38;
      if (local_30 == '\0') {
        if (((local_38 != 0) && (FUN_00d50b00(), local_30 != '\0')) && (local_38 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_30 = '\0';
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d45870();
        FUN_01e00d40();
        FUN_00d50b20();
      }
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}

