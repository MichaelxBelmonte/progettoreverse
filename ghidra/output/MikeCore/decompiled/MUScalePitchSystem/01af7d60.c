// Function: FUN_01af7d60
// Address: 01af7d60
// Size: 1213 bytes
// Class: MUScalePitchSystem


/* WARNING: Removing unreachable block (ram,0x01af8068) */
/* WARNING: Removing unreachable block (ram,0x01af805c) */
/* WARNING: Removing unreachable block (ram,0x01af81b6) */
/* WARNING: Removing unreachable block (ram,0x01af81c2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01af7d60(undefined8 param_1)

{
  longlong *plVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  longlong *unaff_RDI;
  longlong *plVar6;
  undefined8 uVar7;
  float extraout_XMM0_Db;
  undefined8 in_XMM0_Qb;
  uint extraout_XMM0_Dd;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  longlong local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  longlong local_98;
  char local_90;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  uVar7 = FUN_01ad3cb0();
  plVar1 = local_38;
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    uVar7 = FUN_00d50b20();
  }
  if ((plVar1 != (longlong *)0x0) && (*(char *)((longlong)unaff_RDI + 0x315) != '\0')) {
    FUN_01b0adb0(uVar7,*(undefined4 *)((longlong)unaff_RDI + 0x194));
    if (local_30 == '\0') {
      if (local_38 == (longlong *)0x0) {
        return;
      }
      FUN_00d50b00();
    }
    else if (local_38 == (longlong *)0x0) {
      return;
    }
    iVar2 = FUN_01d5b230();
    if (iVar2 != 0) {
      uVar7 = (**(code **)(*unaff_RDI + 0x640))();
      plVar1 = local_38;
      FUN_01d5b240(uVar7,0);
      FUN_01d65230();
      lVar4 = local_48;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      (**(code **)(*unaff_RDI + 0x640))();
      (**(code **)(*local_c8 + 0x370))();
      local_60 = 0;
      if (local_90 == '\0') {
        if (local_98 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_90 = '\0';
      }
      local_60 = '\x01';
      local_68 = local_98;
      pVar5 = 0;
      (**(code **)(*plVar1 + 0x5d0))(0,&local_68);
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01ad3cb0();
      plVar1 = local_38;
      pvVar3 = _pthread_getspecific(pVar5);
      plVar6 = plVar1;
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        plVar6 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar6 + 0x3a0))();
      uVar7 = (**(code **)(*unaff_RDI + 0x918))();
      if ((local_30 != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01e42030();
      plVar1 = local_38;
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_01e4ac90();
        FUN_01e42030();
        plVar1 = local_38;
        FUN_01e4ace0();
        local_58 = local_48;
        local_50 = 0;
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_50 = '\x01';
        (**(code **)(*plVar1 + 0x920))();
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b00();
      local_e8 = (float)uVar7;
      uStack_e4 = (uint)((ulonglong)uVar7 >> 0x20);
      uStack_e0 = (uint)extraout_XMM0_Qb;
      uStack_dc = (uint)((ulonglong)extraout_XMM0_Qb >> 0x20);
      auVar14._0_4_ = _DAT_023945e0 & (uint)local_e8;
      auVar14._4_4_ = _UNK_023945e4 & uStack_e4;
      auVar14._8_4_ = _UNK_023945e8 & uStack_e0;
      auVar14._12_4_ = _UNK_023945ec & uStack_dc;
      auVar8._4_12_ = SUB1612(auVar14 | _DAT_023945f0,4);
      auVar8._0_4_ = SUB164(auVar14 | _DAT_023945f0,0) + local_e8;
      auVar9 = roundss(auVar8,auVar8,0xb);
      fVar12 = extraout_XMM0_Db * DAT_02390118 + auVar9._0_4_;
      auVar10._0_4_ = _DAT_023945e0 & (uint)fVar12;
      auVar10._4_4_ = _UNK_023945e4 & (uint)extraout_XMM0_Db;
      auVar10._8_4_ = _UNK_023945e8 & extraout_XMM0_Dd;
      auVar10._12_4_ = _UNK_023945ec & extraout_XMM0_Dd;
      auVar11._4_12_ = SUB1612(auVar10 | _DAT_023945f0,4);
      auVar11._0_4_ = SUB164(auVar10 | _DAT_023945f0,0) + fVar12;
      auVar13._0_12_ = ZEXT812(0);
      auVar13._12_4_ = 0;
      auVar14 = roundss(auVar13,auVar11,0xb);
      auVar9._8_8_ = in_XMM0_Qb;
      auVar9._0_8_ = param_1;
      auVar9 = insertps(auVar9,auVar14,0x10);
      FUN_01d5ef60(auVar9._0_8_,0);
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((*(float *)((longlong)unaff_RDI + 0x1e4) == 0.0) &&
         (!NAN(*(float *)((longlong)unaff_RDI + 0x1e4)))) {
        FUN_01b08e50();
        *(undefined1 *)((longlong)unaff_RDI + 0x1e1) = 0;
      }
    }
    FUN_00d50b20();
  }
  return;
}


