// Function: FUN_01c90380
// Address: 01c90380
// Size: 1528 bytes
// Class: MUSignatureEditorRulerView


/* WARNING: Removing unreachable block (ram,0x01c904aa) */
/* WARNING: Removing unreachable block (ram,0x01c904b6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c90380(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  void *pvVar7;
  pthread_key_t pVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  undefined8 *puVar12;
  bool bVar13;
  undefined8 uVar14;
  longlong local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  char local_60;
  undefined8 *local_58;
  undefined8 local_50;
  int local_48;
  longlong *local_40;
  char local_38;
  
  uVar14 = (**(code **)(*DAT_028b7260 + 0x9a8))(param_1,0);
  puVar12 = local_68;
  if ((((local_60 == '\0') && (local_68 != (undefined8 *)0x0)) &&
      (uVar14 = FUN_00d50b00(), local_60 != '\0')) && (local_68 != (undefined8 *)0x0)) {
    uVar14 = FUN_00d50b20();
  }
  local_70 = puVar12;
  (**(code **)(*DAT_028b7260 + 0x9b0))(uVar14,0);
  local_a8 = local_40;
  local_a0 = 0;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_a0 = '\x01';
  local_d8 = 0;
  local_d0 = '\0';
  FUN_01293ed0(&local_d8);
  local_78 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != (undefined8 *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
       (local_68 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  if (local_78 != (undefined8 *)0x0) {
    local_60 = '\0';
    local_68 = (undefined8 *)0x0;
    local_58 = local_78;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_50._4_4_ = 0;
    while( true ) {
      if (local_50._4_4_ != 0) {
        if ((int)local_50._4_4_ < 1) {
          iVar11 = -local_50._4_4_;
        }
        else {
          iVar11 = (int)local_50 - local_50._4_4_;
          local_50 = CONCAT44(local_50._4_4_,iVar11);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar11 = 0;
        }
        local_50 = CONCAT44(iVar11,(int)local_50);
      }
      lVar5 = (longlong)(int)local_50;
      iVar11 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar11);
      if (*(int *)((longlong)local_58 + 0xc) <= iVar11) break;
      lVar10 = local_58[2];
      local_68 = *(undefined8 **)(lVar10 + 8 + lVar5 * 8);
      FUN_0141ae30();
      local_98 = local_b8;
      pVar8 = (pthread_key_t)lVar10;
      local_90 = 0;
      if (local_b0 == '\0') {
        if (local_b8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_b0 = '\0';
      }
      local_90 = '\x01';
      FUN_0141af60();
      plVar1 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      plVar6 = (longlong *)FUN_00e8fc40();
      FUN_000fdf90();
      (**(code **)(*plVar6 + 0x18))();
      pvVar7 = _pthread_getspecific(pVar8);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01320d00();
      plVar2 = local_40;
      puVar12 = local_70;
      local_80 = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_80 = '\x01';
      local_88 = plVar2;
      FUN_013fb180();
      if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_c8 = plVar1;
      local_c0 = '\0';
      FUN_013fb350();
      if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_38 = '\0';
      local_40 = plVar6;
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar6 + 0x398))();
      FUN_00d50b20();
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00115190();
  }
  if (puVar4 == (undefined8 *)0x0) {
    while( true ) {
      FUN_00d403d0();
      FUN_00d3fc60();
      if ((local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (MACH_HEADER.filetype == 0) break;
      FUN_00da68a0(_DAT_02391038);
    }
  }
  else {
    while( true ) {
      FUN_00d403d0();
      FUN_00d3fc60();
      if ((local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      local_60 = '\0';
      local_68 = (undefined8 *)0x0;
      local_50 = 0xffffffff;
      local_48 = 0;
      local_58 = puVar4;
      while( true ) {
        lVar5 = (longlong)(int)local_50;
        iVar11 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar11);
        if (*(int *)((longlong)local_58 + 0xc) <= iVar11) break;
        local_68 = *(undefined8 **)(local_58[2] + 8 + lVar5 * 8);
        cVar3 = FUN_00e34230();
        if (((cVar3 == '\0') && (cVar3 = FUN_00e34240(), cVar3 == '\0')) &&
           (cVar3 = FUN_00e34250(), cVar3 == '\0')) {
          bVar13 = local_50 < 0;
          uVar9 = local_50._4_4_;
        }
        else {
          lVar5 = local_50;
          uVar9 = ~local_50._4_4_;
          local_50 = CONCAT44(uVar9,(int)local_50);
          bVar13 = -1 < lVar5;
        }
        if (uVar9 != 0) {
          if (uVar9 == 0 || bVar13) {
            iVar11 = -uVar9;
          }
          else {
            local_50._4_4_ = (uint)((ulonglong)local_50 >> 0x20);
            local_50 = CONCAT44(local_50._4_4_,(int)local_50 - uVar9);
            FUN_00d23690(uVar9,uVar9);
            local_48 = local_48 + local_50._4_4_;
            iVar11 = 0;
          }
          local_50 = CONCAT44(iVar11,(int)local_50);
        }
      }
      FUN_0079b950();
      if (*(int *)((longlong)puVar4 + 0xc) == 0) break;
      FUN_00da68a0(_DAT_02391038);
    }
  }
  FUN_00d50b20();
  if (local_78 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar12 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


