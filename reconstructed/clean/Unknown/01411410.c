// Function: FUN_01411410
// Address: 01411410
// Size: 4194 bytes
// Class: Unknown

void FUN_01411410(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  byte bVar9;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar10;
  int64_t *local_50;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(arg1 + 0x18) == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  lVar10 = *param_2;
  if (lVar10 == 0) {
    FUN_0177f010();
    lVar10 = *param_2;
    if (lVar10 == local_40) {
      if (((char)param_2[1] != '\0') || (local_40 == 0)) goto LAB_014114ed;
      if (local_38 == '\0') {
        FUN_00d50b00();
        goto LAB_014114e6;
      }
LAB_014114b1:
      local_50 = param_2 + 1;
      *(void*)local_50 = 1;
    }
    else {
      lVar6 = param_2[1];
      if (local_38 != '\0') {
        *param_2 = local_40;
        if (((char)lVar6 != '\0') && (lVar10 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_014114b1;
      }
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      *param_2 = local_40;
      if (((char)lVar6 != '\0') && (lVar10 != 0)) {
        FUN_00d50b20();
      }
LAB_014114e6:
      local_50 = param_2 + 1;
      *(void*)local_50 = 1;
LAB_014114ed:
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    lVar10 = *param_2;
  }
  lVar6 = *(int64_t *)(arg1 + 0x10);
  if (lVar6 != lVar10) {
    if (lVar10 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(arg1 + 0x10) = lVar10;
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_017162e0();
  plVar1 = (int64_t *)(arg1 + 0x30);
  lVar10 = *(int64_t *)(arg1 + 0x30);
  lVar6 = lVar10;
  if (lVar10 != local_40) {
    lVar6 = local_40;
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar6 = 0;
        goto LAB_01411550;
      }
      FUN_00d50b00();
      lVar10 = *plVar1;
      *plVar1 = local_40;
    }
    else {
      local_38 = '\0';
LAB_01411550:
      *plVar1 = lVar6;
    }
    if (lVar10 != 0) {
      FUN_00d50b20();
      lVar6 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  FUN_017162e0();
  lVar10 = *(int64_t *)(arg1 + 0x38);
  lVar6 = lVar10;
  if (lVar10 != local_40) {
    lVar6 = local_40;
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar6 = 0;
        goto LAB_014115c2;
      }
      FUN_00d50b00();
      lVar10 = *(int64_t *)(arg1 + 0x38);
      *(int64_t *)(arg1 + 0x38) = local_40;
    }
    else {
      local_38 = '\0';
LAB_014115c2:
      *(int64_t *)(arg1 + 0x38) = lVar6;
    }
    if (lVar10 != 0) {
      FUN_00d50b20();
      lVar6 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  FUN_017162e0();
  lVar10 = *(int64_t *)(arg1 + 0x40);
  lVar6 = lVar10;
  if (lVar10 != local_40) {
    lVar6 = local_40;
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar6 = 0;
        goto LAB_01411634;
      }
      FUN_00d50b00();
      lVar10 = *(int64_t *)(arg1 + 0x40);
      *(int64_t *)(arg1 + 0x40) = local_40;
    }
    else {
      local_38 = '\0';
LAB_01411634:
      *(int64_t *)(arg1 + 0x40) = lVar6;
    }
    if (lVar10 != 0) {
      FUN_00d50b20();
      lVar6 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  FUN_017162e0();
  lVar10 = *(int64_t *)(arg1 + 0x48);
  lVar6 = lVar10;
  if (lVar10 != local_40) {
    lVar6 = local_40;
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar6 = 0;
        goto LAB_014116a6;
      }
      FUN_00d50b00();
      lVar10 = *(int64_t *)(arg1 + 0x48);
      *(int64_t *)(arg1 + 0x48) = local_40;
    }
    else {
      local_38 = '\0';
LAB_014116a6:
      *(int64_t *)(arg1 + 0x48) = lVar6;
    }
    if (lVar10 != 0) {
      FUN_00d50b20();
      lVar6 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(arg1 + 0x50) != 0) {
    *(void*)(arg1 + 0x50) = 0;
    FUN_00d50b20();
  }
  FUN_017162e0();
  lVar10 = *(int64_t *)(arg1 + 0x58);
  lVar6 = lVar10;
  if (lVar10 != local_40) {
    lVar6 = local_40;
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar6 = 0;
        goto LAB_0141172e;
      }
      FUN_00d50b00();
      lVar10 = *(int64_t *)(arg1 + 0x58);
      *(int64_t *)(arg1 + 0x58) = local_40;
    }
    else {
      local_38 = '\0';
LAB_0141172e:
      *(int64_t *)(arg1 + 0x58) = lVar6;
    }
    if (lVar10 != 0) {
      FUN_00d50b20();
      lVar6 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  lVar10 = *(int64_t *)(arg1 + 0x18);
  lVar6 = *(int64_t *)(arg1 + 0x20);
  if (lVar6 != lVar10) {
    if (lVar10 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(arg1 + 0x20) = lVar10;
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_0140f990();
  cVar3 = FUN_0140c2c0();
  lVar10 = g_027c0b28;
  if (cVar3 == '\0') {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  if (g_027c0b28 != 0) {
    FUN_00d50b00();
  }
  FUN_00d97f20();
  lVar6 = *(int64_t *)(arg1 + 0x20);
  lVar7 = lVar6;
  if (lVar6 == local_40) goto LAB_0141185c;
  lVar7 = local_40;
  if (local_38 == '\0') {
    if (local_40 == 0) {
      lVar7 = 0;
      goto LAB_01411806;
    }
    FUN_00d50b00();
    lVar6 = *(int64_t *)(arg1 + 0x20);
    *(int64_t *)(arg1 + 0x20) = local_40;
  }
  else {
    local_38 = '\0';
LAB_01411806:
    *(int64_t *)(arg1 + 0x20) = lVar7;
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
    lVar7 = local_40;
  }
LAB_0141185c:
  if ((local_38 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  if (lVar10 != 0) {
    FUN_00d50b20();
  }
  lVar10 = g_027c0b30;
  plVar2 = *(int64_t **)(arg1 + 0x20);
  if (g_027c0b30 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar2 + 0x50))();
  if (lVar10 != 0) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    FUN_0140c540();
    lVar10 = *(int64_t *)(arg1 + 0x20);
    if (lVar10 != 0) {
      FUN_00d50b00();
    }
    FUN_01400f40();
    lVar6 = *(int64_t *)(arg1 + 0x20);
    if (lVar6 == local_40) {
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
        lVar6 = *(int64_t *)(arg1 + 0x20);
      }
      *(int64_t *)(arg1 + 0x20) = local_40;
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    lVar10 = g_027cc8c0;
    if (g_027cc8c0 != 0) {
      FUN_00d50b00();
    }
    FUN_014068e0();
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    lVar10 = *(int64_t *)(arg1 + 0x60);
    if (lVar10 != 0) {
      FUN_00d50b00();
    }
    FUN_014068e0();
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    FUN_0140e1e0();
    lVar10 = g_02781610;
    if (g_02781610 != 0) {
      FUN_00d50b00();
    }
    FUN_0140e8b0();
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    lVar10 = g_027cd570;
    if (g_027cd570 != 0) {
      FUN_00d50b00();
    }
    FUN_0140e8b0();
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    FUN_0140d370();
    FUN_0140d780();
    FUN_0140db30();
    FUN_0140e440();
  }
  FUN_01715620();
  FUN_01716350();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_01715630();
  FUN_01716a00();
  if (*(int64_t *)(arg1 + 0x50) != 0) {
    uVar8 = *(uint64_t *)(*(int64_t *)(arg1 + 0x50) + 0x18);
    if (((uint)uVar8 & 0xf) != 0xf) {
      FUN_01715d40();
      uVar8 = *(uint64_t *)(*(int64_t *)(arg1 + 0x50) + 0x18);
    }
    if (((uint)(uVar8 >> 4) & 0xf) != 0xf) {
      FUN_01715d40();
      uVar8 = *(uint64_t *)(*(int64_t *)(arg1 + 0x50) + 0x18);
    }
    if (((uint)(uVar8 >> 8) & 0xf) != 0xf) {
      FUN_01715d40();
      uVar8 = *(uint64_t *)(*(int64_t *)(arg1 + 0x50) + 0x18);
    }
    if (((uint)(uVar8 >> 0xc) & 0xf) != 0xf) {
      FUN_01715d40();
      uVar8 = *(uint64_t *)(*(int64_t *)(arg1 + 0x50) + 0x18);
    }
    if (((uint)(uVar8 >> 0x10) & 0xf) != 0xf) {
      FUN_01715d40();
      uVar8 = *(uint64_t *)(*(int64_t *)(arg1 + 0x50) + 0x18);
    }
    if (((uint)(uVar8 >> 0x14) & 0xf) != 0xf) {
      FUN_01715d40();
      uVar8 = *(uint64_t *)(*(int64_t *)(arg1 + 0x50) + 0x18);
    }
    if (((uint)(uVar8 >> 0x18) & 0xf) != 0xf) {
      FUN_01715d40();
      uVar8 = *(uint64_t *)(*(int64_t *)(arg1 + 0x50) + 0x18);
    }
    if (((uint)(uVar8 >> 0x1c) & 0xf) != 0xf) {
      FUN_01715d40();
      uVar8 = *(uint64_t *)(*(int64_t *)(arg1 + 0x50) + 0x18);
    }
    uVar4 = (uint)(uVar8 >> 0x20);
    if ((uVar4 & 0xf) != 0xf) {
      FUN_01715d40();
      uVar4 = (uint)((uint64_t)*(void*)(*(int64_t *)(arg1 + 0x50) + 0x18) >> 0x20);
    }
    if ((uVar4 >> 4 & 0xf) != 0xf) {
      FUN_01715d40();
      uVar4 = (uint)((uint64_t)*(void*)(*(int64_t *)(arg1 + 0x50) + 0x18) >> 0x20);
    }
    if ((uVar4 >> 8 & 0xf) != 0xf) {
      FUN_01715d40();
      uVar4 = (uint)((uint64_t)*(void*)(*(int64_t *)(arg1 + 0x50) + 0x18) >> 0x20);
    }
    if ((uVar4 >> 0xc & 0xf) != 0xf) {
      FUN_01715d40();
    }
  }
  iVar5 = 0;
  lVar10 = 0;
  do {
    uVar4 = (uint)(*(uint64_t *)(*(int64_t *)(arg1 + 0x38) + 0x18) >> ((byte)iVar5 & 0x3f)) &
            0xf;
    if (uVar4 != 0xf) {
      FUN_01715d40(iVar5,uVar4);
      if (uVar4 == 8) {
        cVar3 = FUN_01716e70();
        if (cVar3 != '\0') {
          FUN_01717260();
          FUN_01715d40();
        }
      }
      else if (uVar4 == 10) {
        FUN_01715d40();
        cVar3 = FUN_01716e70();
        if (cVar3 != '\0') {
          FUN_01717260();
          FUN_01715d40();
        }
      }
      else if (uVar4 == 0xc) {
        cVar3 = FUN_01716910();
        if ((cVar3 == '\0') && (cVar3 = FUN_01716e70(), cVar3 == '\0')) {
          FUN_01715d40();
        }
        FUN_01715d40();
        cVar3 = FUN_01716e70();
        if (cVar3 != '\0') {
          FUN_01717260();
          FUN_01715d40();
        }
      }
    }
    lVar10 = lVar10 + 1;
    iVar5 = iVar5 + 4;
  } while (lVar10 != 0xc);
  FUN_017162e0();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  bVar9 = 0;
  lVar10 = 0;
  do {
    uVar4 = (uint)(*(uint64_t *)(*(int64_t *)(arg1 + 0x58) + 0x18) >> (bVar9 & 0x3f)) & 0xf;
    if (uVar4 != 0xf) {
      cVar3 = FUN_01716e70();
      if ((cVar3 == '\0') && (cVar3 = FUN_01716e70(), cVar3 != '\0')) {
        FUN_01716e90();
      }
      FUN_01715d40();
      FUN_01715d40();
      if (uVar4 == 0xc) {
        cVar3 = FUN_01716910();
        if ((cVar3 == '\0') && (cVar3 = FUN_01716e70(), cVar3 == '\0')) {
          FUN_01715d40();
        }
        cVar3 = FUN_01716910();
        if ((cVar3 == '\0') && (cVar3 = FUN_01716e70(), cVar3 == '\0')) {
          FUN_01715d40();
        }
        cVar3 = FUN_01716910();
        if ((cVar3 == '\0') && (cVar3 = FUN_01716e70(), cVar3 == '\0')) {
          FUN_01715d40();
        }
      }
      else if (uVar4 == 10) {
        cVar3 = FUN_01716910();
        if ((cVar3 == '\0') && (cVar3 = FUN_01716e70(), cVar3 == '\0')) {
          FUN_01715d40();
        }
        cVar3 = FUN_01716910();
        if ((cVar3 == '\0') && (cVar3 = FUN_01716e70(), cVar3 == '\0')) {
          FUN_01715d40();
        }
      }
      else if (((uVar4 == 8) && (cVar3 = FUN_01716910(), cVar3 == '\0')) &&
              (cVar3 = FUN_01716e70(), cVar3 == '\0')) {
        FUN_01715d40();
      }
    }
    lVar10 = lVar10 + 1;
    bVar9 = bVar9 + 4;
  } while (lVar10 != 0xc);
  uVar8 = *(uint64_t *)(*(int64_t *)(arg1 + 0x40) + 0x18);
  uVar4 = (uint)uVar8 & 0xf;
  if (uVar4 != 0xf) {
    FUN_01715d40(uVar4,uVar4);
    uVar8 = *(uint64_t *)(*(int64_t *)(arg1 + 0x40) + 0x18);
  }
  if (((uint)(uVar8 >> 4) & 0xf) != 0xf) {
    FUN_01715d40();
    uVar8 = *(uint64_t *)(*(int64_t *)(arg1 + 0x40) + 0x18);
  }
  if (((uint)(uVar8 >> 8) & 0xf) != 0xf) {
    FUN_01715d40();
    uVar8 = *(uint64_t *)(*(int64_t *)(arg1 + 0x40) + 0x18);
  }
  if (((uint)(uVar8 >> 0xc) & 0xf) != 0xf) {
    FUN_01715d40();
    uVar8 = *(uint64_t *)(*(int64_t *)(arg1 + 0x40) + 0x18);
  }
  if (((uint)(uVar8 >> 0x10) & 0xf) != 0xf) {
    FUN_01715d40();
    uVar8 = *(uint64_t *)(*(int64_t *)(arg1 + 0x40) + 0x18);
  }
  if (((uint)(uVar8 >> 0x14) & 0xf) != 0xf) {
    FUN_01715d40();
    uVar8 = *(uint64_t *)(*(int64_t *)(arg1 + 0x40) + 0x18);
  }
  if (((uint)(uVar8 >> 0x18) & 0xf) != 0xf) {
    FUN_01715d40();
    uVar8 = *(uint64_t *)(*(int64_t *)(arg1 + 0x40) + 0x18);
  }
  if (((uint)(uVar8 >> 0x1c) & 0xf) != 0xf) {
    FUN_01715d40();
    uVar8 = *(uint64_t *)(*(int64_t *)(arg1 + 0x40) + 0x18);
  }
  uVar4 = (uint)(uVar8 >> 0x20);
  if ((uVar4 & 0xf) != 0xf) {
    FUN_01715d40();
    uVar4 = (uint)((uint64_t)*(void*)(*(int64_t *)(arg1 + 0x40) + 0x18) >> 0x20);
  }
  if ((uVar4 >> 4 & 0xf) != 0xf) {
    FUN_01715d40();
    uVar4 = (uint)((uint64_t)*(void*)(*(int64_t *)(arg1 + 0x40) + 0x18) >> 0x20);
  }
  if ((uVar4 >> 8 & 0xf) != 0xf) {
    FUN_01715d40();
    uVar4 = (uint)((uint64_t)*(void*)(*(int64_t *)(arg1 + 0x40) + 0x18) >> 0x20);
  }
  if ((uVar4 >> 0xc & 0xf) != 0xf) {
    FUN_01715d40();
  }
  lVar10 = 0;
  do {
    if (((uint)(*(uint64_t *)(*(int64_t *)(arg1 + 0x48) + 0x18) >> ((byte)lVar10 & 0x3f)) &
        0xf) != 0xf) {
      iVar5 = FUN_01717260();
      if (iVar5 != -1) {
        FUN_01716e90();
      }
      if (lVar10 == 0) {
        FUN_01715d40();
      }
    }
    lVar10 = lVar10 + 4;
  } while (lVar10 != 0x30);
  uVar8 = *(uint64_t *)(*plVar1 + 0x18);
  if (((uint)uVar8 & 0xf) != 0xf) {
    FUN_01715d40();
    uVar8 = *(uint64_t *)(*plVar1 + 0x18);
  }
  if (((uint)(uVar8 >> 4) & 0xf) != 0xf) {
    FUN_01715d40();
    uVar8 = *(uint64_t *)(*plVar1 + 0x18);
  }
  if (((uint)(uVar8 >> 8) & 0xf) != 0xf) {
    FUN_01715d40();
    uVar8 = *(uint64_t *)(*plVar1 + 0x18);
  }
  if (((uint)(uVar8 >> 0xc) & 0xf) != 0xf) {
    FUN_01715d40();
    uVar8 = *(uint64_t *)(*plVar1 + 0x18);
  }
  if (((uint)(uVar8 >> 0x10) & 0xf) != 0xf) {
    FUN_01715d40();
    uVar8 = *(uint64_t *)(*plVar1 + 0x18);
  }
  if (((uint)(uVar8 >> 0x14) & 0xf) != 0xf) {
    FUN_01715d40();
    uVar8 = *(uint64_t *)(*plVar1 + 0x18);
  }
  if (((uint)(uVar8 >> 0x18) & 0xf) != 0xf) {
    FUN_01715d40();
    uVar8 = *(uint64_t *)(*plVar1 + 0x18);
  }
  if (((uint)(uVar8 >> 0x1c) & 0xf) != 0xf) {
    FUN_01715d40();
    uVar8 = *(uint64_t *)(*plVar1 + 0x18);
  }
  uVar4 = (uint)(uVar8 >> 0x20);
  if ((uVar4 & 0xf) != 0xf) {
    FUN_01715d40();
    uVar4 = (uint)((uint64_t)*(void*)(*plVar1 + 0x18) >> 0x20);
  }
  if ((uVar4 >> 4 & 0xf) != 0xf) {
    FUN_01715d40();
    uVar4 = (uint)((uint64_t)*(void*)(*plVar1 + 0x18) >> 0x20);
  }
  if ((uVar4 >> 8 & 0xf) != 0xf) {
    FUN_01715d40();
    uVar4 = (uint)((uint64_t)*(void*)(*plVar1 + 0x18) >> 0x20);
  }
  if ((uVar4 >> 0xc & 0xf) != 0xf) {
    FUN_01715d40();
  }
  *this_ptr = local_40;
  *(void*)(this_ptr + 1) = 1;
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return;
}

