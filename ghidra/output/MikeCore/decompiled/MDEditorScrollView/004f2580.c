// Function: FUN_004f2580
// Address: 004f2580
// Size: 2115 bytes
// Class: MDEditorScrollView


/* WARNING: Removing unreachable block (ram,0x004f2a12) */
/* WARNING: Removing unreachable block (ram,0x004f2a1f) */
/* WARNING: Removing unreachable block (ram,0x004f26e9) */
/* WARNING: Removing unreachable block (ram,0x004f275b) */
/* WARNING: Removing unreachable block (ram,0x004f2760) */
/* WARNING: Removing unreachable block (ram,0x004f276c) */
/* WARNING: Removing unreachable block (ram,0x004f26ef) */
/* WARNING: Removing unreachable block (ram,0x004f2bf0) */
/* WARNING: Removing unreachable block (ram,0x004f2bf9) */
/* WARNING: Removing unreachable block (ram,0x004f2a56) */
/* WARNING: Removing unreachable block (ram,0x004f2a63) */
/* WARNING: Removing unreachable block (ram,0x004f25da) */
/* WARNING: Removing unreachable block (ram,0x004f25e7) */
/* WARNING: Removing unreachable block (ram,0x004f271b) */
/* WARNING: Removing unreachable block (ram,0x004f2728) */
/* WARNING: Removing unreachable block (ram,0x004f2c51) */
/* WARNING: Removing unreachable block (ram,0x004f2c5e) */
/* WARNING: Removing unreachable block (ram,0x004f2b8c) */
/* WARNING: Removing unreachable block (ram,0x004f2bb0) */
/* WARNING: Removing unreachable block (ram,0x004f27c7) */
/* WARNING: Removing unreachable block (ram,0x004f27f0) */
/* WARNING: Removing unreachable block (ram,0x004f27c9) */
/* WARNING: Removing unreachable block (ram,0x004f27f2) */
/* WARNING: Removing unreachable block (ram,0x004f2b8e) */
/* WARNING: Removing unreachable block (ram,0x004f2bb2) */

void FUN_004f2580(undefined4 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  longlong *plVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  void *pvVar7;
  pthread_key_t pVar8;
  longlong lVar9;
  longlong *unaff_RSI;
  longlong *plVar10;
  longlong unaff_RDI;
  longlong *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  longlong *local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  float local_78;
  longlong *local_68;
  char local_60;
  int local_50;
  longlong *local_40;
  char local_38;
  
  plVar11 = local_68;
  if (*(longlong *)(unaff_RDI + 0x10) == 0) {
LAB_004f25f1:
    plVar10 = (longlong *)0x0;
  }
  else {
    FUN_0021a630();
    plVar10 = local_68;
    if (local_60 == '\0') {
      if (local_68 == (longlong *)0x0) goto LAB_004f25f1;
      FUN_00d50b00();
    }
  }
  (**(code **)(*plVar10 + 0x9b8))(param_1,param_2);
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00243390();
  if (local_60 == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  iVar5 = FUN_00228b30();
  if ((iVar5 == 0) && (local_68 != (longlong *)0x0)) {
    if (*(int *)((longlong)local_68 + 0xc) == 0) goto LAB_004f2a8f;
    if (*unaff_RSI != 0) {
      FUN_00d50b00();
      FUN_0025e9a0();
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_60 = '\0';
      local_68 = (longlong *)0x0;
      local_50 = -1;
      while( true ) {
        lVar6 = (longlong)local_50;
        local_50 = local_50 + 1;
        if (*(int *)((longlong)plVar11 + 0xc) <= local_50) break;
        lVar9 = plVar11[2];
        local_68 = *(longlong **)(lVar9 + 8 + lVar6 * 8);
        pvVar7 = _pthread_getspecific((pthread_key_t)lVar9);
        pVar8 = (pthread_key_t)lVar9;
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        pvVar7 = _pthread_getspecific(pVar8);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0165a070();
        if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_40 == local_c8) {
          local_38 = '\0';
          FUN_00d21140();
          local_40 = local_68;
        }
        else {
          pvVar7 = _pthread_getspecific(pVar8);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          pvVar7 = _pthread_getspecific(pVar8);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012eb770();
          pvVar7 = _pthread_getspecific(pVar8);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0165a070();
          if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (local_40 == local_d8) {
            local_38 = '\0';
            FUN_00d21140();
            local_40 = local_68;
          }
        }
      }
      FUN_001159b0();
      FUN_00d50b20();
      goto LAB_004f2a82;
    }
  }
  else {
LAB_004f2a82:
    if (plVar11 == (longlong *)0x0) goto LAB_004f2dc3;
LAB_004f2a8f:
    plVar2 = local_68;
    if (0 < *(int *)((longlong)plVar11 + 0xc)) {
      FUN_01e436c0();
      (**(code **)(*plVar10 + 0xb38))();
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00243390();
      if (local_60 == '\0') {
        if (local_68 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_68 == (longlong *)0x0) {
        local_78 = 0.0;
        iVar5 = *(int *)((longlong)plVar11 + 0xc);
        local_68 = (longlong *)0x0;
      }
      else {
        local_60 = '\0';
        local_68 = (longlong *)0x0;
        local_50 = -1;
        local_78 = 0.0;
        fVar3 = local_78;
        while( true ) {
          local_78 = fVar3;
          lVar6 = (longlong)local_50;
          local_50 = local_50 + 1;
          if (*(int *)((longlong)plVar2 + 0xc) <= local_50) break;
          local_68 = *(longlong **)(plVar2[2] + 8 + lVar6 * 8);
          cVar4 = FUN_00d23d70();
          fVar3 = local_78 + DAT_02390124;
          if (cVar4 == '\0') {
            fVar3 = local_78;
          }
        }
        FUN_001159b0();
        iVar5 = *(int *)((longlong)plVar11 + 0xc);
      }
      if ((iVar5 < 1) || (local_78 / (float)iVar5 <= DAT_023b1610)) {
        FUN_004f2260(plVar10,FUN_004f0e40);
        if (local_68 == plVar11) {
LAB_004f2cf9:
          if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          plVar11 = local_68;
          if (local_60 == '\0') {
            if (local_68 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            FUN_00d50b20();
            goto LAB_004f2cf9;
          }
          FUN_00d50b20();
        }
        lVar6 = *(longlong *)(plVar11[2] + (longlong)(*(int *)((longlong)plVar11 + 0xc) / 2) * 8);
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        uVar12 = (**(code **)(*plVar10 + 0xc38))();
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        uVar13 = (**(code **)(*plVar10 + 0xa98))();
        auVar1._8_4_ = extraout_XMM0_Dc;
        auVar1._0_8_ = uVar12;
        auVar1._12_4_ = extraout_XMM0_Dd;
        auVar14._4_12_ = auVar1._4_12_;
        auVar14._0_4_ = (float)uVar12 + (float)((ulonglong)uVar13 >> 0x20) * DAT_02390118;
        auVar15._8_4_ = extraout_XMM0_Dc_00;
        auVar15._0_8_ = uVar13;
        auVar15._12_4_ = extraout_XMM0_Dd_00;
        auVar15 = blendps(auVar14,auVar15,0xe);
        (**(code **)(*plVar10 + 0xaa0))(auVar15._0_4_);
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      else if (plVar2 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d50b20();
LAB_004f2dc3:
  if (plVar10 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


