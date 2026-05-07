// Function: FUN_01b80890
// Address: 01b80890
// Size: 3453 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01b80ba8) */
/* WARNING: Removing unreachable block (ram,0x01b80bb8) */
/* WARNING: Removing unreachable block (ram,0x01b811b9) */
/* WARNING: Removing unreachable block (ram,0x01b811bf) */
/* WARNING: Removing unreachable block (ram,0x01b81363) */

ulonglong FUN_01b80890(ulonglong param_1)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  void *pvVar6;
  char *pcVar7;
  char *pcVar8;
  ulonglong uVar9;
  char *pcVar10;
  pthread_key_t pVar11;
  longlong lVar12;
  undefined4 unaff_ESI;
  int iVar13;
  longlong *unaff_RDI;
  char *pcVar14;
  char *local_e8;
  char local_e0;
  char *local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  char *local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined4 local_80;
  char local_7a;
  char local_79;
  undefined8 *local_78;
  char *local_70;
  char local_68 [8];
  undefined8 *local_60;
  undefined8 local_58;
  pthread_key_t local_50;
  undefined8 local_48;
  undefined8 local_40;
  char local_38;
  
  local_80 = unaff_ESI;
  uVar4 = (**(code **)(*unaff_RDI + 0x9d8))();
  local_b8 = uVar4;
  local_b0 = (**(code **)(*unaff_RDI + 0x9e0))();
  if (((uVar4 >> 0x20 != 0) && (local_b0 >> 0x20 != 0)) && (cVar3 = FUN_00e7c020(), cVar3 == '\0'))
  {
    uVar4 = 0;
    goto LAB_01b81632;
  }
  local_e0 = '\0';
  local_e8 = (char *)0x0;
  local_d0 = '\0';
  local_d8 = (char *)0x0;
  local_c0 = '\0';
  local_c8 = 0;
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  pcVar2 = DAT_02572370;
  (*DAT_02572370)();
  local_90 = puVar5;
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  (*pcVar2)();
  local_88 = puVar5;
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  (*pcVar2)();
  local_78 = puVar5;
  FUN_00d227d0();
  pcVar14 = (char *)&local_40;
  while( true ) {
    pVar11 = (pthread_key_t)param_1;
    lVar12 = unaff_RDI[0x2b];
    if (lVar12 != 0) {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific(pVar11);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    param_1 = local_b0;
    cVar3 = FUN_01252960(local_b0,local_b8,&local_c8,&local_a8);
    if (lVar12 != 0) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') break;
    FUN_00dd67f0();
    pcVar10 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (char *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_70 = pcVar10;
    local_68[0] = '\0';
    FUN_00d21140();
    if ((local_68[0] != '\0') && (local_70 != (char *)0x0)) {
      FUN_00d50b20();
    }
    if (pcVar10 != (char *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (char *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00dd67f0();
    pcVar10 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (char *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_70 = pcVar10;
    local_68[0] = '\0';
    FUN_00d21140();
    if ((local_68[0] != '\0') && (local_70 != (char *)0x0)) {
      FUN_00d50b20();
    }
    if (pcVar10 != (char *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (char *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d21140();
  }
  iVar1 = *(int *)((longlong)local_78 + 0xc);
  if (iVar1 == 0) {
LAB_01b815b2:
    uVar4 = CONCAT71((int7)((ulonglong)pcVar14 >> 8),iVar1 != 0);
    FUN_00d50b20();
    puVar5 = local_90;
  }
  else {
    FUN_00d23310();
    pcVar7 = local_70;
    pcVar10 = local_68;
    local_40 = (char *)CONCAT71(local_40._1_7_,local_68[0]);
    pcVar8 = pcVar10;
    if (local_68[0] == '\0') {
      pcVar8 = pcVar14;
    }
    *pcVar8 = '\0';
    if ((local_68[0] != '\0') && (local_70 != (char *)0x0)) {
      FUN_00d50b20();
    }
    pVar11 = (pthread_key_t)pcVar10;
    local_a8 = (char *)FUN_00dd6320();
    if (((char)local_40 != '\0') && (pcVar7 != (char *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d23310();
    pcVar10 = local_70;
    local_40 = (char *)CONCAT71(local_40._1_7_,local_68[0]);
    pcVar7 = local_68;
    if (local_68[0] == '\0') {
      pcVar7 = pcVar14;
    }
    *pcVar7 = '\0';
    if ((local_68[0] != '\0') && (local_70 != (char *)0x0)) {
      FUN_00d50b20();
    }
    local_a0 = FUN_00dd6320();
    if (((char)local_40 != '\0') && (pcVar10 != (char *)0x0)) {
      FUN_00d50b20();
    }
    lVar12 = unaff_RDI[0x2b];
    if (lVar12 != 0) {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific(pVar11);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar3 = FUN_012535e0(&local_a8,&local_e8,&local_a0,0);
    if (lVar12 != 0) {
      FUN_00d50b20();
    }
    pcVar10 = local_a8;
    FUN_00d23340();
    pcVar7 = local_70;
    local_40 = (char *)CONCAT71(local_40._1_7_,local_68[0]);
    pcVar8 = local_68;
    if (local_68[0] == '\0') {
      pcVar8 = pcVar14;
    }
    *pcVar8 = '\0';
    if ((local_68[0] != '\0') && (local_70 != (char *)0x0)) {
      FUN_00d50b20();
    }
    local_a8 = (char *)FUN_00dd6320();
    if (((char)local_40 != '\0') && (pcVar7 != (char *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d23340();
    pcVar8 = local_70;
    pcVar7 = local_68;
    if (local_68[0] != '\0') {
      pcVar14 = pcVar7;
    }
    local_40 = (char *)CONCAT71(local_40._1_7_,local_68[0]);
    *pcVar14 = '\0';
    if ((local_68[0] != '\0') && (local_70 != (char *)0x0)) {
      FUN_00d50b20();
    }
    pVar11 = (pthread_key_t)pcVar7;
    local_a0 = FUN_00dd6320();
    if (((char)local_40 != '\0') && (pcVar8 != (char *)0x0)) {
      FUN_00d50b20();
    }
    lVar12 = unaff_RDI[0x2b];
    if (lVar12 != 0) {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific(pVar11);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_79 = FUN_01253c10(&local_a8,&local_d8,&local_a0,0);
    local_7a = cVar3;
    if (lVar12 != 0) {
      FUN_00d50b20();
    }
    uVar4 = local_a0;
    local_68[0] = '\0';
    local_70 = (char *)0x0;
    local_60 = local_78;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar13 = -local_58._4_4_;
        }
        else {
          iVar13 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar13);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar13 = 0;
        }
        local_58 = CONCAT44(iVar13,(int)local_58);
      }
      lVar12 = (longlong)(int)local_58;
      iVar13 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar13);
      if (*(int *)((longlong)local_60 + 0xc) <= iVar13) break;
      local_70 = *(char **)(local_60[2] + 8 + lVar12 * 8);
      pVar11 = local_50;
      uVar9 = FUN_00dd6320();
      lVar12 = unaff_RDI[0x2c];
      if (lVar12 != 0) {
        FUN_00d50b00();
      }
      if (uVar9 >> 0x20 != 0) {
        if ((char)local_80 == '\0') {
          uVar9 = FUN_01a8fc00();
        }
        else {
          uVar9 = FUN_01a8f210();
        }
      }
      local_48 = uVar9;
      if (lVar12 != 0) {
        FUN_00d50b20();
      }
      uVar9 = FUN_00dd6320();
      pcVar14 = (char *)unaff_RDI[0x2c];
      if (pcVar14 != (char *)0x0) {
        FUN_00d50b00();
      }
      if (uVar9 >> 0x20 != 0) {
        if ((char)local_80 == '\0') {
          uVar9 = FUN_01a8fc00();
        }
        else {
          uVar9 = FUN_01a8f210();
        }
      }
      local_98 = uVar9;
      if (pcVar14 == (char *)0x0) {
        iVar13 = (int)(uVar9 >> 0x20);
        if (local_48._4_4_ != 0) goto LAB_01b80fea;
LAB_01b81002:
        lVar12 = unaff_RDI[0x2b];
        if (lVar12 != 0) {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific(pVar11);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_40 = local_70;
        local_38 = '\0';
        FUN_012502a0(local_98,local_48,(char)unaff_RDI[0x36]);
        if ((local_38 != '\0') && (local_40 != (char *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar12 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_00d50b20();
        iVar13 = local_98._4_4_;
        if (local_48._4_4_ == 0) goto LAB_01b81002;
LAB_01b80fea:
        if ((iVar13 == 0) || (cVar3 = FUN_00e7c000(), cVar3 == '\0')) goto LAB_01b81002;
      }
    }
    FUN_00083b20();
    if (local_7a != '\0') {
      local_40 = pcVar10;
      FUN_00d23310();
      pcVar14 = local_70;
      pcVar10 = local_68;
      pcVar7 = (char *)&local_98;
      if (local_68[0] != '\0') {
        pcVar7 = pcVar10;
      }
      local_98 = CONCAT71(local_98._1_7_,local_68[0]);
      *pcVar7 = '\0';
      if ((local_68[0] != '\0') && (pcVar14 != (char *)0x0)) {
        FUN_00d50b20();
      }
      pVar11 = (pthread_key_t)pcVar10;
      uVar9 = FUN_00dd6320();
      lVar12 = unaff_RDI[0x2c];
      if (lVar12 != 0) {
        FUN_00d50b00();
      }
      if (uVar9 >> 0x20 != 0) {
        if ((char)local_80 == '\0') {
          uVar9 = FUN_01a8fc00();
        }
        else {
          uVar9 = FUN_01a8f210();
        }
      }
      local_48 = uVar9;
      if (lVar12 != 0) {
        FUN_00d50b20();
      }
      if (((char)local_98 != '\0') && (pcVar14 != (char *)0x0)) {
        FUN_00d50b20();
      }
      if (((ulonglong)local_40 >> 0x20 == 0) ||
         ((((int)((ulonglong)local_40 >> 0x20) != 0 && (local_48._4_4_ != 0)) &&
          ((cVar3 = FUN_00e7c020(), cVar3 != '\0' || ((ulonglong)local_40 >> 0x20 == 0)))))) {
        lVar12 = unaff_RDI[0x2b];
        if (lVar12 != 0) {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific(pVar11);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_70 = local_e8;
        local_68[0] = '\0';
        FUN_012502a0(local_48,local_40,(char)unaff_RDI[0x36]);
        if ((local_68[0] != '\0') && (local_70 != (char *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar12 != 0) {
          FUN_00d50b20();
        }
      }
    }
    if (local_79 != '\0') {
      FUN_00d23340();
      pcVar14 = local_70;
      pcVar10 = local_68;
      pcVar7 = (char *)&local_48;
      if (local_68[0] != '\0') {
        pcVar7 = pcVar10;
      }
      local_48 = CONCAT71(local_48._1_7_,local_68[0]);
      *pcVar7 = '\0';
      if ((local_68[0] != '\0') && (local_70 != (char *)0x0)) {
        FUN_00d50b20();
      }
      pVar11 = (pthread_key_t)pcVar10;
      pcVar10 = (char *)FUN_00dd6320();
      lVar12 = unaff_RDI[0x2c];
      if (lVar12 != 0) {
        FUN_00d50b00();
      }
      if ((ulonglong)pcVar10 >> 0x20 != 0) {
        if ((char)local_80 == '\0') {
          pcVar10 = (char *)FUN_01a8fc00();
        }
        else {
          pcVar10 = (char *)FUN_01a8f210();
        }
      }
      local_40 = pcVar10;
      if (lVar12 != 0) {
        FUN_00d50b20();
      }
      if (((char)local_48 != '\0') && (pcVar14 != (char *)0x0)) {
        FUN_00d50b20();
      }
      local_48 = uVar4;
      if ((uVar4 >> 0x20 == 0) ||
         (((local_40._4_4_ != 0 && ((int)(uVar4 >> 0x20) != 0)) &&
          ((cVar3 = FUN_00e7c020(), cVar3 != '\0' || (local_48 >> 0x20 == 0)))))) {
        lVar12 = unaff_RDI[0x2b];
        if (lVar12 != 0) {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific(pVar11);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_70 = local_d8;
        local_68[0] = '\0';
        FUN_012502a0(local_48,local_40,(char)unaff_RDI[0x36]);
        if ((local_68[0] != '\0') && (local_70 != (char *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar12 != 0) {
          FUN_00d50b20();
        }
      }
    }
    if (local_b8._4_4_ != 0) {
      FUN_00d23310();
      pcVar14 = local_70;
      local_40 = (char *)CONCAT71(local_40._1_7_,local_68[0]);
      pcVar10 = local_68;
      if (local_68[0] == '\0') {
        pcVar10 = (char *)&local_40;
      }
      *pcVar10 = '\0';
      if ((local_68[0] != '\0') && (local_70 != (char *)0x0)) {
        FUN_00d50b20();
      }
      uVar4 = FUN_00dd6320();
      lVar12 = unaff_RDI[0x2c];
      if (lVar12 != 0) {
        FUN_00d50b00();
      }
      if (uVar4 >> 0x20 != 0) {
        if ((char)local_80 == '\0') {
          uVar4 = FUN_01a8fc00();
        }
        else {
          uVar4 = FUN_01a8f210();
        }
      }
      local_b8 = uVar4;
      if (lVar12 != 0) {
        FUN_00d50b20();
      }
      if (((char)local_40 != '\0') && (pcVar14 != (char *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (local_b0 >> 0x20 != 0) {
      FUN_00d23340();
      pcVar14 = local_70;
      pcVar10 = local_68;
      if (local_68[0] == '\0') {
        pcVar10 = (char *)&local_40;
      }
      local_40 = (char *)CONCAT71(local_40._1_7_,local_68[0]);
      *pcVar10 = '\0';
      if ((local_68[0] != '\0') && (local_70 != (char *)0x0)) {
        FUN_00d50b20();
      }
      uVar4 = FUN_00dd6320();
      lVar12 = unaff_RDI[0x2c];
      if (lVar12 != 0) {
        FUN_00d50b00();
      }
      if (uVar4 >> 0x20 != 0) {
        if ((char)local_80 == '\0') {
          uVar4 = FUN_01a8fc00();
        }
        else {
          uVar4 = FUN_01a8f210();
        }
      }
      local_b0 = uVar4;
      if (lVar12 != 0) {
        FUN_00d50b20();
      }
      if (((char)local_40 != '\0') && (pcVar14 != (char *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*unaff_RDI + 0x9f0))();
    FUN_01b80000();
    if (local_78 != (undefined8 *)0x0) goto LAB_01b815b2;
    uVar4 = CONCAT71((int7)((ulonglong)pcVar14 >> 8),1);
    puVar5 = local_90;
  }
  local_90 = puVar5;
  if (local_88 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar5 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != (char *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != (char *)0x0)) {
    FUN_00d50b20();
  }
LAB_01b81632:
  return uVar4 & 0xffffffff;
}


