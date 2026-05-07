// Function: FUN_017e22f0
// Address: 017e22f0
// Size: 4758 bytes
// Class: GNInt


/* WARNING: Removing unreachable block (ram,0x017e2d10) */
/* WARNING: Removing unreachable block (ram,0x017e2d20) */
/* WARNING: Removing unreachable block (ram,0x017e2cb4) */
/* WARNING: Removing unreachable block (ram,0x017e2cc4) */
/* WARNING: Removing unreachable block (ram,0x017e2d94) */
/* WARNING: Removing unreachable block (ram,0x017e2da4) */

void FUN_017e22f0(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  bool bVar6;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  undefined8 *local_140;
  char local_138;
  longlong local_130;
  char local_128;
  undefined8 *local_120;
  char local_118;
  undefined8 *local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  undefined8 *local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  undefined8 *local_d0;
  char local_c8;
  undefined8 *local_c0;
  char local_b8;
  undefined8 *local_b0;
  char local_a8;
  undefined8 *local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  undefined8 *local_80;
  char local_78;
  undefined8 *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  undefined4 local_34;
  
  local_40 = param_1;
  local_34 = param_3;
  if ((DAT_028af4e8 == (undefined8 *)0x0) || (DAT_028af4f1 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028af4e8 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_025683c0;
      (*DAT_025683d8)();
      FUN_00c92170();
      FUN_00c92160();
      bVar6 = DAT_028af4e8 == (undefined8 *)0x0;
      DAT_028af4e8 = puVar4;
      if (((bVar6) || (FUN_00d50b20(), DAT_028af4e8 != (undefined8 *)0x0)) && (DAT_028af4f0 == '\0')
         ) {
        DAT_028af4f0 = '\x01';
        FUN_00e8cb90();
      }
      puVar4 = DAT_028af4e8;
      iVar1 = *(int *)(DAT_028af4e8 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 0;
      puVar4 = DAT_028af4e8;
      iVar1 = *(int *)(DAT_028af4e8 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 3;
      puVar4 = DAT_028af4e8;
      iVar1 = *(int *)(DAT_028af4e8 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 5;
      puVar4 = DAT_028af4e8;
      iVar1 = *(int *)(DAT_028af4e8 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 7;
      puVar4 = DAT_028af4e8;
      iVar1 = *(int *)(DAT_028af4e8 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 10;
      DAT_028af4f1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028af4f1 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028af4f8 == (undefined8 *)0x0) || (DAT_028af501 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028af4f8 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_025683c0;
      (*DAT_025683d8)();
      FUN_00c92170();
      FUN_00c92160();
      bVar6 = DAT_028af4f8 == (undefined8 *)0x0;
      DAT_028af4f8 = puVar4;
      if (((bVar6) || (FUN_00d50b20(), DAT_028af4f8 != (undefined8 *)0x0)) && (DAT_028af500 == '\0')
         ) {
        DAT_028af500 = '\x01';
        FUN_00e8cb90();
      }
      puVar4 = DAT_028af4f8;
      iVar1 = *(int *)(DAT_028af4f8 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 0;
      puVar4 = DAT_028af4f8;
      iVar1 = *(int *)(DAT_028af4f8 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 2;
      puVar4 = DAT_028af4f8;
      iVar1 = *(int *)(DAT_028af4f8 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 4;
      puVar4 = DAT_028af4f8;
      iVar1 = *(int *)(DAT_028af4f8 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 7;
      puVar4 = DAT_028af4f8;
      iVar1 = *(int *)(DAT_028af4f8 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 9;
      DAT_028af501 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028af501 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028af508 == (undefined8 *)0x0) || (DAT_028af511 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028af508 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_025683c0;
      (*DAT_025683d8)();
      FUN_00c92170();
      FUN_00c92160();
      bVar6 = DAT_028af508 == (undefined8 *)0x0;
      DAT_028af508 = puVar4;
      if (((bVar6) || (FUN_00d50b20(), DAT_028af508 != (undefined8 *)0x0)) && (DAT_028af510 == '\0')
         ) {
        DAT_028af510 = '\x01';
        FUN_00e8cb90();
      }
      puVar4 = DAT_028af508;
      iVar1 = *(int *)(DAT_028af508 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 0;
      puVar4 = DAT_028af508;
      iVar1 = *(int *)(DAT_028af508 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 3;
      puVar4 = DAT_028af508;
      iVar1 = *(int *)(DAT_028af508 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 6;
      puVar4 = DAT_028af508;
      iVar1 = *(int *)(DAT_028af508 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 8;
      puVar4 = DAT_028af508;
      iVar1 = *(int *)(DAT_028af508 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 10;
      DAT_028af511 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028af511 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028af518 == (undefined8 *)0x0) || (DAT_028af521 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028af518 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_025683c0;
      (*DAT_025683d8)();
      FUN_00c92170();
      FUN_00c92160();
      bVar6 = DAT_028af518 == (undefined8 *)0x0;
      DAT_028af518 = puVar4;
      if (((bVar6) || (FUN_00d50b20(), DAT_028af518 != (undefined8 *)0x0)) && (DAT_028af520 == '\0')
         ) {
        DAT_028af520 = '\x01';
        FUN_00e8cb90();
      }
      puVar4 = DAT_028af518;
      iVar1 = *(int *)(DAT_028af518 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 0;
      puVar4 = DAT_028af518;
      iVar1 = *(int *)(DAT_028af518 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 3;
      puVar4 = DAT_028af518;
      iVar1 = *(int *)(DAT_028af518 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 5;
      puVar4 = DAT_028af518;
      iVar1 = *(int *)(DAT_028af518 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 8;
      puVar4 = DAT_028af518;
      iVar1 = *(int *)(DAT_028af518 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 10;
      DAT_028af521 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028af521 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028af528 == (undefined8 *)0x0) || (DAT_028af531 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028af528 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_025683c0;
      (*DAT_025683d8)();
      FUN_00c92170();
      FUN_00c92160();
      bVar6 = DAT_028af528 == (undefined8 *)0x0;
      DAT_028af528 = puVar4;
      if (((bVar6) || (FUN_00d50b20(), DAT_028af528 != (undefined8 *)0x0)) && (DAT_028af530 == '\0')
         ) {
        DAT_028af530 = '\x01';
        FUN_00e8cb90();
      }
      puVar4 = DAT_028af528;
      iVar1 = *(int *)(DAT_028af528 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 0;
      puVar4 = DAT_028af528;
      iVar1 = *(int *)(DAT_028af528 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 2;
      puVar4 = DAT_028af528;
      iVar1 = *(int *)(DAT_028af528 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 4;
      puVar4 = DAT_028af528;
      iVar1 = *(int *)(DAT_028af528 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 8;
      puVar4 = DAT_028af528;
      iVar1 = *(int *)(DAT_028af528 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 10;
      DAT_028af531 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028af531 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028af538 == (undefined8 *)0x0) || (DAT_028af541 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028af538 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_025683c0;
      (*DAT_025683d8)();
      FUN_00c92170();
      FUN_00c92160();
      bVar6 = DAT_028af538 == (undefined8 *)0x0;
      DAT_028af538 = puVar4;
      if (((bVar6) || (FUN_00d50b20(), DAT_028af538 != (undefined8 *)0x0)) && (DAT_028af540 == '\0')
         ) {
        DAT_028af540 = '\x01';
        FUN_00e8cb90();
      }
      puVar4 = DAT_028af538;
      iVar1 = *(int *)(DAT_028af538 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 0;
      puVar4 = DAT_028af538;
      iVar1 = *(int *)(DAT_028af538 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 2;
      puVar4 = DAT_028af538;
      iVar1 = *(int *)(DAT_028af538 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 3;
      puVar4 = DAT_028af538;
      iVar1 = *(int *)(DAT_028af538 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 6;
      puVar4 = DAT_028af538;
      iVar1 = *(int *)(DAT_028af538 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 10;
      DAT_028af541 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028af541 = '\x01';
      FUN_00e8cb70();
    }
  }
  switch(unaff_ESI) {
  case 0:
    FUN_01794400(&switchD_017e2c7e::switchdataD_017e3c28,local_34);
    break;
  case 1:
    FUN_017936d0(&switchD_017e2c7e::switchdataD_017e3c28,local_34);
    break;
  case 2:
    local_170 = *local_40;
    local_168 = '\0';
    FUN_017921e0(local_34,&local_170,0);
    if ((local_168 != '\0') && (local_170 != 0)) {
      FUN_00d50b20();
    }
    break;
  case 3:
    local_160 = *param_2;
    local_158 = '\0';
    local_150 = *local_40;
    local_148 = '\0';
    FUN_017921e0(local_34,&local_150,1);
    if ((local_148 != '\0') && (local_150 != 0)) {
      FUN_00d50b20();
    }
    if ((local_158 != '\0') && (local_160 != 0)) {
      FUN_00d50b20();
    }
    break;
  case 4:
    cVar3 = FUN_017176e0();
    if (cVar3 == '\0') {
      local_130 = *local_40;
      local_128 = '\0';
      cVar3 = FUN_017175c0();
      if ((local_128 != '\0') && (local_130 != 0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        cVar3 = FUN_01717530();
        if (cVar3 == '\0') {
          cVar3 = FUN_01716be0();
          plVar5 = (longlong *)&DAT_028af4f8;
          if (cVar3 == '\0') {
            cVar3 = FUN_01716c00();
            if (cVar3 == '\0') {
              FUN_01715480();
              cVar3 = FUN_01716980();
              if (cVar3 == '\0') {
                FUN_01715480();
                FUN_01716980();
                plVar5 = (longlong *)&DAT_028af4e8;
              }
            }
            else {
              plVar5 = (longlong *)&DAT_028af4e8;
            }
          }
          FUN_01715620();
          local_100 = *plVar5;
          if (local_100 != 0) {
            FUN_00d50b00();
          }
          local_f8 = '\x01';
          FUN_017167a0();
          if ((local_f8 != '\0') && (local_100 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          FUN_01715620();
          local_110 = DAT_028af508;
          if (DAT_028af508 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
          local_108 = '\x01';
          FUN_017167a0();
          if ((local_108 != '\0') && (local_110 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        FUN_01715620();
        local_120 = DAT_028af518;
        if (DAT_028af518 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
        local_118 = '\x01';
        FUN_017167a0();
        if ((local_118 != '\0') && (local_120 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_01715620();
      local_140 = DAT_028af4f8;
      if (DAT_028af4f8 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      local_138 = '\x01';
      FUN_017167a0();
      if ((local_138 != '\0') && (local_140 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    break;
  case 5:
    cVar3 = FUN_017176e0();
    if (cVar3 == '\0') {
      local_e0 = *local_40;
      local_d8 = '\0';
      cVar3 = FUN_017175c0();
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        cVar3 = FUN_01717530();
        FUN_01715620();
        puVar4 = DAT_028af508;
        local_b0 = DAT_028af4e8;
        if (cVar3 == '\0') {
          if (DAT_028af4e8 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
          local_a8 = '\x01';
          FUN_017167a0();
          if ((local_a8 != '\0') && (local_b0 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (DAT_028af508 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
          local_c0 = puVar4;
          local_b8 = '\x01';
          FUN_017167a0();
          if ((local_b8 != '\0') && (local_c0 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        FUN_01715620();
        local_d0 = DAT_028af518;
        if (DAT_028af518 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
        local_c8 = '\x01';
        FUN_017167a0();
        if ((local_c8 != '\0') && (local_d0 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_01715620();
      local_f0 = DAT_028af4e8;
      if (DAT_028af4e8 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      local_e8 = '\x01';
      FUN_017167a0();
      if ((local_e8 != '\0') && (local_f0 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    break;
  case 6:
    cVar3 = FUN_017176e0();
    if (cVar3 != '\0') {
      FUN_01715620();
      local_a0 = DAT_028af528;
      if (DAT_028af528 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      local_98 = '\x01';
      FUN_017167a0();
      if (local_98 == '\0') {
        return;
      }
      if (local_a0 == (undefined8 *)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    cVar3 = FUN_01717530();
    if (cVar3 != '\0') {
      local_90 = *local_40;
      local_88 = '\0';
      cVar3 = FUN_017175c0();
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      FUN_01715620();
      puVar4 = DAT_028af538;
      local_70 = DAT_028af508;
      if (cVar3 != '\0') {
        if (DAT_028af538 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
        local_80 = puVar4;
        local_78 = '\x01';
        FUN_017167a0();
        if (local_78 == '\0') {
          return;
        }
        if (local_80 == (undefined8 *)0x0) {
          return;
        }
        FUN_00d50b20();
        return;
      }
      if (DAT_028af508 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      local_68 = '\x01';
      FUN_017167a0();
      if (local_68 == '\0') {
        return;
      }
      if (local_70 == (undefined8 *)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    cVar3 = FUN_01716be0();
    bVar6 = true;
    if (cVar3 == '\0') {
      cVar3 = FUN_01716c00();
      if (cVar3 == '\0') {
        FUN_01715480();
        cVar3 = FUN_01716980();
        if (cVar3 != '\0') goto LAB_017e31ef;
        FUN_01715480();
        FUN_01716980();
      }
      bVar6 = false;
    }
LAB_017e31ef:
    FUN_01715620();
    local_48 = 0;
    plVar5 = (longlong *)&DAT_028af4e8;
    if (bVar6) {
      plVar5 = (longlong *)&DAT_028af4f8;
    }
    lVar2 = *plVar5;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_48 = '\x01';
    local_50 = lVar2;
    FUN_017167a0();
    lVar2 = local_60;
    if (local_58 == '\0') {
      if (((local_60 != 0) && (FUN_00d50b00(), local_58 != '\0')) && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (bVar6) {
      if ((~*(ulonglong *)(*param_2 + 0x18) & 0xf0000000000) != 0) {
        FUN_017163c0();
        FUN_01715d40();
      }
    }
    else if ((~*(ulonglong *)(*param_2 + 0x18) & 0xf00000000000) != 0) {
      FUN_017163c0();
      FUN_01715d40();
    }
    *unaff_RDI = lVar2;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    break;
  default:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  return;
}


