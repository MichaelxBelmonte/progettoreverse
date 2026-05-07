// Function: FUN_01b57030
// Address: 01b57030
// Size: 2518 bytes
// Class: GNList
// String references:
//   "GNList"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b57030(code *param_1)

{
  double dVar1;
  uint3 uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined7 uVar9;
  void *pvVar7;
  longlong lVar8;
  undefined7 extraout_var;
  byte bVar10;
  longlong lVar12;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar13;
  longlong *plVar14;
  longlong **pplVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  longlong *local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  int local_58;
  undefined8 local_54;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong uVar11;
  
  lVar12 = *(longlong *)(unaff_RDI + 0x10);
  if (lVar12 != 0) {
    FUN_00d50b00();
  }
  local_90 = lVar12;
  uVar16 = FUN_01cb4790();
  plVar14 = local_70;
  if ((((local_68 == '\0') && (local_70 != (longlong *)0x0)) &&
      (uVar16 = FUN_00d50b00(), local_68 != '\0')) && (local_70 != (longlong *)0x0)) {
    uVar16 = FUN_00d50b20();
  }
  local_80 = plVar14;
  if (*unaff_RSI == 0) {
    uVar6 = 0;
  }
  else {
    local_e0 = '\0';
    local_e8 = *unaff_RSI;
    FUN_000175c0(uVar16,&local_e8);
    plVar14 = local_70;
    if ((DAT_027048b0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      _DAT_026cd478 = FUN_00d4fe50();
      DAT_026cd460 = "GNList";
      _DAT_026cd468 = 0x20;
      param_1 = FUN_00018210;
      _DAT_026cd470 = FUN_00018210;
      _DAT_026cd480 = 0;
      uRam00000000026cd488 = 0;
      _DAT_026cd490 = 0;
      _DAT_026cd508 = 0;
      uRam00000000026cd510 = 0;
      _DAT_026cd518 = 0;
      DAT_026cd51a = 6;
      _DAT_026cd498 = 0;
      uRam00000000026cd4a0 = 0;
      _DAT_026cd4a8 = 0;
      uRam00000000026cd4b0 = 0;
      _DAT_026cd4b8 = 0;
      uRam00000000026cd4c0 = 0;
      _DAT_026cd4c8 = 0;
      uRam00000000026cd4d0 = 0;
      _DAT_026cd4d8 = 0;
      uRam00000000026cd4e0 = 0;
      _DAT_026cd4e8 = 0;
      uRam00000000026cd4f0 = 0;
      _DAT_026cd4f8 = 0;
      uRam00000000026cd500 = 0;
      DAT_026cd523 = 0;
      _DAT_026cd51b = 0;
      ___cxa_guard_release();
    }
    pplVar15 = (longlong **)&DAT_02802688;
    if (plVar14 != (longlong *)0x0) {
      (**(code **)(*plVar14 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 != '\0') {
        FUN_00053ac0();
        cVar4 = FUN_00e8da30();
        pplVar15 = &local_70;
        if (cVar4 == '\0') {
          pplVar15 = (longlong **)&DAT_02802688;
        }
      }
    }
    plVar14 = *pplVar15;
    if (plVar14 == (longlong *)0x0) {
      uVar6 = 0;
      plVar14 = (longlong *)0x0;
    }
    else {
      if (*(char *)(pplVar15 + 1) == '\0') {
        FUN_00d50b00();
      }
      else {
        *(undefined1 *)(pplVar15 + 1) = 0;
      }
      uVar6 = CONCAT71((int7)((ulonglong)pplVar15 >> 8),1);
    }
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if (plVar14 != (longlong *)0x0) {
      local_98 = uVar6;
      local_40 = FUN_00d45bc0();
      local_48 = FUN_00d45bc0();
      local_38 = FUN_00d45bc0();
      uVar6 = FUN_00d45bc0();
      uVar6 = FUN_01b57fb0((undefined4)local_40,local_48,local_38,uVar6);
      plVar14 = local_70;
      if (local_70 == (longlong *)0x0) {
        local_78 = (undefined4)CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
        local_74 = 0;
        local_40 = (ulonglong)local_40._4_4_ << 0x20;
      }
      else {
        if (local_68 == '\0') {
          uVar6 = FUN_00d50b00();
        }
        uVar9 = (undefined7)((ulonglong)uVar6 >> 8);
        local_74 = (undefined4)CONCAT71(uVar9,1);
        local_78 = 0;
        local_40 = CONCAT44(local_40._4_4_,(int)CONCAT71(uVar9,1));
      }
      lVar12 = 0;
      do {
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        plVar13 = plVar14;
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar13 = (longlong *)plVar14[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        dVar1 = (double)(**(code **)(*plVar13 + 0x380))(SUB84((double)(int)lVar12 / DAT_0241d648,0))
        ;
        auVar18._8_8_ = CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc) & _UNK_023945b8 | _UNK_023945c8;
        auVar18._0_8_ =
             (double)((ulonglong)(dVar1 * DAT_0241d648) & _DAT_023945b0 | _DAT_023945c0) +
             dVar1 * DAT_0241d648;
        auVar18 = roundsd(auVar18,auVar18,0xb);
        uVar16 = 0;
        uVar17 = 0;
        if (0.0 <= auVar18._0_8_) {
          uVar16 = auVar18._0_4_;
          uVar17 = auVar18._4_4_;
          if (DAT_0241d648 < auVar18._0_8_) {
            uVar16 = SUB84(DAT_0241d648,0);
            uVar17 = (undefined4)((ulonglong)DAT_0241d648 >> 0x20);
          }
        }
        (&DAT_028b4830)[lVar12] = (char)(int)(double)CONCAT44(uVar17,uVar16);
        lVar12 = lVar12 + 1;
      } while (lVar12 != 0x100);
      local_48 = FUN_00d45bc0();
      local_38 = FUN_00d45bc0();
      local_88 = FUN_00d45bc0();
      uVar6 = FUN_00d45bc0();
      uVar6 = FUN_01b57fb0((int)local_48,local_38,local_88,uVar6);
      plVar13 = local_70;
      if (plVar14 == local_70) {
        uVar2 = (uint3)((uint)local_78 >> 8);
        bVar10 = (byte)local_78 & plVar14 != (longlong *)0x0;
        uVar11 = (ulonglong)CONCAT31(uVar2,bVar10);
        if (bVar10 == 1) {
          uVar11 = CONCAT71((uint7)uVar2,1);
          local_40 = CONCAT44(local_40._4_4_,(int)uVar11);
          if (local_68 == '\0') {
            FUN_00d50b00();
          }
        }
        else if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_68 == '\0') {
          if (local_70 != (longlong *)0x0) {
            uVar6 = FUN_00d50b00();
          }
          uVar9 = (undefined7)((ulonglong)uVar6 >> 8);
          bVar10 = (byte)local_74 & plVar14 != (longlong *)0x0;
          uVar11 = (ulonglong)CONCAT31((int3)((uint)local_74 >> 8),bVar10);
          if (bVar10 == 1) {
            uVar6 = FUN_00d50b20();
            local_40 = CONCAT44(local_40._4_4_,(int)CONCAT71((int7)((ulonglong)uVar6 >> 8),1));
            plVar14 = plVar13;
            goto LAB_01b574be;
          }
        }
        else {
          uVar9 = (undefined7)((ulonglong)uVar6 >> 8);
          bVar10 = (byte)local_74 & plVar14 != (longlong *)0x0;
          uVar11 = (ulonglong)CONCAT31((int3)((uint)local_74 >> 8),bVar10);
          if (bVar10 == 1) {
            FUN_00d50b20();
            uVar9 = extraout_var;
          }
        }
        local_40 = CONCAT44(local_40._4_4_,(int)CONCAT71(uVar9,1));
        plVar14 = plVar13;
      }
LAB_01b574be:
      lVar12 = 0;
      do {
        pvVar7 = _pthread_getspecific((pthread_key_t)uVar11);
        plVar13 = plVar14;
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar13 = (longlong *)plVar14[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        dVar1 = (double)(**(code **)(*plVar13 + 0x380))(SUB84((double)(int)lVar12 / DAT_0241d648,0))
        ;
        auVar19._8_8_ =
             CONCAT44(extraout_XMM0_Dd_00,extraout_XMM0_Dc_00) & _UNK_023945b8 | _UNK_023945c8;
        auVar19._0_8_ =
             (double)((ulonglong)(dVar1 * DAT_0241d648) & _DAT_023945b0 | _DAT_023945c0) +
             dVar1 * DAT_0241d648;
        auVar18 = roundsd(auVar19,auVar19,0xb);
        uVar16 = 0;
        uVar17 = 0;
        if (0.0 <= auVar18._0_8_) {
          uVar16 = auVar18._0_4_;
          uVar17 = auVar18._4_4_;
          if (DAT_0241d648 < auVar18._0_8_) {
            uVar16 = SUB84(DAT_0241d648,0);
            uVar17 = (undefined4)((ulonglong)DAT_0241d648 >> 0x20);
          }
        }
        (&DAT_028b4930)[lVar12] = (char)(int)(double)CONCAT44(uVar17,uVar16);
        lVar12 = lVar12 + 1;
      } while (lVar12 != 0x100);
      local_48 = FUN_00d45bc0();
      lVar12 = local_40;
      local_38 = FUN_00d45bc0();
      local_88 = FUN_00d45bc0();
      uVar6 = FUN_00d45bc0();
      FUN_01b57fb0((int)local_48,local_38,local_88,uVar6);
      plVar13 = local_70;
      cVar4 = (char)lVar12;
      if (plVar14 == local_70) {
        plVar13 = plVar14;
        if ((cVar4 == '\0') && (plVar14 != (longlong *)0x0)) {
          local_48 = CONCAT71(local_48._1_7_,1);
          if (local_68 == '\0') {
            FUN_00d50b00();
          }
        }
        else if ((local_68 == '\0') || (local_70 == (longlong *)0x0)) {
          local_48 = CONCAT71(local_48._1_7_,cVar4);
        }
        else {
          FUN_00d50b20();
          local_48 = CONCAT71(local_48._1_7_,cVar4);
        }
      }
      else if (local_68 == '\0') {
        if (local_70 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        local_48 = CONCAT71(local_48._1_7_,1);
        if ((cVar4 != '\0') && (plVar14 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_48 = CONCAT71(local_48._1_7_,1);
        if ((cVar4 != '\0') && (plVar14 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      lVar12 = 0;
      do {
        pvVar7 = _pthread_getspecific((pthread_key_t)uVar11);
        plVar14 = plVar13;
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar14 = (longlong *)plVar13[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        dVar1 = (double)(**(code **)(*plVar14 + 0x380))(SUB84((double)(int)lVar12 / DAT_0241d648,0))
        ;
        auVar20._8_8_ =
             CONCAT44(extraout_XMM0_Dd_01,extraout_XMM0_Dc_01) & _UNK_023945b8 | _UNK_023945c8;
        auVar20._0_8_ =
             (double)((ulonglong)(dVar1 * DAT_0241d648) & _DAT_023945b0 | _DAT_023945c0) +
             dVar1 * DAT_0241d648;
        auVar18 = roundsd(auVar20,auVar20,0xb);
        uVar16 = 0;
        uVar17 = 0;
        if (0.0 <= auVar18._0_8_) {
          uVar16 = auVar18._0_4_;
          uVar17 = auVar18._4_4_;
          if (DAT_0241d648 < auVar18._0_8_) {
            uVar16 = SUB84(DAT_0241d648,0);
            uVar17 = (undefined4)((ulonglong)DAT_0241d648 >> 0x20);
          }
        }
        (&DAT_028b4a30)[lVar12] = (char)(int)(double)CONCAT44(uVar17,uVar16);
        lVar12 = lVar12 + 1;
      } while (lVar12 != 0x100);
      FUN_01cc58b0();
      uVar16 = FUN_00d6f370();
      local_c8 = DAT_027e48a8;
      local_d8 = *unaff_RSI;
      local_d0 = '\0';
      if (DAT_027e48a8 != 0) {
        uVar16 = FUN_00d50b00();
      }
      local_c0 = '\x01';
      FUN_00d6f570(uVar16,&local_c8);
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      bVar3 = false;
      if (((char)local_48 != '\0') && (bVar3 = false, plVar13 != (longlong *)0x0)) {
        FUN_00d50b20();
        bVar3 = false;
      }
      goto LAB_01b57808;
    }
  }
  FUN_01cc58b0();
  local_98 = uVar6;
  uVar16 = FUN_00d6f370();
  local_a8 = DAT_027e48a8;
  local_b8 = 0;
  local_b0 = '\0';
  if (DAT_027e48a8 != 0) {
    uVar16 = FUN_00d50b00();
  }
  local_a0 = '\x01';
  FUN_00d6f570(uVar16,&local_a8);
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  bVar3 = true;
LAB_01b57808:
  FUN_01f27fe0();
  (**(code **)(*local_f8 + 0x4f8))();
  plVar14 = local_70;
  if (local_68 == '\0') {
    if (((local_70 != (longlong *)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
       (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68 = '\0';
  }
  if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar14 != (longlong *)0x0) {
    local_68 = '\0';
    local_70 = (longlong *)0x0;
    local_60 = plVar14;
    local_54 = 0;
    for (lVar12 = 0; local_58 = (int)lVar12, local_58 < *(int *)((longlong)plVar14 + 0xc);
        lVar12 = lVar12 + 1) {
      local_70 = *(longlong **)(plVar14[2] + lVar12 * 8);
      (**(code **)(*local_70 + 0x620))();
    }
    FUN_000130b0();
    FUN_00d50b20();
  }
  if ((char)local_98 != '\0' && !bVar3) {
    FUN_00d50b20();
  }
  lVar12 = local_90;
  if (local_80 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (lVar12 != 0) {
    FUN_00d50b20();
  }
  return;
}


