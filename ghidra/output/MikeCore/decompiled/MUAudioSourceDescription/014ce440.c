// Function: FUN_014ce440
// Address: 014ce440
// Size: 1975 bytes
// Class: MUAudioSourceDescription


/* WARNING: Removing unreachable block (ram,0x014ceb57) */
/* WARNING: Removing unreachable block (ram,0x014ceb63) */
/* WARNING: Removing unreachable block (ram,0x014ce5a3) */
/* WARNING: Removing unreachable block (ram,0x014ce5ac) */
/* WARNING: Removing unreachable block (ram,0x014ce6d6) */
/* WARNING: Removing unreachable block (ram,0x014ce6df) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014ce440(pthread_key_t param_1)

{
  double dVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  void *pvVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  pthread_key_t pVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  int iVar18;
  float fVar19;
  double dVar20;
  undefined8 uVar21;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar22 [16];
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  longlong *local_50;
  char local_48;
  longlong *local_40;
  longlong *local_38;
  undefined8 extraout_XMM0_Qb_00;
  
  (**(code **)(*unaff_RDI + 0x378))();
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_50 == (longlong *)0x0) goto LAB_014ce52f;
  (**(code **)(*unaff_RDI + 0x378))();
  plVar17 = (longlong *)*unaff_RSI;
  if (plVar17 == local_50) {
    if (((char)unaff_RSI[1] != '\0') || (local_50 == (longlong *)0x0)) goto LAB_014ce51b;
    if (local_48 == '\0') {
      FUN_00d50b00();
      goto LAB_014ce516;
    }
  }
  else {
    lVar12 = unaff_RSI[1];
    if (local_48 == '\0') {
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RSI = (longlong)local_50;
      if (((char)lVar12 != '\0') && (plVar17 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_014ce516:
      *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_014ce51b:
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_014ce52f;
    }
    *unaff_RSI = (longlong)local_50;
    if (((char)lVar12 != '\0') && (plVar17 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_014ce52f:
  if (*(int *)(unaff_RDI[0x21] + 0xc) != 0) {
    pvVar10 = _pthread_getspecific(param_1);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d790();
    if ((local_48 == '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    dVar1 = (double)local_50[7];
    uVar2 = *(uint *)(local_50 + 6);
    uVar11 = (ulonglong)(int)uVar2;
    pvVar10 = _pthread_getspecific(param_1);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01320d00();
    pvVar10 = _pthread_getspecific(param_1);
    plVar17 = local_50;
    if ((pvVar10 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
      plVar17 = (longlong *)local_50[(ulonglong)(*(uint *)(lVar12 + 0x154) & 1) + 4];
    }
    dVar20 = (double)(**(code **)(*plVar17 + 0x370))();
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar13 = (**(code **)(*unaff_RDI + 0x388))();
    uVar16 = (uVar13 | uVar11) >> 0x20;
    if (uVar16 == 0) {
      uVar11 = (uVar13 & 0xffffffff) % (ulonglong)uVar2;
      iVar9 = (int)((uVar13 & 0xffffffff) / (ulonglong)uVar2);
    }
    else {
      iVar9 = (int)((longlong)uVar13 / (longlong)uVar11);
      uVar11 = (longlong)uVar13 % (longlong)uVar11;
    }
    lVar12 = (**(code **)(*unaff_RDI + 0x380))(uVar16,uVar11);
    FUN_00c8e690();
    if ((local_48 == '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    iVar18 = 0;
    if (iVar9 < -1) {
      bVar6 = false;
      local_40 = (longlong *)0x0;
      bVar7 = false;
      local_38 = (longlong *)0x0;
    }
    else {
      dVar23 = DAT_0238fee8 / (double)(int)uVar2;
      uVar11 = 1;
      if (1 < (int)(iVar9 + 2U)) {
        uVar11 = (ulonglong)(iVar9 + 2U);
      }
      auVar5._4_4_ = (float)dVar20;
      auVar5._0_4_ = (float)dVar20;
      uVar13 = 0;
      local_38 = (longlong *)0x0;
      bVar7 = false;
      local_40 = (longlong *)0x0;
      bVar6 = false;
      do {
        dVar20 = (double)(iVar18 + lVar12) * dVar23;
        auVar4._4_8_ = (ulonglong)dVar20 >> 0x20;
        auVar4._0_4_ = (float)dVar20;
        uVar21 = FUN_014c36d0(auVar4._0_8_,(int)dVar20);
        if (local_50 == local_38) {
          if ((bVar6) || (local_50 == (longlong *)0x0)) {
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
              uVar21 = FUN_00d50b20();
            }
          }
          else {
            bVar6 = true;
            if (local_48 == '\0') {
              uVar21 = FUN_00d50b00();
            }
          }
        }
        else if (local_48 == '\0') {
          if (local_50 != (longlong *)0x0) {
            uVar21 = FUN_00d50b00();
          }
          if ((!bVar6) || (local_38 == (longlong *)0x0)) goto LAB_014ce870;
          uVar21 = FUN_00d50b20();
          local_38 = local_50;
          bVar6 = true;
        }
        else if ((bVar6) && (local_38 != (longlong *)0x0)) {
          uVar21 = FUN_00d50b20();
          local_38 = local_50;
          bVar6 = true;
        }
        else {
LAB_014ce870:
          local_38 = local_50;
          bVar6 = true;
        }
        FUN_014c36d0(uVar21,(int)dVar20 + 1);
        if (local_50 == local_40) {
          plVar17 = local_40;
          if ((bVar7) || (local_50 == (longlong *)0x0)) {
            bVar8 = bVar7;
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            bVar8 = true;
            if (local_48 == '\0') {
              FUN_00d50b00();
            }
          }
        }
        else if (local_48 == '\0') {
          if (local_50 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          plVar17 = local_50;
          bVar8 = true;
          if (bVar7) {
            if (local_40 == (longlong *)0x0) goto LAB_014ce940;
            FUN_00d50b20();
            plVar17 = local_50;
          }
        }
        else if ((bVar7) && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
          plVar17 = local_50;
          bVar8 = true;
        }
        else {
LAB_014ce940:
          plVar17 = local_50;
          bVar8 = true;
        }
        bVar7 = bVar8;
        local_40 = plVar17;
        fVar19 = 0.0;
        if ((local_38 != (longlong *)0x0) && (fVar19 = 0.0, local_40 != (longlong *)0x0)) {
          insertps(ZEXT416(*(uint *)((longlong)local_40 + 0x14)),
                   *(undefined4 *)((longlong)local_38 + 0x14),0x10);
          uVar21 = _exp2f();
          auVar22._0_8_ = _exp2f();
          auVar22._8_8_ = extraout_XMM0_Qb_00;
          auVar24._8_8_ = extraout_XMM0_Qb;
          auVar24._0_8_ = uVar21;
          auVar24 = insertps(auVar24,auVar22,0x10);
          auVar25._0_4_ = auVar24._0_4_ * _DAT_0240e480;
          auVar25._4_4_ = auVar24._4_4_ * _UNK_0240e484;
          auVar25._8_4_ = auVar24._8_4_ * _UNK_0240e488;
          auVar25._12_4_ = auVar24._12_4_ * _UNK_0240e48c;
          auVar5._8_8_ = 0;
          auVar24 = divps(auVar5,auVar25);
          fVar19 = (auVar24._0_4_ - auVar24._4_4_) * ((float)dVar20 - (float)(int)dVar20) +
                   auVar24._4_4_;
        }
        *(float *)(local_50[2] + uVar13 * 4) = fVar19;
        uVar13 = uVar13 + 1;
        iVar18 = iVar18 + uVar2;
      } while (uVar11 != uVar13);
    }
    puVar14 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *(undefined1 *)(puVar14 + 7) = 0;
    *(undefined4 *)((longlong)puVar14 + 0x3c) = 0;
    *(undefined2 *)(puVar14 + 8) = 0;
    pVar15 = 0x25dc9e8;
    *puVar14 = &DAT_025dc9e8;
    puVar14[9] = 0;
    puVar14[10] = 0;
    (*DAT_025dca00)();
    pvVar10 = _pthread_getspecific(pVar15);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb950((double)(float)(DAT_0238fee8 / dVar1));
    pvVar10 = _pthread_getspecific(pVar15);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb890();
    if ((undefined8 *)unaff_RDI[0x11] != puVar14) {
      FUN_00d64850();
      puVar3 = (undefined8 *)unaff_RDI[0x11];
      if (puVar3 != puVar14) {
        FUN_00d50b00();
        unaff_RDI[0x11] = (longlong)puVar14;
        if (puVar3 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d64910();
    }
    FUN_00d50b20();
    if ((bVar7) && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((bVar6) && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  return;
}


