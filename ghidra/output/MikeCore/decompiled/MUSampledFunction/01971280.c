// Function: FUN_01971280
// Address: 01971280
// Size: 2029 bytes
// Class: MUSampledFunction


/* WARNING: Removing unreachable block (ram,0x019717c5) */
/* WARNING: Removing unreachable block (ram,0x019717d1) */
/* WARNING: Removing unreachable block (ram,0x01971a41) */
/* WARNING: Removing unreachable block (ram,0x01971a4d) */

void FUN_01971280(pthread_key_t param_1,undefined8 param_2)

{
  code *pcVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  longlong *plVar8;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar9;
  float extraout_XMM0_Db;
  double dVar10;
  double dVar11;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float local_58;
  longlong *local_40;
  char local_38;
  undefined8 extraout_XMM0_Qb_00;
  
  fVar17 = (float)((ulonglong)param_2 >> 0x20);
  fVar16 = (float)param_2;
  FUN_01976670();
  FUN_01d48370();
  FUN_01d48b40();
  FUN_01cfcdc0();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d488d0();
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))();
  FUN_01cfcdc0();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d488d0();
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar9 = (longlong *)*unaff_RSI;
  FUN_01d39800();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*plVar9 + 0x3a8))();
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x390))();
  FUN_01d48b40();
  FUN_01cfcdc0();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d488d0();
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar5 = *(longlong *)(unaff_RDI + 0x178);
  if (lVar5 != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      lVar5 = *(longlong *)(unaff_RDI + 0x178);
      lVar3 = FUN_00e8b990();
      if (lVar3 != 0) {
        lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
      }
    }
    if (*(longlong *)(lVar5 + 0x168) != 0) {
      FUN_01989f80();
      dVar10 = (double)(**(code **)(*local_40 + 0x930))();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      puVar7 = &DAT_02680400;
      *puVar4 = &DAT_02680400;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      *(undefined8 *)((longlong)puVar4 + 0x39) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x41) = 0;
      pcVar1 = DAT_02680418;
      (*DAT_02680418)();
      for (local_58 = 0.0; FUN_01e3f820(), local_58 < fVar16; local_58 = local_58 + DAT_02390124) {
        lVar5 = *(longlong *)(unaff_RDI + 0x178);
        pvVar2 = _pthread_getspecific((pthread_key_t)puVar7);
        if (pvVar2 != (void *)0x0) {
          lVar5 = *(longlong *)(unaff_RDI + 0x178);
          lVar3 = FUN_00e8b990();
          if (lVar3 != 0) {
            lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
          }
        }
        plVar9 = *(longlong **)(lVar5 + 0x168);
        pvVar2 = _pthread_getspecific((pthread_key_t)puVar7);
        if (pvVar2 != (void *)0x0) {
          plVar9 = *(longlong **)(lVar5 + 0x168);
          lVar5 = FUN_00e8b990();
          if (lVar5 != 0) {
            plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
        }
        FUN_01989f80();
        dVar11 = (double)(**(code **)(*local_40 + 0x930))(*(float *)(unaff_RDI + 0x10c) + local_58);
        auVar13._0_8_ = (double)(**(code **)(*plVar9 + 0x380))(dVar11 - dVar10);
        auVar13._8_8_ = extraout_XMM0_Qb;
        auVar12._4_12_ = auVar13._4_12_;
        auVar12._0_4_ = (float)auVar13._0_8_ * fVar17;
        auVar13 = roundss(auVar12,auVar12,9);
        fVar16 = (extraout_XMM0_Db + fVar17) - auVar13._0_4_;
        FUN_01d38ba0();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
      fVar16 = 0.0;
      FUN_01cfcdc0();
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar5 = *(longlong *)(unaff_RDI + 0x178);
      pvVar2 = _pthread_getspecific((pthread_key_t)puVar7);
      if (pvVar2 != (void *)0x0) {
        lVar5 = *(longlong *)(unaff_RDI + 0x178);
        lVar3 = FUN_00e8b990();
        if (lVar3 != 0) {
          lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
        }
      }
      plVar9 = *(longlong **)(lVar5 + 0x188);
      if (plVar9 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      puVar6 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &DAT_02680400;
      *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      puVar6[6] = 0;
      puVar6[7] = 0;
      *(undefined8 *)((longlong)puVar6 + 0x39) = 0;
      *(undefined8 *)((longlong)puVar6 + 0x41) = 0;
      (*pcVar1)();
      if (puVar4 == puVar6) {
        FUN_00d50b20();
        puVar6 = puVar4;
      }
      else if (puVar4 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      for (local_58 = 0.0; FUN_01e3f820(), local_58 < fVar16; local_58 = local_58 + DAT_02390124) {
        pvVar2 = _pthread_getspecific((pthread_key_t)puVar7);
        plVar8 = plVar9;
        if ((pvVar2 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          plVar8 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
        }
        FUN_01989f80();
        dVar11 = (double)(**(code **)(*local_40 + 0x930))(*(float *)(unaff_RDI + 0x10c) + local_58);
        auVar14._0_8_ = (double)(**(code **)(*plVar8 + 0x380))(dVar11 - dVar10);
        auVar14._8_8_ = extraout_XMM0_Qb_00;
        auVar15._4_12_ = auVar14._4_12_;
        auVar15._0_4_ = (float)auVar14._0_8_ * fVar17 * DAT_0239011c;
        auVar13 = roundss(auVar15,auVar15,9);
        fVar16 = (extraout_XMM0_Db + fVar17) - auVar13._0_4_;
        FUN_01d38ba0();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
      FUN_01d48390();
      if (plVar9 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (puVar6 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}


