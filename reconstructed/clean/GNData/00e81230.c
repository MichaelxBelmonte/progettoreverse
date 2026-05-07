// Function: FUN_00e81230
// Address: 00e81230
// Size: 1084 bytes
// Class: GNData
// String references:
//   "GNData"
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


int64_t * FUN_00e81230(int64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t arg1;
  int64_t *this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t uVar5;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  cVar2 = (**(code **)(*(int64_t *)*param_2 + 0x140))();
  if (cVar2 == '\0') {
LAB_00e812ff:
    *(void*)(this_ptr + 1) = 0;
    lVar1 = param_2[1];
    *this_ptr = *param_2;
    plVar4 = this_ptr + 1;
    if ((char)lVar1 != '\0') {
      plVar4 = param_2 + 1;
      *(void*)(this_ptr + 1) = 1;
    }
    *(void*)plVar4 = 0;
  }
  else {
    plVar4 = (int64_t *)*param_2;
    uVar5 = extraout_XMM0_Da;
    if ((g_026d0220 == '\0') &&
       (iVar3 = ___cxa_guard_acquire(), uVar5 = extraout_XMM0_Da_02, iVar3 != 0)) {
      g_02789148 = FUN_00d4fe50();
      g_02789130 = "GNData";
      g_02789138 = 0x28;
      g_02789140 = FUN_000378a0;
      g_02789150 = 0;
      ram_0000000002789158 = 0;
      g_02789160 = 0;
      ram_0000000002789168 = 0;
      g_02789170 = 0;
      ram_0000000002789178 = 0;
      g_02789180 = 0;
      ram_0000000002789188 = 0;
      g_02789190 = 0;
      ram_0000000002789198 = 0;
      g_027891a0 = 0;
      ram_00000000027891a8 = 0;
      g_027891b0 = 0;
      ram_00000000027891b8 = 0;
      g_027891c0 = 0;
      ram_00000000027891c8 = 0;
      g_027891d0 = 0;
      ram_00000000027891d8 = 0;
      g_027891e0 = 0;
      ram_00000000027891e8 = 0;
      g_027891f0 = 0;
      uVar5 = ___cxa_guard_release();
    }
    if (plVar4 == (int64_t *)0x0) {
LAB_00e8129d:
      plVar4 = &g_02802688;
    }
    else {
      (**(code **)(*plVar4 + 0x360))();
      cVar2 = FUN_00e85ea0();
      plVar4 = param_2;
      uVar5 = extraout_XMM0_Da_00;
      if (cVar2 == '\0') goto LAB_00e8129d;
    }
    lVar1 = *plVar4;
    if (lVar1 != 0) {
      plVar4 = (int64_t *)*param_1;
      uVar5 = FUN_00e8b690();
      if (plVar4 == (int64_t *)0x0) {
LAB_00e812ea:
        param_1 = &g_02802688;
      }
      else {
        (**(code **)(*plVar4 + 0x360))();
        cVar2 = FUN_00e85ea0();
        uVar5 = extraout_XMM0_Da_01;
        if (cVar2 == '\0') goto LAB_00e812ea;
      }
      if (*param_1 != 0) goto LAB_00e812ff;
    }
    local_a0 = *param_2;
    local_98 = '\0';
    FUN_019a54a0(uVar5,&local_a0);
    local_38[0] = local_40[0];
    plVar4 = (int64_t *)local_40;
    if (local_40[0] == '\0') {
      plVar4 = (int64_t *)local_38;
    }
    *(void*)plVar4 = 0;
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 == 0) {
      if (lVar1 == 0) {
        if (*(int64_t **)(arg1 + 0x50) == (int64_t *)0x0) {
          FUN_00e7ebe0(0);
          plVar4 = this_ptr + 1;
          *(void*)(this_ptr + 1) = 0;
          *this_ptr = 0;
          if (local_40[0] != '\0') {
            *(void*)plVar4 = 1;
            plVar4 = (int64_t *)local_40;
          }
          *(void*)plVar4 = 0;
        }
        else {
          local_60 = *param_2;
          local_58 = '\0';
          (**(code **)(**(int64_t **)(arg1 + 0x50) + 0x28))(&local_60);
          plVar4 = this_ptr + 1;
          *(void*)(this_ptr + 1) = 0;
          *this_ptr = 0;
          if (local_40[0] != '\0') {
            *(void*)plVar4 = 1;
            plVar4 = (int64_t *)local_40;
          }
          *(void*)plVar4 = 0;
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_90 = *param_2;
        local_88 = '\0';
        uVar5 = FUN_00c8e4f0();
        if (local_40[0] != '\0') {
          local_40[0] = '\0';
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          uVar5 = FUN_00d50b20();
        }
        local_80 = local_48;
        local_78 = '\0';
        local_70 = *param_2;
        local_68 = '\0';
        FUN_019b43b0(uVar5,&local_70);
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        *this_ptr = 0;
        *(void*)(this_ptr + 1) = 1;
      }
    }
    else {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = local_48;
      if (local_38[0] == '\0') {
        *(void*)(this_ptr + 1) = 0;
      }
      else {
        *(void*)(this_ptr + 1) = 1;
      }
    }
  }
  return this_ptr;
}

