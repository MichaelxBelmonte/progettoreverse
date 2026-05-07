// Function: FUN_01b88cd0
// Address: 01b88cd0
// Size: 8187 bytes
// Class: MUSpectrumShaper


/* WARNING: Removing unreachable block (ram,0x01b88d3c) */
/* WARNING: Removing unreachable block (ram,0x01b88d30) */
/* WARNING: Removing unreachable block (ram,0x01b89270) */
/* WARNING: Removing unreachable block (ram,0x01b89280) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b88cd0(pthread_key_t param_1,undefined8 param_2)

{
  float fVar1;
  longlong lVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  longlong lVar10;
  char cVar11;
  int iVar12;
  void *pvVar13;
  ulonglong uVar14;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float local_b8;
  float fStack_b4;
  float local_98;
  float fStack_94;
  float local_88;
  float fStack_84;
  longlong local_58;
  char local_50;
  float local_40;
  
  iVar12 = FUN_01d3a5a0();
  if ((iVar12 != 5) &&
     ((iVar12 = FUN_01d3a5a0(), iVar12 != 1 || (iVar12 = FUN_01d3b630(), iVar12 != 1)))) {
    FUN_01e459c0();
    return;
  }
  *(undefined4 *)(unaff_RDI + 0x30) = 0;
  FUN_01e4ac90();
  if (unaff_RDI[0x29] == 0) {
    return;
  }
  pvVar13 = _pthread_getspecific(param_1);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar11 = FUN_0188f1d0();
  if (cVar11 != '\0') {
    return;
  }
  pvVar13 = _pthread_getspecific(param_1);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0188f1e0();
  pvVar13 = _pthread_getspecific(param_1);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar11 = FUN_017f2980();
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (cVar11 != '\0') {
    return;
  }
  FUN_01e3f820();
  FUN_01d3abf0();
  uVar23 = FUN_01e466c0();
  local_98 = (float)uVar23;
  fStack_94 = (float)((ulonglong)uVar23 >> 0x20);
  auVar25._0_8_ = _powf();
  auVar25._8_8_ = extraout_XMM0_Qb;
  fStack_84 = (float)((ulonglong)param_2 >> 0x20);
  auVar24._4_12_ = auVar25._4_12_;
  auVar24._0_4_ = (float)auVar25._0_8_ + fStack_84 * fStack_84;
  fVar15 = (float)_powf(auVar24._0_8_);
  fVar17 = DAT_02390124;
  if (DAT_02390124 <= fVar15 / DAT_02420c90) {
    fVar17 = fVar15 / DAT_02420c90;
  }
  fVar15 = DAT_0241da20;
  if (fVar17 <= DAT_0241da20) {
    fVar15 = fVar17;
  }
  auVar25 = roundss(ZEXT816(0),
                    ZEXT416((uint)((float)((uint)(DAT_0241c3ec * fVar15) & _DAT_023945e0 |
                                          DAT_02394dc8) + DAT_0241c3ec * fVar15)),0xb);
  fVar21 = auVar25._0_4_;
  fVar16 = fVar21 + DAT_02390124;
  local_88 = (float)param_2;
  uVar23 = FUN_00d05530();
  local_88 = local_88 - fVar21;
  fVar16 = fVar16 + DAT_023b1608;
  fVar17 = local_88 / *(float *)((longlong)unaff_RDI + 0x184);
  pvVar13 = _pthread_getspecific(param_1);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar16 = fVar16 + _DAT_02411474;
  fVar18 = (float)FUN_0188ef40();
  pvVar13 = _pthread_getspecific(param_1);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar19 = DAT_023945a4 + fVar16;
  fVar20 = (float)FUN_0188f0f0();
  pvVar13 = _pthread_getspecific(param_1);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar19 = fVar19 + DAT_02390124;
  FUN_0188eed0();
  pvVar13 = _pthread_getspecific(param_1);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_b8 = (float)uVar23;
  fVar21 = fVar21 + local_b8;
  FUN_0188efb0();
  fVar1 = *(float *)((longlong)unaff_RDI + 0x184);
  cVar11 = FUN_00d05410();
  fStack_b4 = (float)((ulonglong)uVar23 >> 0x20);
  if (cVar11 == '\0') {
    cVar11 = FUN_00d05410();
    if (cVar11 != '\0') {
      *(undefined1 *)((longlong)unaff_RDI + 0x182) = 1;
      FUN_01b880f0();
      if ((local_50 == '\0') && (local_58 != 0)) {
        FUN_00d50b00();
      }
      FUN_01e4ac90();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      pvVar13 = _pthread_getspecific(param_1);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar15 = (float)FUN_0188f0f0();
      pvVar13 = _pthread_getspecific(param_1);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0188efb0();
      bVar5 = false;
      bVar6 = true;
      goto LAB_01b893bd;
    }
    cVar11 = FUN_00d05410();
    if (cVar11 != '\0') {
      *(undefined1 *)((longlong)unaff_RDI + 0x183) = 1;
      FUN_01b88350();
      if ((local_50 == '\0') && (local_58 != 0)) {
        FUN_00d50b00();
      }
      FUN_01e4ac90();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
LAB_01b8a686:
      pvVar13 = _pthread_getspecific(param_1);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar15 = (float)FUN_0188f1c0();
      pvVar13 = _pthread_getspecific(param_1);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0188f020();
      bVar5 = false;
      bVar6 = false;
      bVar7 = false;
      bVar8 = true;
      goto LAB_01b893cb;
    }
    if (local_98 < fVar21) {
LAB_01b8a921:
      *(undefined1 *)(unaff_RDI + 0x30) = 1;
      FUN_01b87c30();
      if ((local_50 == '\0') && (local_58 != 0)) {
        FUN_00d50b00();
      }
      FUN_01e4ac90();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      pvVar13 = _pthread_getspecific(param_1);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0188eed0();
      fVar15 = 0.0;
      bVar5 = false;
      bVar6 = false;
      bVar7 = true;
      goto LAB_01b893c4;
    }
    auVar26._0_12_ = ZEXT812(0);
    auVar26._12_4_ = 0;
    auVar25 = roundss(auVar26,ZEXT416((uint)((float)(DAT_02394dc8 |
                                                    _DAT_023945e0 & (uint)(fVar15 * DAT_023908ec)) +
                                            fVar15 * DAT_023908ec)),0xb);
    fVar22 = auVar25._0_4_ * DAT_0239011c;
    fVar18 = fVar18 * fVar17 + fVar21;
    fVar15 = fVar18 - fVar22;
    if (local_98 < fVar15) goto LAB_01b8a921;
    if ((fStack_b4 + fVar16 + (fStack_84 - fVar19) + DAT_0240cdd8 < fStack_94) &&
       (fVar21 < local_98)) {
      FUN_01b88a70();
      if ((local_50 == '\0') && (local_58 != 0)) {
        FUN_00d50b00();
      }
      FUN_01e4ac90();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      bVar4 = true;
      bVar3 = 1;
LAB_01b8a881:
      bVar9 = false;
      bVar8 = false;
      bVar7 = false;
      bVar6 = false;
      bVar5 = false;
      fVar15 = 0.0;
      goto LAB_01b893d9;
    }
    fVar16 = fVar20 * fVar17 + fVar21;
    fVar22 = fVar22 + fVar16;
    if (fVar22 < local_98) {
      *(undefined1 *)((longlong)unaff_RDI + 0x183) = 1;
      FUN_01b88350();
      if ((local_50 == '\0') && (local_58 != 0)) {
        FUN_00d50b00();
      }
      FUN_01e4ac90();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      goto LAB_01b8a686;
    }
    bVar4 = false;
    if (local_98 < fVar15) {
      bVar3 = 0;
      goto LAB_01b8a881;
    }
    bVar5 = false;
    bVar6 = false;
    bVar7 = false;
    bVar8 = false;
    bVar9 = false;
    bVar3 = 0;
    fVar15 = 0.0;
    if (fVar22 < local_98) goto LAB_01b893d9;
    *(undefined2 *)((longlong)unaff_RDI + 0x181) = 0x101;
    if ((fVar18 != fVar16) || (NAN(fVar18) || NAN(fVar16))) {
      FUN_01b885b0();
      if ((local_50 == '\0') && (local_58 != 0)) {
        FUN_00d50b00();
      }
      FUN_01e4ac90();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01b88810();
      if ((local_50 == '\0') && (local_58 != 0)) {
        FUN_00d50b00();
      }
      FUN_01e4ac90();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
    }
    pvVar13 = _pthread_getspecific(param_1);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar15 = (float)FUN_0188ef40();
    pvVar13 = _pthread_getspecific(param_1);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0188efb0();
    bVar5 = false;
    bVar6 = false;
    bVar7 = false;
    bVar8 = false;
    bVar9 = true;
  }
  else {
    *(undefined1 *)((longlong)unaff_RDI + 0x181) = 1;
    FUN_01b87e90();
    if ((local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
    }
    FUN_01e4ac90();
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    pvVar13 = _pthread_getspecific(param_1);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar15 = (float)FUN_0188ef40();
    pvVar13 = _pthread_getspecific(param_1);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0188efb0();
    bVar6 = false;
    bVar5 = true;
LAB_01b893bd:
    bVar7 = false;
LAB_01b893c4:
    bVar8 = false;
LAB_01b893cb:
    bVar9 = false;
  }
  bVar4 = true;
  bVar3 = 0;
LAB_01b893d9:
  iVar12 = FUN_01d3a5a0();
  if ((iVar12 == 1) && (iVar12 = FUN_01d3b630(), iVar12 == 1)) {
    cVar11 = FUN_01e420b0();
    if (cVar11 == '\0') {
      FUN_01e42250();
    }
    uVar14 = FUN_01d3b590();
    if ((uVar14 & 2) == 0) {
      do {
        (**(code **)(*unaff_RDI + 0x620))();
        do {
          do {
            (**(code **)(*unaff_RDI + 0x658))();
            lVar2 = *unaff_RSI;
            if (lVar2 == local_58) {
              if (((char)unaff_RSI[1] == '\0') && (local_58 != 0)) {
                if (local_50 == '\0') {
                  FUN_00d50b00();
                  goto LAB_01b894f0;
                }
LAB_01b894ae:
                *(undefined1 *)(unaff_RSI + 1) = 1;
                local_50 = '\0';
              }
              lVar2 = *unaff_RSI;
            }
            else {
              lVar10 = unaff_RSI[1];
              if (local_50 != '\0') {
                *unaff_RSI = local_58;
                if (((char)lVar10 != '\0') && (lVar2 != 0)) {
                  FUN_00d50b20();
                }
                goto LAB_01b894ae;
              }
              if (local_58 != 0) {
                FUN_00d50b00();
              }
              *unaff_RSI = local_58;
              if (((char)lVar10 != '\0') && (lVar2 != 0)) {
                FUN_00d50b20();
              }
LAB_01b894f0:
              *(undefined1 *)(unaff_RSI + 1) = 1;
              lVar2 = *unaff_RSI;
            }
            if (lVar2 == 0) {
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_01b8a8f7;
            }
            iVar12 = FUN_01d3a5a0();
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
            if (iVar12 == 6) goto LAB_01b8a8f7;
            iVar12 = FUN_01d3a5a0();
          } while (iVar12 != 5);
          FUN_01d3abf0();
          fVar16 = (float)FUN_01e466c0();
        } while (!bVar4);
        fVar19 = *(float *)((longlong)unaff_RDI + 0x184) * DAT_02394234;
        fVar20 = (fVar16 - local_98) / fVar17 + fVar15;
        fVar18 = 0.0;
        if (0.0 <= fVar20) {
          fVar18 = fVar20;
        }
        local_40 = fVar19;
        if (fVar18 <= fVar19) {
          local_40 = fVar18;
        }
        if (bVar5) {
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0188eee0();
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0188ef50();
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar18 = (float)FUN_0188ef40();
          if (fVar19 <= fVar18) {
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0188f030();
          }
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar18 = (float)FUN_0188f0f0();
          if (fVar18 < local_40) {
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0188f030();
          }
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar18 = (float)FUN_0188ef40();
          if (fVar18 < DAT_0239425c) {
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0188ee70();
          }
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar18 = (float)FUN_0188f1c0();
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar20 = (float)FUN_0188f0f0();
          if (fVar18 < fVar20) {
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0188f0f0();
            FUN_0188f100();
          }
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar18 = (float)FUN_0188ef40();
          if (fVar19 <= fVar18) {
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0188efc0();
          }
        }
        if (bVar6) {
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0188f030();
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0188ef50();
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar18 = (float)FUN_0188ef40();
          if (local_40 < fVar18) {
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0188eee0();
          }
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar18 = (float)FUN_0188ef40();
          if (fVar18 < DAT_0239425c) {
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0188ee70();
          }
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar18 = (float)FUN_0188f1c0();
          if (fVar18 < local_40) {
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0188f100();
          }
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar18 = (float)FUN_0188f0f0();
          if (fVar19 <= fVar18) {
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0188efc0();
          }
        }
        if (bVar7) {
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0188ee70();
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar18 = (float)FUN_0188ef40();
          if (fVar18 < DAT_0239425c) {
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0188ef50();
          }
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar18 = (float)FUN_0188f1c0();
          if (fVar18 < DAT_0239425c) {
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0188efc0();
          }
        }
        if (bVar8) {
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0188f100();
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0188efc0();
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar18 = (float)FUN_0188f0f0();
          if (local_40 < fVar18) {
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0188f030();
          }
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar18 = (float)FUN_0188ef40();
          if (local_40 < fVar18) {
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0188eee0();
          }
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar18 = (float)FUN_0188ef40();
          if (fVar18 < DAT_0239425c) {
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0188efb0();
            FUN_0188ee70();
          }
          if (local_40 < DAT_0239425c) {
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0188ee70();
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0188ef50();
          }
        }
        if (bVar9) {
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar18 = (float)FUN_0188f0f0();
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar20 = (float)FUN_0188ef40();
          local_40 = local_40 + (fVar18 - fVar20);
          if (fVar19 <= local_40) {
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0188efc0();
            local_40 = fVar19;
          }
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0188eee0();
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0188f030();
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0188ef50();
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar18 = (float)FUN_0188ef40();
          if (fVar18 < DAT_0239425c) {
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0188ee70();
          }
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar18 = (float)FUN_0188f1c0();
          if (fVar18 < local_40) {
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0188f100();
          }
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar18 = (float)FUN_0188f1c0();
          if (fVar18 < DAT_0239425c) {
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0188ee70();
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0188efc0();
          }
        }
        if ((bool)(DAT_0239424c < fVar16 - fVar21 & bVar3)) {
          fVar18 = (((local_98 - fVar21) / local_88) / ((fVar16 - fVar21) / local_88)) * fVar1;
          fVar16 = DAT_024112a8;
          if (DAT_024112a8 <= fVar18) {
            fVar16 = fVar18;
          }
          fVar18 = DAT_0241deb0;
          if (fVar16 <= DAT_0241deb0) {
            fVar18 = fVar16;
          }
          *(float *)((longlong)unaff_RDI + 0x184) = fVar18;
        }
      } while( true );
    }
    *(undefined4 *)((longlong)unaff_RDI + 0x184) = 0x3f19999a;
    pvVar13 = _pthread_getspecific(param_1);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0188f2b0();
  }
  else {
LAB_01b8a8f7:
    *(undefined4 *)(unaff_RDI + 0x30) = 0;
  }
  (**(code **)(*unaff_RDI + 0x620))();
  return;
}


