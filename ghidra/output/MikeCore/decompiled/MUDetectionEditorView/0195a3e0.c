// Function: FUN_0195a3e0
// Address: 0195a3e0
// Size: 2131 bytes
// Class: MUDetectionEditorView


/* WARNING: Removing unreachable block (ram,0x0195a7aa) */
/* WARNING: Removing unreachable block (ram,0x0195a7b6) */
/* WARNING: Removing unreachable block (ram,0x0195a705) */
/* WARNING: Removing unreachable block (ram,0x0195a711) */
/* WARNING: Removing unreachable block (ram,0x0195a43e) */
/* WARNING: Removing unreachable block (ram,0x0195a44a) */
/* WARNING: Removing unreachable block (ram,0x0195a7f9) */
/* WARNING: Removing unreachable block (ram,0x0195a805) */
/* WARNING: Removing unreachable block (ram,0x0195a879) */
/* WARNING: Removing unreachable block (ram,0x0195a885) */
/* WARNING: Removing unreachable block (ram,0x0195a71f) */
/* WARNING: Removing unreachable block (ram,0x0195a72b) */
/* WARNING: Removing unreachable block (ram,0x0195a78e) */
/* WARNING: Removing unreachable block (ram,0x0195a79a) */

undefined8 * FUN_0195a3e0(void)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  void *pvVar7;
  undefined8 *puVar8;
  pthread_key_t pVar9;
  longlong lVar10;
  int iVar11;
  undefined8 *unaff_RDI;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong local_148;
  char local_140;
  undefined8 *local_b8;
  char local_b0;
  undefined8 *local_a8;
  char local_a0;
  undefined8 *local_98;
  longlong *local_90;
  undefined8 *local_88;
  char local_80;
  undefined8 *local_78;
  char local_70;
  undefined8 *local_68;
  undefined8 local_60;
  int local_58;
  longlong *local_50;
  undefined8 *local_48;
  char local_40;
  code *local_38;
  
  FUN_00243390();
  local_98 = local_78;
  if (local_70 == '\0') {
    if (((local_78 != (undefined8 *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
       (local_78 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70 = '\0';
  }
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar5 + 0x18))();
  local_50 = plVar5;
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar5 + 0x18))();
  local_90 = plVar5;
  if (local_98 != (undefined8 *)0x0) {
    local_70 = '\0';
    local_78 = (undefined8 *)0x0;
    local_68 = local_98;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_38 = DAT_02572370;
    local_60._4_4_ = 0;
    while( true ) {
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar11 = -local_60._4_4_;
        }
        else {
          iVar11 = (int)local_60 - local_60._4_4_;
          local_60 = CONCAT44(local_60._4_4_,iVar11);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar11 = 0;
        }
        local_60 = CONCAT44(iVar11,(int)local_60);
      }
      lVar6 = (longlong)(int)local_60;
      iVar11 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar11);
      if (*(int *)((longlong)local_68 + 0xc) <= iVar11) break;
      lVar10 = local_68[2];
      local_78 = *(undefined8 **)(lVar10 + 8 + lVar6 * 8);
      pvVar7 = _pthread_getspecific((pthread_key_t)lVar10);
      pVar9 = (pthread_key_t)lVar10;
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      puVar8 = local_48;
      if (((local_40 == '\0') && (local_48 != (undefined8 *)0x0)) &&
         ((FUN_00d50b00(), local_40 != '\0' && (local_48 != (undefined8 *)0x0)))) {
        FUN_00d50b20();
      }
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013df480();
      puVar3 = local_48;
      if (((local_40 == '\0') && (local_48 != (undefined8 *)0x0)) &&
         ((FUN_00d50b00(), local_40 != '\0' && (local_48 != (undefined8 *)0x0)))) {
        FUN_00d50b20();
      }
      local_40 = '\0';
      local_48 = puVar3;
      cVar4 = FUN_00ca18c0();
      if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') {
        puVar13 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar13 = &DAT_02572358;
        (*local_38)();
        FUN_0025ddc0();
        puVar12 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar12 = &DAT_02572358;
        (*local_38)();
        FUN_0076f1c0();
        bVar1 = true;
        bVar2 = true;
      }
      else {
        FUN_0025dd10();
        puVar13 = local_48;
        if (local_48 == (undefined8 *)0x0) {
          puVar13 = (undefined8 *)0x0;
          bVar2 = false;
        }
        else if (local_40 == '\0') {
          FUN_00d50b00();
          bVar2 = true;
          if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40 = '\0';
          bVar2 = true;
        }
        FUN_0076f110();
        puVar12 = local_48;
        if (local_48 == (undefined8 *)0x0) {
          puVar12 = (undefined8 *)0x0;
          bVar1 = false;
        }
        else if (local_40 == '\0') {
          FUN_00d50b00();
          bVar1 = true;
          if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar1 = true;
        }
      }
      local_40 = '\0';
      local_48 = puVar8;
      FUN_00d21140();
      if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      local_48 = local_78;
      local_40 = '\0';
      FUN_00d21140();
      if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((bVar1) && (puVar12 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((bVar2) && (puVar13 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar3 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (puVar8 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_001159b0();
  }
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &DAT_02572358;
  (*DAT_02572370)();
  if (local_50 != (longlong *)0x0) {
    local_70 = '\0';
    local_78 = (undefined8 *)0x0;
    local_68 = (undefined8 *)local_50[2];
    local_60 = local_60 & 0xffffffff00000000;
    if (0 < *(int *)((longlong)local_68 + 0xc)) {
      pVar9 = 0;
      do {
        local_78 = *(undefined8 **)(local_68[2] + (longlong)(int)pVar9 * 8);
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0195a240();
        puVar3 = local_48;
        local_b0 = 0;
        if (local_40 == '\0') {
          if (local_48 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_b0 = '\x01';
        local_b8 = puVar3;
        FUN_0195a310();
        local_a8 = local_88;
        local_a0 = 0;
        if (local_80 == '\0') {
          if (local_88 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_80 = '\0';
        }
        local_a0 = '\x01';
        FUN_0137c3f0(&local_a8,&local_b8);
        if ((local_140 != '\0') && (local_148 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (local_a8 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_b0 != '\0') && (local_b8 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        FUN_0195a310();
        puVar3 = local_88;
        if (local_80 == '\0') {
          if (local_88 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_80 = '\0';
        }
        local_48 = puVar3;
        local_40 = '\0';
        FUN_00d214d0();
        if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (puVar3 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        pVar9 = (int)local_60 + 1;
        local_60 = CONCAT44(local_60._4_4_,pVar9);
      } while ((int)pVar9 < *(int *)((longlong)local_68 + 0xc));
      if ((local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  *unaff_RDI = puVar8;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (local_90 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_50 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_98 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


