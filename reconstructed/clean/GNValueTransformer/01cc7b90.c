// Function: FUN_01cc7b90
// Address: 01cc7b90
// Size: 1254 bytes
// Class: GNValueTransformer
// String references:
//   "GNValueTransformer"

void FUN_01cc7b90(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t *arg1;
  void*this_ptr;
  int64_t **pplVar6;
  bool bVar7;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar8;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  if ((*arg1 == 0) || (iVar4 = FUN_00d8c7a0(), iVar4 == 0)) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  if ((g_028b74d0 == (int64_t *)0x0) || (uVar8 = extraout_XMM0_Da, g_028b74d9 == '\0')) {
    FUN_00e8cb50();
    if (g_028b74d0 == (int64_t *)0x0) {
      plVar5 = (int64_t *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar5 + 0x18))();
      bVar7 = g_028b74d0 == (int64_t *)0x0;
      g_028b74d0 = plVar5;
      if (((bVar7) || (FUN_00d50b20(), g_028b74d0 != (int64_t *)0x0)) && (g_028b74d8 == '\0'))
      {
        g_028b74d8 = '\x01';
        FUN_00e8cb90();
      }
      g_028b74d9 = '\x01';
      uVar8 = FUN_00e8cb70();
    }
    else {
      g_028b74d9 = '\x01';
      uVar8 = FUN_00e8cb70();
    }
  }
  local_90 = *arg1;
  local_88 = '\0';
  FUN_01cc8810(uVar8,&local_90);
  plVar5 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = g_027edfa0;
  if (plVar5 != (int64_t *)0x0) goto LAB_01cc7faa;
  plVar1 = (int64_t *)*arg1;
  if (g_027edfa0 != 0) {
    FUN_00d50b00();
  }
  local_80 = lVar2;
  local_78 = '\x01';
  cVar3 = (**(code **)(*plVar1 + 0x50))();
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = g_027edfa8;
  if (cVar3 == '\0') {
    plVar1 = (int64_t *)*arg1;
    if (g_027edfa8 != 0) {
      FUN_00d50b00();
    }
    local_70 = lVar2;
    local_68 = '\x01';
    cVar3 = (**(code **)(*plVar1 + 0x50))();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = g_027edfb0;
    if (cVar3 == '\0') {
      plVar1 = (int64_t *)*arg1;
      if (g_027edfb0 != 0) {
        FUN_00d50b00();
      }
      local_60 = lVar2;
      local_58 = '\x01';
      cVar3 = (**(code **)(*plVar1 + 0x50))();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        local_50 = *arg1;
        local_48 = '\0';
        FUN_00c80cd0();
        plVar1 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
             (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (int64_t *)0x0) {
          pplVar6 = &local_40;
          FUN_00c811e0();
          plVar1 = local_40;
          if ((g_027edff0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
            g_027e6478 = FUN_00d4fe50();
            g_027e6460 = "GNValueTransformer";
            g_027e6468 = 0x10;
            g_027e6470 = FUN_01ccef80;
            g_027e6480 = 0;
            ram_00000000027e6488 = 0;
            g_027e6490 = 0;
            ram_00000000027e6498 = 0;
            g_027e64a0 = 0;
            ram_00000000027e64a8 = 0;
            g_027e64b0 = 0;
            ram_00000000027e64b8 = 0;
            g_027e64c0 = 0;
            ram_00000000027e64c8 = 0;
            g_027e64d0 = 0;
            ram_00000000027e64d8 = 0;
            g_027e64e0 = 0;
            ram_00000000027e64e8 = 0;
            g_027e64f0 = 0;
            ram_00000000027e64f8 = 0;
            g_027e6500 = 0;
            ram_00000000027e6508 = 0;
            g_027e6510 = 0;
            ram_00000000027e6518 = 0;
            g_027e6520 = 0;
            ___cxa_guard_release();
          }
          if (plVar1 == (int64_t *)0x0) {
LAB_01cc7ee1:
            pplVar6 = (int64_t **)&g_02802688;
          }
          else {
            (**(code **)(*plVar1 + 0x360))();
            cVar3 = FUN_00e85ea0();
            if (cVar3 == '\0') goto LAB_01cc7ee1;
          }
          plVar1 = *pplVar6;
          if (plVar1 != (int64_t *)0x0) {
            plVar5 = plVar1;
            if (*(char *)(pplVar6 + 1) == '\0') {
              FUN_00d50b00();
            }
            else {
              *(void*)(pplVar6 + 1) = 0;
            }
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar5 != (int64_t *)0x0) {
            (**(code **)(*plVar5 + 0x18))();
          }
          FUN_00d50b20();
        }
        if (plVar5 == (int64_t *)0x0) {
          plVar5 = (int64_t *)0x0;
          goto LAB_01cc7faa;
        }
      }
      else {
        plVar5 = (int64_t *)FUN_00e8fc40();
        FUN_00d4ff40();
        *plVar5 = (int64_t)&g_02673f68;
        FUN_00d500e0();
      }
    }
    else {
      plVar5 = (int64_t *)FUN_00e8fc40();
      FUN_00d4ff40();
      *plVar5 = (int64_t)&g_02673bd8;
      FUN_00d500e0();
    }
  }
  else {
    plVar5 = (int64_t *)FUN_00e8fc40();
    FUN_00d4ff40();
    *plVar5 = (int64_t)&g_02673848;
    FUN_00d500e0();
  }
  FUN_01cc85d0();
LAB_01cc7faa:
  *this_ptr = plVar5;
  *(void*)(this_ptr + 1) = 1;
  return;
}

