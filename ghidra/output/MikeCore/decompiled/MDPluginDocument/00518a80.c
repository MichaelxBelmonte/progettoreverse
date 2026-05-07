// Function: FUN_00518a80
// Address: 00518a80
// Size: 3543 bytes
// Class: MDPluginDocument


/* WARNING: Removing unreachable block (ram,0x00518e41) */
/* WARNING: Removing unreachable block (ram,0x00518e4d) */
/* WARNING: Removing unreachable block (ram,0x00518f71) */
/* WARNING: Removing unreachable block (ram,0x00518f7d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00518a80(void)

{
  undefined8 *puVar1;
  char cVar2;
  ulonglong uVar3;
  longlong *plVar4;
  void *pvVar5;
  undefined8 *puVar6;
  char *pcVar7;
  longlong lVar8;
  pthread_key_t pVar9;
  byte bVar11;
  int iVar12;
  longlong unaff_RDI;
  undefined8 *puVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 *local_148;
  char local_140;
  undefined8 *local_138;
  char local_130;
  undefined8 *local_128;
  char local_120;
  undefined8 *local_118;
  char local_110;
  undefined8 *local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  char local_e8;
  undefined7 uStack_e7;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  char local_68 [8];
  undefined8 *local_60;
  undefined8 local_58;
  int local_50;
  longlong local_48;
  char local_40 [16];
  longlong lVar10;
  
  if (*(char *)(unaff_RDI + 0x35a) == '\0') {
    return;
  }
  if (*(longlong *)(unaff_RDI + 0x108) == 0) {
    return;
  }
  if (*(longlong *)(unaff_RDI + 0x110) == 0) {
    return;
  }
  FUN_0078b9c0();
  puVar13 = local_70;
  if ((local_68[0] != '\0') && (local_70 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar13 == (undefined8 *)0x0) {
    return;
  }
  FUN_0078b9c0();
  iVar12 = *(int *)((longlong)local_70 + 0xc);
  if (local_68[0] != '\0') {
    FUN_00d50b20();
  }
  lVar8 = DAT_026f6fd0;
  if (iVar12 == 0) {
    return;
  }
  if (DAT_026f6fd0 != 0) {
    FUN_00d50b00();
  }
  dVar14 = (double)FUN_00e7d6f0();
  uVar3 = (ulonglong)(dVar14 * DAT_023907c0);
  uVar3 = (longlong)(dVar14 * DAT_023907c0 - _DAT_023907c8) & (longlong)uVar3 >> 0x3f | uVar3;
  FUN_0071a120();
  if ((((local_68[0] == '\0') && (local_70 != (undefined8 *)0x0)) &&
      (FUN_00d50b00(), local_68[0] != '\0')) && (local_70 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  bVar11 = (char)uVar3 + (char)(uVar3 / 3) * -3;
  local_48 = lVar8;
  local_40[0] = '\0';
  FUN_000175c0();
  puVar13 = local_70;
  if (local_68[0] == '\0') {
    if (((local_70 != (undefined8 *)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
       (local_70 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68[0] = '\0';
  }
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (puVar13 != (undefined8 *)0x0) {
    local_68[0] = '\0';
    local_70 = puVar13;
    bVar11 = FUN_00c70bc0();
    if ((local_68[0] != '\0') && (local_70 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if ((puVar13 != (undefined8 *)0x0 & bVar11) == 0) {
    lVar10 = *(longlong *)(unaff_RDI + 0x308);
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    if (lVar10 != 0) goto LAB_00518c7c;
    FUN_0051be00();
    local_78 = local_70;
    if (local_70 == (undefined8 *)0x0) {
      local_78 = (undefined8 *)0x0;
      local_90 = 0;
    }
    else {
      local_90 = CONCAT71((int7)((ulonglong)local_70 >> 8),1);
      if (((local_68[0] == '\0') && (FUN_00d50b00(), local_68[0] != '\0')) &&
         (local_70 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
LAB_00518c7c:
    local_90 = 0;
    local_78 = (undefined8 *)0x0;
  }
  FUN_0051ba20();
  lVar8 = local_48;
  FUN_004405c0();
  puVar13 = local_70;
  if (local_68[0] == '\0') {
    if (((local_70 != (undefined8 *)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
       (local_70 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68[0] = '\0';
  }
  if ((local_40[0] != '\0') && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  local_80 = puVar13;
  FUN_004b8a30();
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  local_88 = plVar4;
  FUN_0078b9c0();
  puVar1 = local_70;
  if (local_68[0] == '\0') {
    if (local_70 != (undefined8 *)0x0) {
      FUN_00d50b00();
      if ((local_68[0] != '\0') && (local_70 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00518d69;
    }
  }
  else if (local_70 != (undefined8 *)0x0) {
LAB_00518d69:
    local_68[0] = '\0';
    local_70 = (undefined8 *)0x0;
    local_98 = puVar1;
    local_60 = puVar1;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar12 = -local_58._4_4_;
        }
        else {
          iVar12 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar12);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar12 = 0;
        }
        local_58 = CONCAT44(iVar12,(int)local_58);
      }
      lVar8 = (longlong)(int)local_58;
      iVar12 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar12);
      if (*(int *)((longlong)local_60 + 0xc) <= iVar12) break;
      lVar10 = local_60[2];
      local_70 = *(undefined8 **)(lVar10 + 8 + lVar8 * 8);
      FUN_004f9670();
      lVar8 = local_48;
      pVar9 = (pthread_key_t)lVar10;
      if (local_40[0] == '\0') {
        if (((local_48 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
      pvVar5 = _pthread_getspecific(pVar9);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar15 = FUN_004fae50();
      lVar10 = local_48;
      local_d0 = 0;
      if (local_40[0] == '\0') {
        if (local_48 != 0) {
          uVar15 = FUN_00d50b00();
        }
      }
      else {
        local_40[0] = '\0';
      }
      local_d0 = '\x01';
      local_d8 = lVar10;
      FUN_0053ac50(uVar15,&local_d8);
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_000be170();
    FUN_00d50b20();
    puVar13 = local_80;
  }
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_004b5af0();
  puVar1 = local_70;
  if (local_68[0] == '\0') {
    if (local_70 != (undefined8 *)0x0) {
      FUN_00d50b00();
      if ((local_68[0] != '\0') && (local_70 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0051901f;
    }
  }
  else if (local_70 != (undefined8 *)0x0) {
LAB_0051901f:
    local_68[0] = '\0';
    local_70 = (undefined8 *)0x0;
    local_60 = puVar1;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar12 = -local_58._4_4_;
        }
        else {
          iVar12 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar12);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar12 = 0;
        }
        local_58 = CONCAT44(iVar12,(int)local_58);
      }
      lVar8 = (longlong)(int)local_58;
      iVar12 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar12);
      if (*(int *)((longlong)local_60 + 0xc) <= iVar12) break;
      local_70 = *(undefined8 **)(local_60[2] + 8 + lVar8 * 8);
      FUN_003b7950();
      lVar8 = local_48;
      if ((((local_40[0] == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40[0] != '\0')) &&
         (local_48 != 0)) {
        FUN_00d50b20();
      }
      local_40[0] = '\0';
      local_48 = lVar8;
      cVar2 = FUN_00ca18c0();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (cVar2 == '\0') {
        local_40[0] = '\0';
        local_48 = lVar8;
        FUN_00d21140();
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
        local_48 = lVar8;
        FUN_00ca13a0();
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00274d30();
    FUN_00d50b20();
    puVar13 = local_80;
  }
  FUN_00c9fe20();
  puVar1 = local_70;
  plVar4 = (longlong *)local_68;
  if (local_68[0] == '\0') {
    plVar4 = &local_48;
  }
  local_48 = CONCAT71(local_48._1_7_,local_68[0]);
  *(char *)plVar4 = '\0';
  if ((local_68[0] != '\0') && (local_70 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)local_48 == '\0') {
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b00();
      goto LAB_005191ee;
    }
  }
  else if (puVar1 != (undefined8 *)0x0) {
LAB_005191ee:
    local_68[0] = '\0';
    local_70 = (undefined8 *)0x0;
    local_98 = puVar1;
    local_60 = puVar1;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar12 = -local_58._4_4_;
        }
        else {
          iVar12 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar12);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar12 = 0;
        }
        local_58 = CONCAT44(iVar12,(int)local_58);
      }
      lVar8 = (longlong)(int)local_58;
      iVar12 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar12);
      if (*(int *)((longlong)local_60 + 0xc) <= iVar12) break;
      local_70 = *(undefined8 **)(local_60[2] + 8 + lVar8 * 8);
      if (*(int *)((longlong)puVar6 + 0xc) < 1) {
        local_130 = '\0';
        local_138 = local_70;
        FUN_0053ad00(local_60[2],&local_138);
        local_b0 = 0;
        lVar8 = CONCAT71(uStack_e7,local_e8);
        if (local_e0 == '\0') {
          if (lVar8 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_e0 = '\0';
        }
        local_b0 = '\x01';
        local_b8 = lVar8;
        FUN_003b6860();
        lVar8 = local_48;
        local_c0 = 0;
        if (local_40[0] == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40[0] = '\0';
        }
        local_c0 = '\x01';
        local_c8 = lVar8;
        FUN_004b7a60();
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_e0 != '\0') && (CONCAT71(uStack_e7,local_e8) != 0)) {
          FUN_00d50b20();
        }
        if ((local_130 != '\0') && (local_138 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        uVar15 = FUN_00d23310();
        lVar8 = local_48;
        local_e8 = local_40[0];
        pcVar7 = local_40;
        if (local_40[0] == '\0') {
          pcVar7 = &local_e8;
        }
        *pcVar7 = '\0';
        if ((local_40[0] != '\0') && (lVar8 != 0)) {
          uVar15 = FUN_00d50b20();
        }
        local_f0 = 0;
        if ((local_e8 == '\0') && (lVar8 != 0)) {
          uVar15 = FUN_00d50b00();
        }
        local_f8 = lVar8;
        local_f0 = '\x01';
        local_148 = local_70;
        local_140 = '\0';
        FUN_004b8670(uVar15,&local_148);
        if ((local_140 != '\0') && (local_148 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d23620();
      }
    }
    FUN_00018280();
    FUN_00d50b20();
    puVar13 = local_80;
  }
  if (puVar6 != (undefined8 *)0x0) {
    local_68[0] = '\0';
    local_70 = (undefined8 *)0x0;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    local_60 = puVar6;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar12 = -local_58._4_4_;
        }
        else {
          iVar12 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar12);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar12 = 0;
        }
        local_58 = CONCAT44(iVar12,(int)local_58);
      }
      lVar8 = (longlong)(int)local_58;
      iVar12 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar12);
      if (*(int *)((longlong)local_60 + 0xc) <= iVar12) break;
      local_128 = *(undefined8 **)(local_60[2] + 8 + lVar8 * 8);
      local_120 = '\0';
      local_70 = local_128;
      uVar15 = FUN_004b5c00(local_60[2],&local_128);
      lVar8 = local_48;
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        uVar15 = FUN_00d50b20();
      }
      if ((local_120 != '\0') && (local_128 != (undefined8 *)0x0)) {
        uVar15 = FUN_00d50b20();
      }
      puVar13 = local_80;
      if (lVar8 != 0) {
        local_118 = local_70;
        local_110 = '\0';
        FUN_004b5c00(uVar15,&local_118);
        lVar8 = local_48;
        local_a0 = 0;
        if (local_40[0] == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40[0] = '\0';
        }
        local_a0 = '\x01';
        local_a8 = lVar8;
        FUN_004b8440();
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_110 != '\0') && (local_118 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00018280();
  }
  if (local_78 == (undefined8 *)0x0) goto LAB_00519870;
  local_108 = local_78;
  local_100 = '\0';
  FUN_004b8020();
  puVar1 = local_70;
  if (local_68[0] == '\0') {
    if (((local_70 != (undefined8 *)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
       (local_70 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68[0] = '\0';
  }
  if ((local_100 != '\0') && (local_108 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar1 == (undefined8 *)0x0) goto LAB_00519870;
  FUN_004b5af0();
  puVar1 = local_70;
  if (local_68[0] == '\0') {
    if (local_70 != (undefined8 *)0x0) {
      FUN_00d50b00();
      if ((local_68[0] != '\0') && (local_70 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_005197d6;
    }
  }
  else if (local_70 != (undefined8 *)0x0) {
LAB_005197d6:
    local_68[0] = '\0';
    local_70 = (undefined8 *)0x0;
    local_60 = puVar1;
    local_58 = 0xffffffff;
    local_50 = 0;
    while( true ) {
      lVar8 = (longlong)(int)local_58;
      iVar12 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar12);
      if (*(int *)((longlong)local_60 + 0xc) <= iVar12) break;
      local_70 = *(undefined8 **)(local_60[2] + 8 + lVar8 * 8);
      FUN_003b72f0();
      if (local_58._4_4_ != 0) {
        if (local_58 < 0) {
          iVar12 = -local_58._4_4_;
        }
        else {
          local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar12 = 0;
        }
        local_58 = CONCAT44(iVar12,(int)local_58);
      }
    }
    FUN_00274d30();
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_00519870:
  FUN_004b8a40();
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (local_88 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (puVar13 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_90 != '\0') && (local_78 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


