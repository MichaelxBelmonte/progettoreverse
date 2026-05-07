// Reconstructed implementation of MUDetectionPitchCenterAssignmentInspector
// From MikeCore binary — reverse-engineered pseudocode

#include "MUDetectionPitchCenterAssignmentInspector.h"

// ============================================================
// @01c16c70 — 2015 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01c17376) */
/* WARNING: Removing unreachable block (ram,0x01c1737f) */
/* WARNING: Removing unreachable block (ram,0x01c17273) */
/* WARNING: Removing unreachable block (ram,0x01c1727c) */
/* WARNING: Removing unreachable block (ram,0x01c16d69) */
/* WARNING: Removing unreachable block (ram,0x01c16d72) */
/* WARNING: Removing unreachable block (ram,0x01c16d01) */
/* WARNING: Removing unreachable block (ram,0x01c16d0a) */
/* WARNING: Removing unreachable block (ram,0x01c173e8) */
/* WARNING: Removing unreachable block (ram,0x01c173f5) */
/* WARNING: Removing unreachable block (ram,0x01c173a7) */
/* WARNING: Removing unreachable block (ram,0x01c173b3) */

bool FUN_01c16c70(double param_1)

{
  longlong lVar1;
  bool bVar2;
  code *pcVar3;
  void *pvVar4;
  longlong lVar5;
  undefined8 *puVar6;
  pthread_key_t in_ECX;
  code *pcVar7;
  longlong *plVar8;
  longlong *unaff_RSI;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  longlong *local_80;
  char local_78;
  longlong local_58;
  char local_50;
  
  lVar1 = *unaff_RSI;
  if (lVar1 != 0) {
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e7c0();
    if ((local_78 == '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013de560();
    if ((local_78 == '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014bc090();
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_80 != (longlong *)0x0) {
      pvVar4 = _pthread_getspecific(in_ECX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar13 = (double)FUN_0125a280();
      pvVar4 = _pthread_getspecific(in_ECX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar14 = FUN_012685b0(param_1 - dVar13);
      pvVar4 = _pthread_getspecific(in_ECX);
      plVar8 = local_80;
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        plVar8 = (longlong *)local_80[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar8 + 0x378))();
      pvVar4 = _pthread_getspecific(in_ECX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar13 = (double)FUN_01327990();
      if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(in_ECX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bc090();
      pvVar4 = _pthread_getspecific(in_ECX);
      plVar8 = local_80;
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        plVar8 = (longlong *)local_80[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
      dVar15 = (double)(**(code **)(*plVar8 + 0x380))(uVar14);
      fVar10 = (float)_logf((float)((dVar13 / (double)(float)dVar15) * DAT_0240de70));
      if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(in_ECX);
      plVar8 = local_80;
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        plVar8 = (longlong *)local_80[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
      fVar11 = (float)(**(code **)(*plVar8 + 0x3e0))();
      pvVar4 = _pthread_getspecific(in_ECX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014ed740();
      pvVar4 = _pthread_getspecific(in_ECX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar4 = _pthread_getspecific(in_ECX);
      plVar8 = local_80;
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        plVar8 = (longlong *)local_80[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
      fVar12 = (float)(**(code **)(*plVar8 + 0x3e0))();
      fVar11 = fVar10 * DAT_02394208 - fVar11;
      FUN_014bd3c0(fVar12 + fVar11);
      pvVar4 = _pthread_getspecific(in_ECX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dfcb0();
      pvVar4 = _pthread_getspecific(in_ECX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dd790();
      if ((local_78 == '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      pcVar3 = DAT_02572370;
      if (local_80 != (longlong *)0x0) {
        if (*(int *)((longlong)local_80 + 0xc) < 1) {
          bVar2 = false;
          puVar6 = (undefined8 *)0x0;
        }
        else {
          iVar9 = 0;
          puVar6 = (undefined8 *)0x0;
          bVar2 = false;
          pcVar7 = DAT_02572370;
          do {
            pvVar4 = _pthread_getspecific((pthread_key_t)pcVar7);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef8d0();
            if (local_50 == '\0') {
              if (local_58 != 0) {
                FUN_00d50b00();
                goto LAB_01c17290;
              }
            }
            else if (local_58 != 0) {
LAB_01c17290:
              pvVar4 = _pthread_getspecific((pthread_key_t)pcVar7);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              pvVar4 = _pthread_getspecific((pthread_key_t)pcVar7);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar10 = (float)FUN_0125a2c0();
              FUN_012595a0(fVar10 + fVar11);
              if (puVar6 == (undefined8 *)0x0) {
                puVar6 = (undefined8 *)FUN_00e8fc40();
                FUN_00d4ff40();
                *puVar6 = &DAT_02572358;
                (*pcVar3)();
                bVar2 = true;
              }
              local_50 = '\0';
              FUN_00d21140();
              FUN_012879b0();
              FUN_00d23740();
              FUN_00d50b20();
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < *(int *)((longlong)local_80 + 0xc));
        }
        FUN_0015edf0();
        FUN_00d50b20();
        if ((bVar2) && (puVar6 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    if (local_80 != (longlong *)0x0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  return lVar1 != 0;
}




// ============================================================
// @01c17760 — 1729 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01c17816) */
/* WARNING: Removing unreachable block (ram,0x01c17822) */
/* WARNING: Removing unreachable block (ram,0x01c17d16) */
/* WARNING: Removing unreachable block (ram,0x01c17d1f) */
/* WARNING: Removing unreachable block (ram,0x01c17d47) */
/* WARNING: Removing unreachable block (ram,0x01c17d53) */
/* WARNING: Removing unreachable block (ram,0x01c179b0) */
/* WARNING: Removing unreachable block (ram,0x01c179b9) */
/* WARNING: Removing unreachable block (ram,0x01c17e09) */
/* WARNING: Removing unreachable block (ram,0x01c17e19) */
/* WARNING: Removing unreachable block (ram,0x01c17937) */
/* WARNING: Removing unreachable block (ram,0x01c17940) */
/* WARNING: Removing unreachable block (ram,0x01c17dd3) */
/* WARNING: Removing unreachable block (ram,0x01c17de0) */
/* WARNING: Removing unreachable block (ram,0x01c17c3b) */
/* WARNING: Removing unreachable block (ram,0x01c17c44) */
/* WARNING: Removing unreachable block (ram,0x01c17b77) */
/* WARNING: Removing unreachable block (ram,0x01c17ba0) */
/* WARNING: Removing unreachable block (ram,0x01c17b79) */
/* WARNING: Removing unreachable block (ram,0x01c17ba2) */

ulonglong FUN_01c17760(float param_1)

{
  bool bVar1;
  code *pcVar2;
  longlong *plVar3;
  uint uVar4;
  void *pvVar5;
  longlong lVar6;
  undefined8 *puVar7;
  pthread_key_t pVar8;
  pthread_key_t pVar9;
  longlong *plVar10;
  longlong lVar11;
  byte unaff_SIL;
  longlong *unaff_RDI;
  longlong *plVar12;
  ulonglong uVar13;
  float fVar14;
  longlong local_e0;
  char local_d8;
  longlong *local_78;
  char local_70;
  int local_60;
  ulonglong local_50;
  char local_48;
  
  FUN_01a58dc0();
  (**(code **)(*local_78 + 0xe20))();
  if ((local_d8 == '\0') && (local_e0 != 0)) {
    FUN_00d50b00();
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_e0 == 0) {
    uVar13 = 0;
  }
  else {
    if (*(int *)(local_e0 + 0xc) == 0) {
      uVar13 = 0;
    }
    else {
      uVar4 = (**(code **)(*unaff_RDI + 0x488))();
      pcVar2 = DAT_02572370;
      uVar13 = (ulonglong)uVar4;
      if (((byte)uVar4 & unaff_SIL) != 0) {
        if (*(int *)(local_e0 + 0xc) < 1) {
          bVar1 = false;
          puVar7 = (undefined8 *)0x0;
        }
        else {
          plVar10 = (longlong *)0x0;
          puVar7 = (undefined8 *)0x0;
          bVar1 = false;
          do {
            plVar3 = local_78;
            pVar8 = (pthread_key_t)plVar10;
            pvVar5 = _pthread_getspecific(pVar8);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e7c0();
            if ((local_70 == '\0') && (local_78 != (longlong *)0x0)) {
              FUN_00d50b00();
            }
            pvVar5 = _pthread_getspecific((pthread_key_t)plVar10);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013de560();
            if ((local_70 == '\0') && (local_78 != (longlong *)0x0)) {
              FUN_00d50b00();
            }
            pvVar5 = _pthread_getspecific((pthread_key_t)plVar10);
            if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              plVar10 = local_78;
            }
            FUN_014ed740();
            pvVar5 = _pthread_getspecific((pthread_key_t)plVar10);
            if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              plVar10 = local_78;
            }
            pvVar5 = _pthread_getspecific((pthread_key_t)plVar10);
            plVar12 = local_78;
            if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              plVar10 = local_78;
              plVar12 = (longlong *)local_78[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
            }
            pVar9 = (pthread_key_t)plVar10;
            fVar14 = (float)(**(code **)(*plVar12 + 0x3e0))();
            FUN_014bd3c0(fVar14 + param_1);
            pvVar5 = _pthread_getspecific(pVar9);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dfcb0();
            pvVar5 = _pthread_getspecific(pVar9);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dd790();
            if (local_70 == '\0') {
              if (local_78 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_70 = '\0';
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if (local_78 != (longlong *)0x0) {
              local_70 = '\0';
              local_78 = (longlong *)0x0;
              local_60 = -1;
LAB_01c17b73:
              while( true ) {
                lVar6 = (longlong)local_60;
                local_60 = local_60 + 1;
                if (*(int *)((longlong)plVar3 + 0xc) <= local_60) break;
                lVar11 = plVar3[2];
                local_78 = *(longlong **)(lVar11 + 8 + lVar6 * 8);
                pvVar5 = _pthread_getspecific((pthread_key_t)lVar11);
                pVar9 = (pthread_key_t)lVar11;
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_011ef8d0();
                if (local_48 == '\0') goto LAB_01c17c20;
                if (local_50 != 0) goto LAB_01c17c50;
              }
              FUN_0015edf0();
              FUN_00d50b20();
            }
            if (plVar3 != (longlong *)0x0) {
              FUN_00d50b20();
              FUN_00d50b20();
            }
            uVar4 = pVar8 + 1;
            plVar10 = (longlong *)(ulonglong)uVar4;
          } while ((int)uVar4 < *(int *)(local_e0 + 0xc));
        }
        FUN_001159b0();
        uVar13 = CONCAT71((int7)(uVar13 >> 8),1);
        if ((bVar1) && (puVar7 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00d50b20();
  }
  return uVar13 & 0xffffffff;
LAB_01c17c20:
  if (local_50 != 0) {
    FUN_00d50b00();
LAB_01c17c50:
    pvVar5 = _pthread_getspecific(pVar9);
    uVar13 = local_50;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      uVar13 = *(ulonglong *)(local_50 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar14 = (float)FUN_0125a2c0();
    FUN_012595a0(fVar14 + param_1);
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &DAT_02572358;
      (*pcVar2)();
      bVar1 = true;
    }
    local_48 = '\0';
    FUN_00d21140();
    FUN_012879b0();
    FUN_00d23740();
    FUN_00d50b20();
  }
  goto LAB_01c17b73;
}




// ============================================================
// @01c163e0 — 1420 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01c16683) */
/* WARNING: Removing unreachable block (ram,0x01c1668f) */
/* WARNING: Removing unreachable block (ram,0x01c165d4) */
/* WARNING: Removing unreachable block (ram,0x01c165dd) */
/* WARNING: Removing unreachable block (ram,0x01c1692c) */
/* WARNING: Removing unreachable block (ram,0x01c16939) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01c163e0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined7 uVar3;
  longlong lVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined7 uVar11;
  longlong lVar10;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar12;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  float fVar14;
  undefined8 uVar15;
  float extraout_XMM0_Db;
  float fStack_b4;
  longlong local_78;
  char local_70;
  float local_64;
  longlong *local_60;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  local_60 = param_1;
  FUN_01a58dc0();
  if (local_40 == (longlong *)0x0) {
    bVar5 = 0;
  }
  else {
    FUN_01a58dc0();
    bVar5 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                        *local_50))();
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    bVar5 = bVar5 ^ 1;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar5 == 0) {
    uVar13 = FUN_01a58dc0();
    if (local_40 != (longlong *)0x0) {
      iVar7 = FUN_01d3a5a0();
      if (iVar7 == 1) {
        iVar7 = FUN_01d3b630();
        uVar13 = extraout_XMM0_Da_00;
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
        if (iVar7 == 1) {
          FUN_01a58dc0();
          FUN_01d3abf0();
          uVar15 = FUN_01e466c0();
          fStack_b4 = (float)((ulonglong)uVar15 >> 0x20);
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          uVar11 = (undefined7)((ulonglong)local_40 >> 8);
          if ((*param_2 != 0) && (iVar7 = FUN_01d3b620(), iVar7 == 2)) {
            FUN_01a58dc0();
            local_60 = (longlong *)(**(code **)(*local_40 + 0x930))((int)uVar15);
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01c16c70((int)local_60);
            uVar9 = CONCAT71(uVar11,1);
            goto LAB_01c165e2;
          }
          FUN_01a58dc0();
          (**(code **)(*local_50 + 0xe20))();
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (local_40 != (longlong *)0x0) {
            if ((*(int *)((longlong)local_40 + 0xc) != 0) &&
               (cVar6 = (**(code **)(*unaff_RDI + 0x488))(), cVar6 != '\0')) {
LAB_01c166a0:
              lVar10 = *local_60;
              cVar6 = (char)local_60[1];
              lVar1 = *unaff_RSI;
              if (lVar1 == lVar10) {
                if (cVar6 != '\0') {
                  if (((char)unaff_RSI[1] == '\0') && (lVar10 != 0)) {
                    cVar6 = '\x01';
                    FUN_00d50b00();
                    goto LAB_01c16710;
                  }
                  goto LAB_01c16714;
                }
              }
              else {
                lVar4 = unaff_RSI[1];
                if ((cVar6 != '\0') && (lVar10 != 0)) {
                  FUN_00d50b00();
                }
                *unaff_RSI = lVar10;
                if (((char)lVar4 != '\0') && (lVar1 != 0)) {
                  FUN_00d50b20();
                }
LAB_01c16710:
                *(char *)(unaff_RSI + 1) = cVar6;
LAB_01c16714:
                lVar10 = *unaff_RSI;
              }
              if (lVar10 == 0) {
                FUN_01a58dc0();
                (**(code **)(*local_50 + 0x658))();
                plVar2 = (longlong *)*unaff_RSI;
                if (plVar2 == local_40) {
                  if (((char)unaff_RSI[1] == '\0') && (local_40 != (longlong *)0x0)) {
                    if (local_38 == '\0') {
                      FUN_00d50b00();
                      goto LAB_01c167d1;
                    }
                    goto LAB_01c16781;
                  }
LAB_01c1678a:
                  if (*unaff_RSI != 0) goto LAB_01c16792;
LAB_01c167de:
                  bVar12 = false;
                  uVar3 = 0;
                }
                else {
                  lVar1 = unaff_RSI[1];
                  if (local_38 != '\0') {
                    *unaff_RSI = (longlong)local_40;
                    if (((char)lVar1 != '\0') && (plVar2 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
LAB_01c16781:
                    *(undefined1 *)(unaff_RSI + 1) = 1;
                    local_38 = '\0';
                    goto LAB_01c1678a;
                  }
                  if (local_40 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                  *unaff_RSI = (longlong)local_40;
                  if (((char)lVar1 != '\0') && (plVar2 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
LAB_01c167d1:
                  *(undefined1 *)(unaff_RSI + 1) = 1;
                  if (*unaff_RSI == 0) goto LAB_01c167de;
LAB_01c16792:
                  iVar7 = FUN_01d3a5a0();
                  bVar12 = iVar7 != 6;
                  uVar3 = uVar11;
                }
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                plVar2 = local_60;
                if (!bVar12) goto LAB_01c16943;
              }
              iVar7 = FUN_01d3a5a0();
              if (iVar7 == 5) {
                FUN_01a58dc0();
                FUN_01d3abf0();
                FUN_01e466c0();
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_01a58dc0();
                local_64 = (float)(**(code **)(*local_40 + 3000))();
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                uVar9 = FUN_01d3b590();
                fVar14 = (fStack_b4 - extraout_XMM0_Db) / local_64;
                if ((uVar9 & 8) != 0) {
                  fVar14 = fVar14 * DAT_02391090;
                }
                fStack_b4 = extraout_XMM0_Db;
                if (DAT_02394274 < (float)((uint)fVar14 & _DAT_02390140)) {
                  FUN_01c17760();
                }
              }
              goto LAB_01c166a0;
            }
            uVar9 = 0;
            goto LAB_01c16969;
          }
          goto LAB_01c16470;
        }
      }
      else {
        uVar13 = extraout_XMM0_Da;
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
      }
    }
    local_78 = *param_2;
    local_70 = '\0';
    uVar8 = FUN_01a58d30(uVar13,&local_78);
    uVar9 = (ulonglong)uVar8;
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
LAB_01c16470:
    uVar9 = 0;
  }
LAB_01c165e2:
  return uVar9 & 0xffffffff;
LAB_01c16943:
  uVar9 = CONCAT71(uVar3,1);
  if (*local_60 != 0) {
    *local_60 = 0;
    if ((char)local_60[1] != '\0') {
      FUN_00d50b20();
    }
    *(undefined1 *)(plVar2 + 1) = 0;
  }
LAB_01c16969:
  FUN_00d50b20();
  goto LAB_01c165e2;
}




// ============================================================
// @01c15c90 — 544 bytes
// str: ""MUDetectionPitchCenterAssignmentInspector""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01c15dbb) */
/* WARNING: Removing unreachable block (ram,0x01c15dc9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c15c90(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_120;
  longlong local_118;
  
  if ((DAT_027e9078 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_027e8fc8 = FUN_00335590();
    _DAT_027e8fb0 = "MUDetectionPitchCenterAssignmentInspector";
    _DAT_027e8fb8 = 0xe8;
    _DAT_027e8fc0 = FUN_01c18410;
    _DAT_027e8fd0 = 0;
    uRam00000000027e8fd8 = 0;
    _DAT_027e8fe0 = 0;
    _DAT_027e9058 = 0;
    uRam00000000027e9060 = 0;
    _DAT_027e9068 = 0;
    DAT_027e906a = 1;
    _DAT_027e8fe8 = 0;
    uRam00000000027e8ff0 = 0;
    _DAT_027e8ff8 = 0;
    uRam00000000027e9000 = 0;
    _DAT_027e9008 = 0;
    uRam00000000027e9010 = 0;
    _DAT_027e9018 = 0;
    uRam00000000027e9020 = 0;
    _DAT_027e9028 = 0;
    uRam00000000027e9030 = 0;
    _DAT_027e9038 = 0;
    uRam00000000027e9040 = 0;
    _DAT_027e9048 = 0;
    uRam00000000027e9050 = 0;
    DAT_027e9073 = 0;
    _DAT_027e906b = 0;
    ___cxa_guard_release();
  }
  if (DAT_027e906b == '\0') {
    FUN_00827f80();
    FUN_00e87760();
    FUN_00018440();
    FUN_00d50c00();
    FUN_01c18480();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_01c2fd80();
    FUN_00e87920(uVar2,0);
    if (local_118 != 0) {
      FUN_00d50b20();
    }
    if (local_120 != 0) {
      FUN_00d50b20();
    }
    FUN_000a2890();
    FUN_000a2890();
  }
  return;
}




// ============================================================
// @01c15fa0 — 505 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c15fa0(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *unaff_RDI;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  
  FUN_00d50100();
  if ((DAT_028b6310 == 0) || (DAT_028b6319 == '\0')) {
    FUN_00e8cb50();
    lVar3 = DAT_027e8fa8;
    if (DAT_028b6310 == 0) {
      if (DAT_027e8fa8 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_01d20ca0(_DAT_023b1900);
      lVar2 = DAT_028b6310;
      if (DAT_028b6310 != local_48) {
        if (local_40 == '\0') {
          if (local_48 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_48;
          }
        }
        else {
          local_40 = '\0';
          lVar2 = local_48;
        }
        bVar1 = DAT_028b6310 != 0;
        DAT_028b6310 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_48;
        }
      }
      if ((lVar2 != 0) && (DAT_028b6318 == '\0')) {
        DAT_028b6318 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_48;
      }
      if ((local_40 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_028b6319 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b6319 = '\x01';
      FUN_00e8cb70();
    }
    if (DAT_028b6310 == 0) {
      lVar3 = 0;
      goto LAB_01c16159;
    }
  }
  lVar3 = DAT_028b6310;
  FUN_00d50b00();
LAB_01c16159:
  (**(code **)(*unaff_RDI + 0x390))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}



