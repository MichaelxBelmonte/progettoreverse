// Function: FUN_01b041e0
// Address: 01b041e0
// Size: 1919 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01b04808) */
/* WARNING: Removing unreachable block (ram,0x01b04814) */
/* WARNING: Removing unreachable block (ram,0x01b0430e) */
/* WARNING: Removing unreachable block (ram,0x01b0431b) */
/* WARNING: Removing unreachable block (ram,0x01b04347) */
/* WARNING: Removing unreachable block (ram,0x01b04350) */
/* WARNING: Removing unreachable block (ram,0x01b04397) */
/* WARNING: Removing unreachable block (ram,0x01b043c0) */
/* WARNING: Removing unreachable block (ram,0x01b04399) */
/* WARNING: Removing unreachable block (ram,0x01b043c2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b041e0(undefined8 param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  longlong lVar8;
  pthread_key_t pVar9;
  longlong *unaff_RDI;
  longlong *plVar10;
  undefined8 uVar11;
  float extraout_XMM0_Db;
  undefined8 in_XMM0_Qb;
  uint extraout_XMM0_Dd;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float local_178;
  uint uStack_174;
  uint uStack_170;
  uint uStack_16c;
  undefined1 local_168 [16];
  longlong local_148;
  char local_140;
  longlong *local_138;
  char local_130;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong *local_68;
  char local_60;
  int local_50;
  longlong *local_40;
  char local_38;
  
  plVar3 = local_68;
  lVar8 = DAT_027e3c80;
  local_168._8_8_ = in_XMM0_Qb;
  local_168._0_8_ = param_1;
  if (DAT_027e3c80 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_027e3d18;
  if (DAT_027e3d18 != 0) {
    FUN_00d50b00();
  }
  FUN_01d61e70();
  if (local_60 == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x34] != 0) {
    iVar5 = FUN_01b18590();
    if (iVar5 != -1) {
      FUN_01d5e2b0();
      if (local_60 == '\0') {
        if (local_68 != (longlong *)0x0) {
          FUN_00d50b00();
          goto LAB_01b04355;
        }
      }
      else if (local_68 != (longlong *)0x0) {
LAB_01b04355:
        local_60 = '\0';
        local_68 = (longlong *)0x0;
        local_50 = -1;
        do {
          lVar8 = (longlong)local_50;
          local_50 = local_50 + 1;
          if (*(int *)((longlong)plVar3 + 0xc) <= local_50) break;
          local_68 = *(longlong **)(plVar3[2] + 8 + lVar8 * 8);
          FUN_01d65460();
          lVar8 = DAT_027e3d20;
          if (DAT_027e3d20 != 0) {
            FUN_00d50b00();
          }
          cVar4 = (**(code **)(*local_40 + 0x50))();
          if (lVar8 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        } while ((cVar4 == '\0') || (iVar6 = FUN_01d654a0(), iVar6 != iVar5));
        FUN_002a0a30();
        FUN_00d50b20();
      }
    }
    FUN_01ad3cb0();
    if (local_60 == '\0') {
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b00();
        goto LAB_01b044c8;
      }
    }
    else if (local_68 != (longlong *)0x0) {
LAB_01b044c8:
      uVar11 = (**(code **)(*unaff_RDI + 0x640))();
      FUN_01d5b240(uVar11,0);
      FUN_01d65230();
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
      local_a8 = local_40;
      (**(code **)(*unaff_RDI + 0x640))();
      (**(code **)(*local_138 + 0x370))();
      local_98 = local_d8;
      local_90 = 0;
      if (local_d0 == '\0') {
        if (local_d8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_d0 = '\0';
      }
      local_90 = '\x01';
      pVar9 = 0;
      (**(code **)(*local_68 + 0x5d0))(0,&local_98);
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_140 != '\0') && (local_148 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar7 = _pthread_getspecific(pVar9);
      plVar10 = local_68;
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        plVar10 = (longlong *)local_68[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar10 + 0x3a0))();
      uVar11 = (**(code **)(*unaff_RDI + 0x918))();
      FUN_00d50b20();
      local_178 = (float)uVar11;
      uStack_174 = (uint)((ulonglong)uVar11 >> 0x20);
      uStack_170 = (uint)extraout_XMM0_Qb;
      uStack_16c = (uint)((ulonglong)extraout_XMM0_Qb >> 0x20);
      auVar13._0_4_ = (uint)local_178 & _DAT_023945e0;
      auVar13._4_4_ = uStack_174 & _UNK_023945e4;
      auVar13._8_4_ = uStack_170 & _UNK_023945e8;
      auVar13._12_4_ = uStack_16c & _UNK_023945ec;
      auVar14._4_12_ = SUB1612(auVar13 | ZEXT416(DAT_02394dc8),4);
      auVar14._0_4_ = SUB164(auVar13 | ZEXT416(DAT_02394dc8),0) + local_178;
      auVar15 = roundss(auVar14,auVar14,0xb);
      fVar16 = extraout_XMM0_Db * DAT_02390118 + auVar15._0_4_;
      auVar15._0_4_ = _DAT_023945e0 & (uint)fVar16;
      auVar15._4_4_ = _UNK_023945e4 & (uint)extraout_XMM0_Db;
      auVar15._8_4_ = _UNK_023945e8 & extraout_XMM0_Dd;
      auVar15._12_4_ = _UNK_023945ec & extraout_XMM0_Dd;
      auVar12._4_12_ = SUB1612(auVar15 | ZEXT416(DAT_02394dc8),4);
      auVar12._0_4_ = SUB164(auVar15 | ZEXT416(DAT_02394dc8),0) + fVar16;
      auVar15 = roundss(auVar12,auVar12,0xb);
      insertps(local_168,auVar15,0x10);
      goto LAB_01b04769;
    }
    if (unaff_RDI == (longlong *)0x0) {
      bVar1 = true;
      goto LAB_01b04777;
    }
  }
LAB_01b04769:
  local_b0 = 0;
  FUN_00d50b00();
  bVar1 = false;
LAB_01b04777:
  local_b0 = '\x01';
  local_b8 = unaff_RDI;
  FUN_01d62b10();
  if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e42030();
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_68 != (longlong *)0x0) {
    FUN_01e4ac90();
    FUN_01e42030();
    FUN_01e4ace0();
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
    local_88 = local_40;
    (**(code **)(*local_68 + 0x920))();
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_c0 = 0;
  if (!bVar1) {
    FUN_00d50b00();
  }
  local_c0 = '\x01';
  local_e8 = 0;
  local_e0 = '\0';
  local_c8 = unaff_RDI;
  FUN_01d5ef60(&local_e8,DAT_023dcce4);
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d62b80();
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


