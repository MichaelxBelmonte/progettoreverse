// Function: FUN_01959300
// Address: 01959300
// Size: 2256 bytes
// Class: MUDetectionEditorView


/* WARNING: Removing unreachable block (ram,0x01959357) */
/* WARNING: Removing unreachable block (ram,0x01959363) */
/* WARNING: Removing unreachable block (ram,0x019595bf) */
/* WARNING: Removing unreachable block (ram,0x019595cb) */
/* WARNING: Removing unreachable block (ram,0x019596bd) */
/* WARNING: Removing unreachable block (ram,0x019596cd) */
/* WARNING: Removing unreachable block (ram,0x01959733) */
/* WARNING: Removing unreachable block (ram,0x0195973f) */
/* WARNING: Removing unreachable block (ram,0x0195974d) */
/* WARNING: Removing unreachable block (ram,0x01959759) */
/* WARNING: Removing unreachable block (ram,0x019597c3) */
/* WARNING: Removing unreachable block (ram,0x019597cf) */
/* WARNING: Removing unreachable block (ram,0x019597e0) */
/* WARNING: Removing unreachable block (ram,0x019597ec) */

undefined8 * FUN_01959300(void)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  void *pvVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  pthread_key_t pVar8;
  longlong lVar9;
  int iVar10;
  undefined8 *unaff_RDI;
  undefined8 *puVar11;
  bool bVar12;
  longlong local_158;
  char local_150;
  undefined8 *local_c8;
  char local_c0;
  undefined8 *local_b8;
  char local_b0;
  undefined8 *local_a8;
  longlong *local_a0;
  undefined8 *local_98;
  char local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  char local_78;
  undefined8 *local_70;
  undefined8 local_68;
  int local_60;
  undefined8 *local_58;
  longlong *local_50;
  undefined8 *local_48;
  char local_40;
  code *local_38;
  
  FUN_00243390();
  puVar1 = local_80;
  if (local_78 == '\0') {
    if (((local_80 != (undefined8 *)0x0) && (FUN_00d50b00(), local_78 != '\0')) &&
       (local_80 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_78 = '\0';
  }
  plVar2 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar2 + 0x18))();
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  local_a0 = plVar3;
  local_50 = plVar2;
  if (puVar1 != (undefined8 *)0x0) {
    local_78 = '\0';
    local_80 = (undefined8 *)0x0;
    local_70 = puVar1;
    local_68 = 0xffffffff;
    local_60 = 0;
    local_38 = DAT_02572370;
    local_68._4_4_ = 0;
    while( true ) {
      if (local_68._4_4_ != 0) {
        if (local_68._4_4_ < 1) {
          iVar10 = -local_68._4_4_;
        }
        else {
          iVar10 = (int)local_68 - local_68._4_4_;
          local_68 = CONCAT44(local_68._4_4_,iVar10);
          FUN_00d23690();
          local_60 = local_60 + local_68._4_4_;
          iVar10 = 0;
        }
        local_68 = CONCAT44(iVar10,(int)local_68);
      }
      lVar4 = (longlong)(int)local_68;
      iVar10 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar10);
      if (*(int *)((longlong)local_70 + 0xc) <= iVar10) break;
      lVar9 = local_70[2];
      local_80 = *(undefined8 **)(lVar9 + 8 + lVar4 * 8);
      pvVar5 = _pthread_getspecific((pthread_key_t)lVar9);
      pVar8 = (pthread_key_t)lVar9;
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      local_58 = local_48;
      if (((local_40 == '\0') && (local_48 != (undefined8 *)0x0)) &&
         ((FUN_00d50b00(), local_40 != '\0' && (local_48 != (undefined8 *)0x0)))) {
        FUN_00d50b20();
      }
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013df480();
      puVar6 = local_48;
      if (((local_40 == '\0') && (local_48 != (undefined8 *)0x0)) &&
         ((FUN_00d50b00(), local_40 != '\0' && (local_48 != (undefined8 *)0x0)))) {
        FUN_00d50b20();
      }
      local_a8 = puVar6;
      FUN_0025dd10();
      puVar11 = local_48;
      if (local_48 == (undefined8 *)0x0) {
        bVar12 = true;
        puVar11 = (undefined8 *)0x0;
        puVar6 = (undefined8 *)0x0;
      }
      else {
        if (local_40 == '\0') {
          FUN_00d50b00();
          puVar6 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar6 >> 8),1);
          bVar12 = false;
          if ((local_40 == '\0') || (bVar12 = false, local_48 == (undefined8 *)0x0))
          goto LAB_019595b6;
          FUN_00d50b20();
        }
        else {
          local_40 = '\0';
        }
        puVar6 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar6 >> 8),1);
        bVar12 = false;
      }
LAB_019595b6:
      local_88 = puVar6;
      if (bVar12) {
        puVar6 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar6 = &DAT_02572358;
        (*local_38)();
        if (puVar6 == puVar11) {
          if (!bVar12) {
            FUN_00d50b20();
          }
        }
        else {
          bVar12 = puVar11 != (undefined8 *)0x0;
          puVar11 = puVar6;
          if (((byte)local_88 & bVar12) == 1) {
            FUN_00d50b20();
          }
        }
        FUN_0025ddc0();
        puVar6 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar6 = &DAT_02572358;
        (*local_38)();
        uVar7 = FUN_0076f1c0();
        bVar12 = true;
        local_88 = (undefined8 *)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
      }
      else {
        FUN_0076f110();
        puVar6 = local_48;
        if (local_48 == (undefined8 *)0x0) {
          puVar6 = (undefined8 *)0x0;
          bVar12 = false;
        }
        else if (local_40 == '\0') {
          FUN_00d50b00();
          bVar12 = true;
          if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar12 = true;
        }
      }
      local_48 = local_58;
      local_40 = '\0';
      FUN_00d21140();
      if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      local_48 = local_80;
      local_40 = '\0';
      FUN_00d21140();
      if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((bVar12) && (puVar6 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      plVar2 = local_50;
      if (((char)local_88 != '\0') && (puVar11 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (local_a8 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (local_58 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_001159b0();
  }
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  (*DAT_02572370)();
  if (plVar2 != (longlong *)0x0) {
    local_78 = '\0';
    local_80 = (undefined8 *)0x0;
    local_70 = (undefined8 *)plVar2[2];
    local_68 = local_68 & 0xffffffff00000000;
    if (0 < *(int *)((longlong)local_70 + 0xc)) {
      pVar8 = 0;
      do {
        local_80 = *(undefined8 **)(local_70[2] + (longlong)(int)pVar8 * 8);
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0195a240();
        puVar11 = local_48;
        local_c0 = 0;
        if (local_40 == '\0') {
          if (local_48 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_c0 = '\x01';
        local_c8 = puVar11;
        FUN_0195a310();
        local_b8 = local_98;
        local_b0 = 0;
        if (local_90 == '\0') {
          if (local_98 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_90 = '\0';
        }
        local_b0 = '\x01';
        FUN_01372190(&local_b8,&local_c8);
        if ((local_150 != '\0') && (local_158 != 0)) {
          FUN_00d50b20();
        }
        if ((local_b0 != '\0') && (local_b8 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_c0 != '\0') && (local_c8 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        FUN_0195a310();
        puVar11 = local_98;
        if (local_90 == '\0') {
          if (local_98 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_90 = '\0';
        }
        local_48 = puVar11;
        local_40 = '\0';
        FUN_00d214d0();
        if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (puVar11 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        plVar2 = local_50;
        pVar8 = (int)local_68 + 1;
        local_68 = CONCAT44(local_68._4_4_,pVar8);
      } while ((int)pVar8 < *(int *)((longlong)local_70 + 0xc));
      if ((local_78 != '\0') && (local_80 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  *unaff_RDI = puVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (local_a0 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (puVar1 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


