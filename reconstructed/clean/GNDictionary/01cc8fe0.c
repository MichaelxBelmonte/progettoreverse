// Function: FUN_01cc8fe0
// Address: 01cc8fe0
// Size: 656 bytes
// Class: GNDictionary
// String references:
//   "GNDictionary"

void FUN_01cc8fe0(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t *arg1;
  int64_t this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar7;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  int64_t *local_30;
  
  lVar3 = g_027edfb8;
  plVar6 = (int64_t *)*arg1;
  if (g_027edfb8 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar6 + 0x590))();
  uVar7 = extraout_XMM0_Da;
  if (lVar3 != 0) {
    uVar7 = FUN_00d50b20();
  }
  lVar3 = g_027edfb8;
  if (cVar4 != '\0') {
    plVar6 = (int64_t *)*arg1;
    if (g_027edfb8 != 0) {
      uVar7 = FUN_00d50b00();
    }
    local_60 = lVar3;
    local_58 = '\x01';
    (**(code **)(*plVar6 + 0x578))(uVar7,&local_60);
    plVar6 = local_40;
    local_30 = local_40;
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) {
        local_30 = (int64_t *)0x0;
        plVar6 = (int64_t *)0x0;
      }
      else {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
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
    plVar1 = local_30;
    plVar2 = g_02802688;
    if (plVar6 != (int64_t *)0x0) {
      (**(code **)(*plVar6 + 0x360))();
      cVar4 = FUN_00e85ea0();
      plVar1 = local_30;
      plVar2 = g_02802688;
      if (cVar4 != '\0') {
        plVar2 = local_30;
      }
    }
    local_30 = plVar1;
    if ((plVar2 != (int64_t *)0x0) && (plVar6 = *(int64_t **)(this_ptr + 0x38), plVar6 != plVar1)
       ) {
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *(int64_t **)(this_ptr + 0x38) = plVar1;
      if (plVar6 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  local_50 = *arg1;
  local_48 = '\0';
  FUN_00d61ea0();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  return;
}

