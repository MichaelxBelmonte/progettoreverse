// Function: FUN_01b6dee0
// Address: 01b6dee0
// Size: 1708 bytes
// Class: Unknown

void FUN_01b6dee0(uint32_t param_1,uint32_t param_2)

{
  bool bVar1;
  int64_t lVar2;
  char cVar3;
  int64_t lVar4;
  char *pcVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar6;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  uint local_94;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  if ((g_028b5460 == 0) || (g_028b5469 == '\0')) {
    FUN_00e8cb50();
    lVar2 = g_027ebe68;
    if (g_028b5460 == 0) {
      if (g_027ebe68 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      local_90 = local_58;
      local_88 = 0;
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_88 = '\x01';
      FUN_01d20ca0(g_0241ea30);
      lVar4 = g_028b5460;
      if (g_028b5460 != local_48) {
        if (local_40[0] == '\0') {
          if (local_48 == 0) {
            lVar4 = 0;
          }
          else {
            FUN_00d50b00();
            lVar4 = local_48;
          }
        }
        else {
          local_40[0] = '\0';
          lVar4 = local_48;
        }
        bVar1 = g_028b5460 != 0;
        g_028b5460 = lVar4;
        if (bVar1) {
          FUN_00d50b20();
          lVar4 = local_48;
        }
      }
      if ((lVar4 != 0) && (g_028b5468 == '\0')) {
        g_028b5468 = '\x01';
        FUN_00e8cb90();
        lVar4 = local_48;
      }
      if ((local_40[0] != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      g_028b5469 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b5469 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((g_028b5470 == 0) || (g_028b5479 == '\0')) {
    FUN_00e8cb50();
    lVar2 = g_027ebc00;
    if (g_028b5470 == 0) {
      if (g_027ebc00 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      local_80 = local_58;
      local_78 = 0;
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_78 = '\x01';
      FUN_01d20ca0(g_023b1900);
      lVar4 = g_028b5470;
      if (g_028b5470 != local_48) {
        if (local_40[0] == '\0') {
          if (local_48 == 0) {
            lVar4 = 0;
          }
          else {
            FUN_00d50b00();
            lVar4 = local_48;
          }
        }
        else {
          local_40[0] = '\0';
          lVar4 = local_48;
        }
        bVar1 = g_028b5470 != 0;
        g_028b5470 = lVar4;
        if (bVar1) {
          FUN_00d50b20();
          lVar4 = local_48;
        }
      }
      if ((lVar4 != 0) && (g_028b5478 == '\0')) {
        g_028b5478 = '\x01';
        FUN_00e8cb90();
        lVar4 = local_48;
      }
      if ((local_40[0] != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      FUN_01d21160();
      g_028b5479 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b5479 = '\x01';
      FUN_00e8cb70();
    }
  }
  if (*(char *)((int64_t)arg1 + 0x1b1) != '\0') {
    *(void*)(this_ptr + 1) = 0;
    lVar2 = g_028b5470;
joined_r0x01b6e2a7:
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar2;
    *(void*)(this_ptr + 1) = 1;
    return;
  }
  if (*(char *)((int64_t)arg1 + 0x1b2) != '\0') {
    *(void*)(this_ptr + 1) = 0;
    lVar2 = g_028b5460;
    goto joined_r0x01b6e2a7;
  }
  local_94 = 3;
  FUN_01b6e930(param_1,&local_94,0);
  lVar2 = local_48;
  if (local_40[0] == '\0') {
    if (local_48 == 0) goto LAB_01b6e45a;
    FUN_00d50b00();
LAB_01b6e2fb:
    cVar3 = (**(code **)(*arg1 + 0xa78))();
    if (cVar3 != '\0') {
      if ((local_94 & 0xfffffffd) == 0) {
        *(void*)(this_ptr + 1) = 0;
        lVar2 = g_028b5460;
        if (g_028b5460 != 0) {
          FUN_00d50b00();
        }
        *this_ptr = lVar2;
        *(void*)(this_ptr + 1) = 1;
        goto LAB_01b6e57f;
      }
      local_b8 = lVar2;
      local_b0 = '\0';
      uVar6 = FUN_01b6d110(local_58,&local_b8);
      lVar2 = local_48;
      if ((local_40[0] == '\0') && (local_48 != 0)) {
        uVar6 = FUN_00d50b00();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        uVar6 = FUN_00d50b20();
      }
      if (arg1[0x37] != 0) {
        local_a8 = lVar2;
        local_a0 = '\0';
        FUN_00c9fe40(uVar6,&local_a8);
        lVar4 = local_48;
        pcVar5 = local_38;
        if (local_40[0] != '\0') {
          pcVar5 = local_40;
        }
        local_38[0] = local_40[0];
        *pcVar5 = '\0';
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] == '\0') && (lVar4 != 0)) {
          FUN_00d50b00();
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        if (lVar4 != 0) {
          uVar6 = FUN_00dd6ab0();
          cVar3 = FUN_00d05410(param_1,uVar6,param_2);
          if (cVar3 != '\0') {
            FUN_01e4ad10(param_1);
            FUN_00d50b20();
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
            goto LAB_01b6e57f;
          }
          FUN_00d50b20();
        }
      }
      local_60 = lVar2;
      FUN_01d3a560();
      local_70 = local_48;
      local_68 = 0;
      if (local_40[0] == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40[0] = '\0';
      }
      lVar2 = local_60;
      local_68 = '\x01';
      cVar3 = (**(code **)(*arg1 + 0x970))();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (cVar3 != '\0') {
        *(void*)(this_ptr + 1) = 0;
        lVar2 = g_028b5460;
        if (g_028b5460 != 0) {
          FUN_00d50b00();
        }
        *this_ptr = lVar2;
        *(void*)(this_ptr + 1) = 1;
        if (local_60 != 0) {
          FUN_00d50b20();
        }
        goto LAB_01b6e57f;
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    bVar1 = false;
  }
  else {
    if (local_48 != 0) goto LAB_01b6e2fb;
LAB_01b6e45a:
    bVar1 = true;
  }
  FUN_01e4ad10(param_1);
  if (bVar1) {
    return;
  }
LAB_01b6e57f:
  FUN_00d50b20();
  return;
}

