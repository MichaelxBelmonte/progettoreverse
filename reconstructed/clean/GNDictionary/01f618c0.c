// Function: FUN_01f618c0
// Address: 01f618c0
// Size: 791 bytes
// Class: GNDictionary
// String references:
//   "GNDictionary"

int64_t * FUN_01f618c0(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar6;
  int64_t lVar7;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar8;
  int64_t local_60;
  char local_58;
  
  plVar5 = (int64_t *)*param_2;
  if ((g_026fdd40 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
  if (plVar5 == (int64_t *)0x0) {
LAB_01f6191f:
    plVar5 = &g_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar5 = param_2;
    if (cVar2 == '\0') goto LAB_01f6191f;
  }
  lVar7 = *plVar5;
  if (lVar7 == 0) {
    lVar6 = *param_2;
    lVar7 = 0;
    cVar2 = '\0';
    if (lVar6 == 0) goto LAB_01f61a29;
joined_r0x01f61a19:
    if ((lVar6 != 0) && ((char)param_2[1] != '\0')) {
      FUN_00d50b00();
LAB_01f61a61:
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = lVar6;
      *(void*)(this_ptr + 1) = 1;
      goto joined_r0x01f61b0d;
    }
LAB_01f61a7a:
    *(void*)(this_ptr + 1) = 0;
LAB_01f61ac8:
    if (lVar6 == 0) {
      *this_ptr = 0;
      *(void*)(this_ptr + 1) = 1;
      goto joined_r0x01f61b0d;
    }
    FUN_00d50b00();
  }
  else {
    cVar2 = (char)plVar5[1];
    if (cVar2 != '\0') {
      FUN_00d50b00();
    }
    lVar6 = g_027e7c20;
    if (*param_2 == 0) {
LAB_01f61a29:
      lVar6 = *(int64_t *)(arg1 + 0x90);
      if (lVar6 != 0) {
        FUN_00d50b00();
        goto LAB_01f61a61;
      }
      lVar6 = 0;
      goto LAB_01f61a7a;
    }
    if (g_027e7c20 != 0) {
      FUN_00d50b00();
    }
    cVar3 = FUN_00c9ff50();
    uVar8 = extraout_XMM0_Da;
    if (lVar6 != 0) {
      uVar8 = FUN_00d50b20();
    }
    lVar1 = g_027e7c20;
    if (cVar3 == '\0') {
      lVar6 = *param_2;
      goto joined_r0x01f61a19;
    }
    if (g_027e7c20 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_60 = lVar1;
    local_58 = '\x01';
    FUN_000175c0(uVar8,&local_60);
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 1) = 0;
    if (lVar6 == 0) goto LAB_01f61ac8;
  }
  *this_ptr = lVar6;
  *(void*)(this_ptr + 1) = 1;
joined_r0x01f61b0d:
  if ((cVar2 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

