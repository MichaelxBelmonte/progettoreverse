// Function: FUN_0133b360
// Address: 0133b360
// Size: 1971 bytes
// Class: MUAudioSourceDescription


/* WARNING: Removing unreachable block (ram,0x0133b699) */
/* WARNING: Removing unreachable block (ram,0x0133b6a2) */
/* WARNING: Removing unreachable block (ram,0x0133b560) */
/* WARNING: Removing unreachable block (ram,0x0133b569) */
/* WARNING: Removing unreachable block (ram,0x0133b671) */
/* WARNING: Removing unreachable block (ram,0x0133b67a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0133b360(pthread_key_t param_1)

{
  code *pcVar1;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  pthread_key_t pVar10;
  undefined *puVar11;
  longlong *plVar12;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  longlong local_40;
  char local_38;
  
  if ((*unaff_RSI != 0) || (MACH_HEADER.filetype == 0)) {
    lVar5 = **(longlong **)(*unaff_RSI + 0x10);
    pvVar3 = _pthread_getspecific(param_1);
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
    plVar12 = *(longlong **)(lVar5 + 0x38);
    pvVar3 = _pthread_getspecific(param_1);
    if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      plVar12 = (longlong *)plVar12[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
    dVar14 = (double)(**(code **)(*plVar12 + 0x370))();
    plVar12 = *(longlong **)(unaff_RDI + 0x38);
    pvVar3 = _pthread_getspecific(param_1);
    if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      plVar12 = (longlong *)plVar12[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
    dVar15 = (double)(**(code **)(*plVar12 + 0x370))();
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar11 = &DAT_02572358;
    *puVar6 = &DAT_02572358;
    uVar16 = (*DAT_02572370)();
    lVar5 = *unaff_RSI;
    if (0 < *(int *)(lVar5 + 0xc)) {
      lVar4 = 0;
      do {
        lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + lVar4 * 8);
        pvVar3 = _pthread_getspecific((pthread_key_t)puVar11);
        if ((pvVar3 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
        }
        lVar5 = *(longlong *)(lVar5 + 0x40);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        if (0 < *(int *)(lVar5 + 0xc)) {
          lVar7 = 0;
          do {
            pvVar3 = _pthread_getspecific((pthread_key_t)puVar11);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013de560();
            if ((local_38 == '\0') && (local_40 != 0)) {
              FUN_00d50b00();
            }
            pvVar3 = _pthread_getspecific((pthread_key_t)puVar11);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar2 = FUN_014bc070();
            if (cVar2 == '\0') {
              pvVar3 = _pthread_getspecific((pthread_key_t)puVar11);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_013dfdd0();
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              if (local_40 != 0) {
                pvVar3 = _pthread_getspecific((pthread_key_t)puVar11);
                if (pvVar3 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_013e5500();
                if ((local_38 == '\0') && (local_40 != 0)) {
                  FUN_00d50b00();
                }
                local_38 = '\0';
                FUN_00d21140();
                if (local_40 != 0) {
                  FUN_00d50b20();
                }
              }
            }
            if (local_40 != 0) {
              FUN_00d50b20();
            }
            lVar7 = lVar7 + 1;
          } while (lVar7 < *(int *)(lVar5 + 0xc));
        }
        uVar16 = FUN_00d50b20();
        lVar4 = lVar4 + 1;
        lVar5 = *unaff_RSI;
        puVar11 = (undefined *)(longlong)*(int *)(lVar5 + 0xc);
      } while (lVar4 < (longlong)puVar11);
    }
    FUN_00d242c0(uVar16,0);
    pcVar1 = DAT_025e6278;
    if (0 < *(int *)((longlong)puVar6 + 0xc)) {
      dVar15 = dVar15 / dVar14;
      lVar5 = 0;
      do {
        plVar12 = *(longlong **)(puVar6[2] + lVar5 * 8);
        lVar4 = lVar5;
        if (plVar12 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        pvVar3 = _pthread_getspecific((pthread_key_t)lVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar14 = (double)FUN_014bacf0();
        lVar4 = *(longlong *)(unaff_RDI + 0xd0);
        if (0 < *(int *)(lVar4 + 0xc)) {
          lVar7 = 0;
          do {
            lVar8 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + lVar7 * 8);
            if (lVar8 != 0) {
              FUN_00d50b00();
            }
            pvVar3 = _pthread_getspecific((pthread_key_t)lVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar17 = (double)FUN_014bacf0();
            if (lVar8 != 0) {
              FUN_00d50b20();
            }
            if ((double)((ulonglong)(dVar17 - dVar14) & _DAT_023908f0) < DAT_0240d3c0)
            goto LAB_0133bb35;
            lVar7 = lVar7 + 1;
            lVar4 = *(longlong *)(unaff_RDI + 0xd0);
          } while (lVar7 < *(int *)(lVar4 + 0xc));
        }
        pVar10 = (pthread_key_t)lVar4;
        pvVar3 = _pthread_getspecific(pVar10);
        plVar13 = plVar12;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          plVar13 = (longlong *)plVar12[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
        lVar4 = (**(code **)(*plVar13 + 0x3a0))();
        pvVar3 = _pthread_getspecific(pVar10);
        plVar13 = plVar12;
        if ((pvVar3 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          plVar13 = (longlong *)plVar12[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
        }
        lVar7 = (**(code **)(*plVar13 + 0x390))();
        pvVar3 = _pthread_getspecific(pVar10);
        plVar13 = plVar12;
        if ((pvVar3 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar13 = (longlong *)plVar12[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        lVar8 = (**(code **)(*plVar13 + 0x388))();
        puVar9 = (undefined8 *)FUN_00e8fc40();
        FUN_007ef480();
        pVar10 = 0x25e6250;
        *puVar9 = &DAT_025e6260;
        puVar9[7] = &DAT_025e66c0;
        puVar9[0x1c] = 0;
        puVar9[0x19] = 0;
        puVar9[0x1a] = 0;
        *(undefined4 *)(puVar9 + 0x1b) = 0;
        (*pcVar1)();
        pvVar3 = _pthread_getspecific(pVar10);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        auVar18._0_8_ =
             (double)((ulonglong)((double)lVar4 * dVar15) & _DAT_023945b0 | _DAT_023945c0) +
             (double)lVar4 * dVar15;
        auVar18._8_8_ = _UNK_023945c8;
        roundsd(ZEXT816(0),auVar18,0xb);
        auVar19._0_8_ =
             (double)((ulonglong)((double)lVar7 * dVar15) & _DAT_023945b0 | _DAT_023945c0) +
             (double)lVar7 * dVar15;
        auVar19._8_8_ = _UNK_023945c8;
        auVar18 = roundsd(ZEXT816(0),auVar19,0xb);
        auVar20._0_8_ =
             (double)((ulonglong)((double)lVar8 * dVar15) & _DAT_023945b0 | _DAT_023945c0) +
             (double)lVar8 * dVar15;
        auVar20._8_8_ = _UNK_023945c8;
        auVar19 = roundsd(ZEXT816(0),auVar20,0xb);
        lVar4 = (longlong)auVar19._0_8_;
        FUN_014bad20(lVar4,(longlong)auVar18._0_8_);
        pVar10 = (pthread_key_t)lVar4;
        pvVar3 = _pthread_getspecific(pVar10);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar3 = _pthread_getspecific(pVar10);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bae60();
        FUN_014bae10();
        FUN_01329030();
        FUN_00d50b20();
LAB_0133bb35:
        if (plVar12 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)((longlong)puVar6 + 0xc));
    }
    FUN_00d50b20();
  }
  return;
}


