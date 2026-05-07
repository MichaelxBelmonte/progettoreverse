// Function: FUN_01f62050
// Address: 01f62050
// Size: 3209 bytes
// Class: GNDictionary


/* WARNING: Removing unreachable block (ram,0x01f623ef) */
/* WARNING: Removing unreachable block (ram,0x01f623fb) */
/* WARNING: Removing unreachable block (ram,0x01f62636) */
/* WARNING: Removing unreachable block (ram,0x01f62642) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f62050(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  byte bVar10;
  uint *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 *unaff_RDI;
  undefined7 uVar14;
  undefined4 uVar15;
  longlong local_b8;
  char local_b0;
  undefined8 *local_a8;
  char local_a0;
  undefined4 local_94;
  undefined8 *local_90;
  char local_88;
  undefined8 *local_80;
  char local_78;
  undefined8 *local_70;
  char local_68;
  ulonglong local_60;
  longlong local_58;
  char local_50;
  undefined8 local_48;
  undefined8 *local_40;
  char local_38;
  
  if (*param_2 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  FUN_00c77cd0();
  uVar3 = FUN_00c7b220();
  if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  puVar5 = (undefined8 *)0x0;
  uVar12 = 0;
  switch(uVar3) {
  case 0x43:
    puVar5 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar6 = &DAT_02590d10;
    *puVar5 = &DAT_02590d20;
    goto LAB_01f6217c;
  case 0x45:
    FUN_00dddf90();
    puVar5 = local_40;
    if (local_40 == (undefined8 *)0x0) {
LAB_01f6223d:
      puVar5 = (undefined8 *)0x0;
      uVar12 = 0;
    }
    else {
      uVar12 = 1;
      if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    break;
  case 0x50:
    FUN_00ddde70();
    puVar5 = local_40;
    if (local_40 == (undefined8 *)0x0) goto LAB_01f6223d;
    uVar12 = 1;
    if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    break;
  case 0x52:
    FUN_00dddf30();
    puVar5 = local_40;
    if (local_40 == (undefined8 *)0x0) goto LAB_01f6223d;
    uVar12 = 1;
    if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    break;
  case 0x53:
    FUN_00ddded0();
    puVar5 = local_40;
    if (local_40 == (undefined8 *)0x0) goto LAB_01f6223d;
    uVar12 = 1;
    if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    break;
  case 0x71:
    puVar5 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar6 = &DAT_025910e8;
    *puVar5 = &DAT_025910f8;
    *(undefined2 *)((longlong)puVar5 + 0xc) = 0;
    puVar5[2] = 0x100000000;
LAB_01f6217c:
    (**(code **)(puVar6 + 0x28))();
    uVar12 = 1;
  }
  local_60 = uVar12;
  FUN_00c77cd0();
  uVar3 = FUN_00c7b220();
  if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  plVar9 = DAT_028007c8;
  plVar7 = (longlong *)0x0;
  puVar11 = &switchD_01f62290::switchdataD_01f63404;
  puVar13 = puVar5;
  switch(uVar3) {
  case 0x40:
    if (DAT_028007c8 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    FUN_00c77cd0();
    FUN_00c798d0();
    local_90 = local_40;
    local_88 = 0;
    if (local_38 == '\0') {
      if (local_40 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_88 = '\x01';
    cVar4 = (**(code **)(*plVar9 + 0x50))();
    if ((local_88 != '\0') && (local_90 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    uVar15 = FUN_00d50b20();
    lVar1 = DAT_028007d0;
    if (cVar4 != '\0') {
      if (DAT_028007d0 != 0) {
        uVar15 = FUN_00d50b00();
      }
      local_b8 = 0;
      local_b0 = '\0';
      uVar8 = FUN_00ddfeb0(uVar15,&local_b8);
      puVar13 = local_40;
      uVar14 = (undefined7)((ulonglong)plVar9 >> 8);
      if (local_40 == puVar5) {
        if (((char)local_60 == '\0') && (local_40 != (undefined8 *)0x0)) {
          puVar13 = puVar5;
          if (local_38 != '\0') goto LAB_01f62796;
          uVar12 = CONCAT71(uVar14,1);
          FUN_00d50b00();
        }
        else {
          uVar12 = local_60 & 0xffffffff;
          puVar13 = puVar5;
        }
LAB_01f627e6:
        if ((local_38 == '\0') || (local_40 == (undefined8 *)0x0)) {
          local_60 = uVar12 & 0xffffffff;
        }
        else {
          FUN_00d50b20();
          local_60 = uVar12 & 0xffffffff;
        }
      }
      else {
        if (local_38 == '\0') {
          if (local_40 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
          uVar12 = CONCAT71(uVar14,1);
          if (((char)local_60 != '\0') && (puVar5 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01f627e6;
        }
        if (((char)local_60 != '\0') && (puVar5 != (undefined8 *)0x0)) {
          uVar8 = FUN_00d50b20();
        }
LAB_01f62796:
        local_38 = '\0';
        local_60 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    plVar9 = DAT_027815c0;
    if (DAT_027815c0 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    FUN_00c77cd0();
    FUN_00c798d0();
    local_70 = local_40;
    local_68 = 0;
    if (local_38 == '\0') {
      if (local_40 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_68 = '\x01';
    cVar4 = (**(code **)(*plVar9 + 0x50))();
    if (cVar4 == '\0') {
      if ((local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (puVar13 != (undefined8 *)0x0) goto LAB_01f62941;
      local_94 = (undefined4)CONCAT71((int7)((ulonglong)puVar11 >> 8),1);
      local_48 = 0;
      plVar7 = (longlong *)0x0;
    }
    else {
      if ((local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
LAB_01f62941:
      plVar7 = (longlong *)FUN_00e8fc40();
      FUN_0006daf0();
      *(undefined4 *)(plVar7 + 0x27) = 0;
      plVar7[0x2e] = 0;
      *(undefined4 *)(plVar7 + 0x2f) = 0;
      plVar7[0x30] = 0;
      *(undefined1 *)(plVar7 + 0x31) = 0;
      plVar7[0x28] = 0;
      plVar7[0x29] = 0;
      *(undefined4 *)(plVar7 + 0x2a) = 0;
      plVar7[0x2b] = 0;
      plVar7[0x2c] = 0;
      *(undefined8 *)((longlong)plVar7 + 0x165) = 0;
      *(undefined8 *)((longlong)plVar7 + 0x18c) = 0;
      *(undefined8 *)((longlong)plVar7 + 0x194) = 0;
      *(undefined8 *)((longlong)plVar7 + 0x199) = 0;
      plVar7[0x35] = 0;
      plVar7[0x36] = 0;
      plVar7[0x37] = 0;
      plVar7[0x38] = 0;
      *plVar7 = (longlong)&DAT_0269c118;
      plVar7[2] = (longlong)&DAT_0269cc70;
      plVar7[0x39] = (longlong)&DAT_0269ccb0;
      plVar7[0x45] = 0;
      *(undefined2 *)(plVar7 + 0x46) = 0;
      plVar7[0x47] = 0;
      plVar7[0x3a] = 0;
      plVar7[0x3b] = 0;
      *(undefined4 *)(plVar7 + 0x3c) = 0;
      plVar7[0x3f] = 0;
      plVar7[0x40] = 0;
      plVar7[0x3d] = 0;
      plVar7[0x3e] = 0;
      *(undefined8 *)((longlong)plVar7 + 0x205) = 0;
      plVar7[0x42] = 0;
      plVar7[0x43] = 0;
      *(undefined8 *)((longlong)plVar7 + 0x21d) = 0;
      (*DAT_0269c130)();
      uVar8 = (**(code **)(*plVar7 + 0x4d0))(DAT_02390d00,_DAT_02423960);
      if (puVar13 != (undefined8 *)0x0) {
        local_a0 = '\0';
        local_a8 = puVar13;
        uVar8 = FUN_01e058f0();
        local_94 = 0;
        local_48 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
        if ((local_a0 == '\0') || (local_a8 == (undefined8 *)0x0)) goto LAB_01f62acb;
        uVar8 = FUN_00d50b20();
      }
      local_48 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
      local_94 = 0;
    }
LAB_01f62acb:
    plVar9 = DAT_028007d8;
    if (DAT_028007d8 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    FUN_00c77cd0();
    FUN_00c798d0();
    local_80 = local_40;
    local_78 = 0;
    if (local_38 == '\0') {
      if (local_40 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_78 = '\x01';
    cVar4 = (**(code **)(*plVar9 + 0x50))();
    if ((local_78 != '\0') && (local_80 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (cVar4 == '\0') {
      cVar4 = (char)local_48;
    }
    else {
      plVar9 = (longlong *)FUN_00e8fc40();
      FUN_0006daf0();
      *(undefined4 *)(plVar9 + 0x27) = 0;
      plVar9[0x2e] = 0;
      *(undefined4 *)(plVar9 + 0x2f) = 0;
      plVar9[0x30] = 0;
      *(undefined1 *)(plVar9 + 0x31) = 0;
      plVar9[0x28] = 0;
      plVar9[0x29] = 0;
      *(undefined4 *)(plVar9 + 0x2a) = 0;
      plVar9[0x2b] = 0;
      plVar9[0x2c] = 0;
      *(undefined8 *)((longlong)plVar9 + 0x165) = 0;
      *(undefined8 *)((longlong)plVar9 + 0x18c) = 0;
      *(undefined8 *)((longlong)plVar9 + 0x194) = 0;
      *(undefined8 *)((longlong)plVar9 + 0x199) = 0;
      plVar9[0x35] = 0;
      plVar9[0x36] = 0;
      plVar9[0x37] = 0;
      plVar9[0x38] = 0;
      *plVar9 = (longlong)&DAT_02679c28;
      plVar9[2] = (longlong)&DAT_0267a6f0;
      plVar9[0x39] = 0;
      plVar9[0x3a] = 0;
      uVar8 = (*DAT_02679c40)();
      uVar14 = (undefined7)((ulonglong)uVar8 >> 8);
      if (plVar9 == plVar7) {
        plVar9 = plVar7;
        if ((char)local_94 == '\0') {
          FUN_00d50b20();
        }
        else {
          local_48 = CONCAT71(uVar14,1);
        }
      }
      else {
        bVar10 = (byte)local_48;
        local_48 = CONCAT71(uVar14,1);
        if ((bVar10 & plVar7 != (longlong *)0x0) == 1) {
          FUN_00d50b20();
        }
      }
      cVar4 = (char)local_48;
      (**(code **)(*plVar9 + 0x4d0))(0,_DAT_02423960);
      plVar7 = plVar9;
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (cVar4 == '\0') {
      if (plVar7 == (longlong *)0x0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        FUN_00d50b00();
      }
    }
    goto LAB_01f62406;
  case 0x43:
  case 0x45:
  case 0x49:
  case 0x50:
  case 0x52:
  case 0x53:
  case 99:
  case 100:
  case 0x66:
  case 0x69:
  case 0x6c:
  case 0x71:
  case 0x73:
switchD_01f62290_caseD_43:
    plVar7 = (longlong *)FUN_00e8fc40();
    FUN_0006daf0();
    *(undefined4 *)(plVar7 + 0x27) = 0;
    plVar7[0x2e] = 0;
    *(undefined4 *)(plVar7 + 0x2f) = 0;
    plVar7[0x30] = 0;
    *(undefined1 *)(plVar7 + 0x31) = 0;
    plVar7[0x28] = 0;
    plVar7[0x29] = 0;
    *(undefined4 *)(plVar7 + 0x2a) = 0;
    plVar7[0x2b] = 0;
    plVar7[0x2c] = 0;
    *(undefined8 *)((longlong)plVar7 + 0x165) = 0;
    *(undefined8 *)((longlong)plVar7 + 0x18c) = 0;
    *(undefined8 *)((longlong)plVar7 + 0x194) = 0;
    *(undefined8 *)((longlong)plVar7 + 0x199) = 0;
    plVar7[0x35] = 0;
    plVar7[0x36] = 0;
    plVar7[0x37] = 0;
    plVar7[0x38] = 0;
    *plVar7 = (longlong)&DAT_0269c118;
    plVar7[2] = (longlong)&DAT_0269cc70;
    plVar7[0x39] = (longlong)&DAT_0269ccb0;
    plVar7[0x45] = 0;
    *(undefined2 *)(plVar7 + 0x46) = 0;
    plVar7[0x47] = 0;
    plVar7[0x3a] = 0;
    plVar7[0x3b] = 0;
    *(undefined4 *)(plVar7 + 0x3c) = 0;
    plVar7[0x3f] = 0;
    plVar7[0x40] = 0;
    plVar7[0x3d] = 0;
    plVar7[0x3e] = 0;
    *(undefined8 *)((longlong)plVar7 + 0x205) = 0;
    plVar7[0x42] = 0;
    plVar7[0x43] = 0;
    *(undefined8 *)((longlong)plVar7 + 0x21d) = 0;
    (*DAT_0269c130)();
    (**(code **)(*plVar7 + 0x4d0))(DAT_02390d00,_DAT_02423960);
    if (puVar5 != (undefined8 *)0x0) {
      FUN_01e058f0();
    }
    break;
  case 0x62:
    plVar7 = (longlong *)FUN_00e8fc40();
    FUN_0006daf0();
    *(undefined4 *)(plVar7 + 0x27) = 0;
    plVar7[0x2e] = 0;
    *(undefined4 *)(plVar7 + 0x2f) = 0;
    plVar7[0x30] = 0;
    *(undefined1 *)(plVar7 + 0x31) = 0;
    plVar7[0x28] = 0;
    plVar7[0x29] = 0;
    *(undefined4 *)(plVar7 + 0x2a) = 0;
    plVar7[0x2b] = 0;
    plVar7[0x2c] = 0;
    *(undefined8 *)((longlong)plVar7 + 0x165) = 0;
    *(undefined8 *)((longlong)plVar7 + 0x18c) = 0;
    *(undefined8 *)((longlong)plVar7 + 0x194) = 0;
    *(undefined8 *)((longlong)plVar7 + 0x199) = 0;
    plVar7[0x35] = 0;
    plVar7[0x36] = 0;
    plVar7[0x37] = 0;
    plVar7[0x38] = 0;
    *(undefined4 *)((longlong)plVar7 + 500) = 0;
    *(undefined1 *)(plVar7 + 0x3f) = 0;
    plVar7[0x43] = 0;
    plVar7[0x3c] = 0;
    plVar7[0x3d] = 0;
    plVar7[0x3a] = 0;
    plVar7[0x3b] = 0;
    *(undefined1 *)(plVar7 + 0x3e) = 0;
    *(undefined8 *)((longlong)plVar7 + 0x1fc) = 0;
    *(undefined8 *)((longlong)plVar7 + 0x204) = 0;
    *(undefined8 *)((longlong)plVar7 + 0x20c) = 0;
    *plVar7 = (longlong)&DAT_02691920;
    plVar7[2] = (longlong)&DAT_026923f8;
    plVar7[0x39] = (longlong)&DAT_02692438;
    (*DAT_02691938)();
    (**(code **)(*plVar7 + 0x4d0))(DAT_02390d2c,_DAT_02423960);
    break;
  case 0x65:
    FUN_00c77cd0();
    FUN_00c7b2d0();
    puVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (undefined8 *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (puVar2 == (undefined8 *)0x0) goto switchD_01f62290_caseD_43;
    plVar7 = (longlong *)FUN_00e8fc40();
    FUN_001e3c20();
    (**(code **)(*plVar7 + 0x18))();
    FUN_01d6f820();
    FUN_00d50b00();
    FUN_00d50b20();
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
LAB_01f62406:
  *unaff_RDI = plVar7;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (((char)local_60 != '\0') && (puVar13 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


