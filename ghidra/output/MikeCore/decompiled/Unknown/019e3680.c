// Function: FUN_019e3680
// Address: 019e3680
// Size: 2768 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x019e3ceb) */
/* WARNING: Removing unreachable block (ram,0x019e3cf7) */
/* WARNING: Removing unreachable block (ram,0x019e39fe) */
/* WARNING: Removing unreachable block (ram,0x019e3a0a) */
/* WARNING: Removing unreachable block (ram,0x019e3fba) */
/* WARNING: Removing unreachable block (ram,0x019e3fc6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_019e3680(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  longlong *plVar3;
  char *pcVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  pthread_key_t pVar8;
  ulonglong uVar9;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar10;
  undefined8 uVar11;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar21;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float local_118;
  float fStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70 [8];
  char local_68;
  undefined7 uStack_67;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong local_48;
  longlong local_40;
  char local_38 [8];
  undefined8 extraout_XMM0_Qb_02;
  
  (**(code **)(*param_2 + 0xe10))();
  FUN_00d23340();
  lVar7 = CONCAT71((int7)((ulonglong)param_1 >> 8),local_70[0]);
  local_68 = local_70[0];
  pcVar4 = local_70;
  if (local_70[0] == '\0') {
    pcVar4 = &local_68;
  }
  *pcVar4 = '\0';
  if ((local_70[0] != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  local_40 = local_78;
  local_38[0] = local_68 != '\0';
  pcVar4 = &local_68;
  if (!(bool)local_38[0]) {
    pcVar4 = local_38;
  }
  *pcVar4 = '\0';
  if ((local_68 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 == 0) {
    uVar9 = 0;
  }
  else {
    lVar1 = *unaff_RDI;
    local_48 = *unaff_RSI;
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar7);
    if (pvVar5 != (void *)0x0) {
      lVar6 = FUN_00e8b990();
      if (lVar6 != 0) {
        lVar7 = local_40;
      }
    }
    FUN_0125e930();
    pVar8 = (pthread_key_t)lVar7;
    if (local_78 == 0) {
      local_118 = (float)(**(code **)(*param_2 + 0xc38))();
      fStack_110 = extraout_XMM0_Dc_00;
    }
    else {
      pvVar5 = _pthread_getspecific(pVar8);
      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        pVar8 = (pthread_key_t)local_40;
      }
      FUN_0125e930();
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152ebe0();
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01507e40();
      plVar10 = local_58;
      pvVar5 = _pthread_getspecific(pVar8);
      plVar3 = local_58;
      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar10 = plVar3, lVar7 != 0)) {
        plVar10 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      pvVar5 = _pthread_getspecific(pVar8);
      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        pVar8 = (pthread_key_t)local_40;
      }
      FUN_0125e930();
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152ebe0();
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01507f00();
      lVar7 = *plVar10;
      local_118 = (float)(**(code **)(lVar7 + 0x3a0))();
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
        FUN_00d50b20();
      }
      fStack_110 = extraout_XMM0_Dc;
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_70[0] != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar7);
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      lVar7 = lVar1;
    }
    FUN_0125e930();
    pVar8 = (pthread_key_t)lVar7;
    if (local_78 == 0) {
      local_108 = (**(code **)(*param_2 + 0xc38))();
      uStack_100 = extraout_XMM0_Qb_00;
    }
    else {
      pvVar5 = _pthread_getspecific(pVar8);
      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        pVar8 = (pthread_key_t)lVar1;
      }
      FUN_0125e930();
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152ebe0();
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01507e40();
      plVar10 = local_58;
      pvVar5 = _pthread_getspecific(pVar8);
      plVar3 = local_58;
      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar10 = plVar3, lVar7 != 0)) {
        plVar10 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      pvVar5 = _pthread_getspecific(pVar8);
      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        pVar8 = (pthread_key_t)lVar1;
      }
      FUN_0125e930();
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152ebe0();
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01507f00();
      lVar7 = *plVar10;
      local_108 = (**(code **)(lVar7 + 0x3a0))();
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
        FUN_00d50b20();
      }
      uStack_100 = extraout_XMM0_Qb;
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_70[0] != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar7);
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      lVar7 = local_48;
    }
    pVar8 = (pthread_key_t)lVar7;
    FUN_0125e930();
    if (local_78 == 0) {
      local_f8 = (**(code **)(*param_2 + 0xc38))();
    }
    else {
      pvVar5 = _pthread_getspecific(pVar8);
      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        pVar8 = (pthread_key_t)local_48;
      }
      FUN_0125e930();
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152ebe0();
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01507e40();
      plVar10 = local_58;
      pvVar5 = _pthread_getspecific(pVar8);
      plVar3 = local_58;
      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar10 = plVar3, lVar7 != 0)) {
        plVar10 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      pvVar5 = _pthread_getspecific(pVar8);
      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        pVar8 = (pthread_key_t)local_48;
      }
      FUN_0125e930();
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152ebe0();
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01507f00();
      lVar7 = *plVar10;
      local_f8 = (**(code **)(lVar7 + 0x3a0))();
      pVar8 = (pthread_key_t)lVar7;
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_70[0] != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar8);
    if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      pVar8 = (pthread_key_t)local_40;
    }
    FUN_01259650();
    auVar13._0_4_ = (float)(**(code **)(*param_2 + 0x938))();
    pvVar5 = _pthread_getspecific(pVar8);
    if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      pVar8 = (pthread_key_t)
              *(undefined8 *)(lVar1 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
    FUN_01259650();
    uVar11 = (**(code **)(*param_2 + 0x938))();
    pvVar5 = _pthread_getspecific(pVar8);
    if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      local_48 = *(longlong *)(local_48 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
    FUN_01259650();
    auVar12._0_8_ = (**(code **)(*param_2 + 0x938))();
    auVar12._8_8_ = extraout_XMM0_Qb_02;
    auVar19._8_8_ = uStack_100;
    auVar19._0_8_ = local_108;
    auVar19 = insertps(auVar19,local_f8,0x10);
    fVar18 = auVar19._0_4_ - local_118;
    local_118 = auVar19._4_4_ - local_118;
    fVar21 = auVar19._8_4_ - fStack_110;
    fStack_110 = auVar19._12_4_ - fStack_110;
    auVar2._8_8_ = extraout_XMM0_Qb_01;
    auVar2._0_8_ = uVar11;
    auVar19 = insertps(auVar2,auVar12,0x10);
    auVar13._4_4_ = auVar13._0_4_;
    auVar13._8_4_ = extraout_XMM0_Dc_01;
    auVar13._12_4_ = extraout_XMM0_Dc_01;
    fVar14 = (auVar19._0_4_ - auVar13._0_4_) * _DAT_0241b620;
    fVar15 = (auVar19._4_4_ - auVar13._0_4_) * _UNK_0241b624;
    fVar16 = (auVar19._8_4_ - extraout_XMM0_Dc_01) * _UNK_0241b628;
    fVar17 = (auVar19._12_4_ - extraout_XMM0_Dc_01) * _UNK_0241b62c;
    auVar20._0_4_ = fVar18 * fVar18 + fVar14 * fVar14;
    auVar20._4_4_ = local_118 * local_118 + fVar15 * fVar15;
    auVar20._8_4_ = fVar21 * fVar21 + fVar16 * fVar16;
    auVar20._12_4_ = fStack_110 * fStack_110 + fVar17 * fVar17;
    auVar13 = sqrtps(auVar13,auVar20);
    uVar9 = 0xffffffff;
    if (auVar13._4_4_ <= auVar13._0_4_) {
      uVar9 = (ulonglong)(auVar13._4_4_ < auVar13._0_4_);
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
  }
  return uVar9;
}


