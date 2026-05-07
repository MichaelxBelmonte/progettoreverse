// Reconstructed implementation of MUDetectionPitchIndexAssignmentInspector
// From MikeCore binary — reverse-engineered pseudocode

#include "MUDetectionPitchIndexAssignmentInspector.h"

// ============================================================
// @01a161a0 — 1572 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01a16253) */
/* WARNING: Removing unreachable block (ram,0x01a1625f) */
/* WARNING: Removing unreachable block (ram,0x01a166cd) */
/* WARNING: Removing unreachable block (ram,0x01a166d9) */
/* WARNING: Removing unreachable block (ram,0x01a163e0) */
/* WARNING: Removing unreachable block (ram,0x01a163e9) */
/* WARNING: Removing unreachable block (ram,0x01a16794) */
/* WARNING: Removing unreachable block (ram,0x01a167a4) */
/* WARNING: Removing unreachable block (ram,0x01a16363) */
/* WARNING: Removing unreachable block (ram,0x01a1636c) */
/* WARNING: Removing unreachable block (ram,0x01a1675f) */
/* WARNING: Removing unreachable block (ram,0x01a1676c) */
/* WARNING: Removing unreachable block (ram,0x01a16577) */
/* WARNING: Removing unreachable block (ram,0x01a165a0) */
/* WARNING: Removing unreachable block (ram,0x01a16579) */
/* WARNING: Removing unreachable block (ram,0x01a165a2) */

ulonglong FUN_01a161a0(undefined8 param_1,byte param_2)

{
  bool bVar1;
  code *pcVar2;
  longlong *plVar3;
  ulonglong uVar4;
  void *pvVar5;
  longlong lVar6;
  undefined8 *puVar7;
  pthread_key_t pVar8;
  longlong *unaff_RDI;
  longlong *plVar9;
  pthread_key_t pVar10;
  longlong local_d8;
  char local_d0;
  longlong *local_70;
  char local_68;
  int local_58;
  longlong local_48;
  char local_40;
  longlong *local_38;
  
  FUN_01a58dc0();
  (**(code **)(*local_70 + 0xe20))();
  if ((local_d0 == '\0') && (local_d8 != 0)) {
    FUN_00d50b00();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_d8 == 0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    if (*(int *)(local_d8 + 0xc) == 0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      uVar4 = (**(code **)(*unaff_RDI + 0x488))();
      pcVar2 = DAT_02572370;
      plVar9 = (longlong *)(uVar4 & 0xffffffff);
      if (((byte)plVar9 & param_2) != 0) {
        pVar10 = 0;
        if (*(int *)(local_d8 + 0xc) < 1) {
          bVar1 = false;
          puVar7 = (undefined8 *)0x0;
        }
        else {
          plVar9 = &local_48;
          puVar7 = (undefined8 *)0x0;
          bVar1 = false;
          do {
            plVar3 = local_70;
            pVar8 = pVar10;
            pvVar5 = _pthread_getspecific(pVar10);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e7c0();
            if ((local_68 == '\0') && (local_70 != (longlong *)0x0)) {
              FUN_00d50b00();
            }
            pvVar5 = _pthread_getspecific(pVar8);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013de560();
            local_38 = local_70;
            if ((local_68 == '\0') && (local_70 != (longlong *)0x0)) {
              FUN_00d50b00();
            }
            pvVar5 = _pthread_getspecific(pVar8);
            if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              pVar8 = (pthread_key_t)local_38;
            }
            pvVar5 = _pthread_getspecific(pVar8);
            if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              pVar8 = (pthread_key_t)local_38;
            }
            FUN_014ed790();
            FUN_014ed740();
            pvVar5 = _pthread_getspecific(pVar8);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dfcb0();
            pvVar5 = _pthread_getspecific(pVar8);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dd790();
            if (local_68 == '\0') {
              if (local_70 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if (local_70 != (longlong *)0x0) {
              local_68 = '\0';
              local_70 = (longlong *)0x0;
              local_58 = -1;
LAB_01a16573:
              while( true ) {
                lVar6 = (longlong)local_58;
                local_58 = local_58 + 1;
                if (*(int *)((longlong)plVar3 + 0xc) <= local_58) break;
                local_70 = *(longlong **)(plVar3[2] + 8 + lVar6 * 8);
                pvVar5 = _pthread_getspecific((pthread_key_t)plVar3[2]);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_011ef8d0();
                lVar6 = local_48;
                if (local_40 == '\0') goto LAB_01a16620;
                if (local_48 != 0) goto LAB_01a16650;
              }
              FUN_0015edf0();
              FUN_00d50b20();
            }
            if (local_38 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if (plVar3 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            pVar10 = pVar10 + 1;
          } while ((int)pVar10 < *(int *)(local_d8 + 0xc));
        }
        FUN_001159b0();
        plVar9 = (longlong *)CONCAT71((int7)((ulonglong)plVar9 >> 8),1);
        if ((bVar1) && (puVar7 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00d50b20();
  }
  return (ulonglong)plVar9 & 0xffffffff;
LAB_01a16620:
  if (local_48 != 0) {
    FUN_00d50b00();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
LAB_01a16650:
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &DAT_02572358;
      (*pcVar2)();
      bVar1 = true;
    }
    local_40 = '\0';
    local_48 = lVar6;
    FUN_00d21140();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    FUN_012879b0();
    FUN_00d23740();
    FUN_00d50b20();
  }
  goto LAB_01a16573;
}




// ============================================================
// @01a159f0 — 1292 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01a15ba5) */
/* WARNING: Removing unreachable block (ram,0x01a15bb1) */
/* WARNING: Removing unreachable block (ram,0x01a15e76) */
/* WARNING: Removing unreachable block (ram,0x01a15e82) */
/* WARNING: Removing unreachable block (ram,0x01a15eb7) */
/* WARNING: Removing unreachable block (ram,0x01a15ec4) */

ulonglong FUN_01a159f0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  longlong local_80;
  char local_78;
  float local_6c;
  int local_54;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01a58dc0();
  if (local_40 == (longlong *)0x0) {
    bVar4 = 0;
  }
  else {
    FUN_01a58dc0();
    bVar4 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                        *local_50))();
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    bVar4 = bVar4 ^ 1;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar4 == 0) {
    uVar11 = FUN_01a58dc0();
    if (local_40 != (longlong *)0x0) {
      iVar6 = FUN_01d3a5a0();
      if (iVar6 == 1) {
        iVar6 = FUN_01d3b630();
        uVar11 = extraout_XMM0_Da_00;
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          uVar11 = FUN_00d50b20();
        }
        if (iVar6 == 1) {
          FUN_01a58dc0();
          FUN_01d3abf0();
          FUN_01e466c0();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
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
            if (*(int *)((longlong)local_40 + 0xc) == 0) {
              uVar8 = 0;
            }
            else {
              cVar5 = (**(code **)(*unaff_RDI + 0x488))();
              uVar8 = 0;
              if (cVar5 != '\0') {
                local_54 = 0;
LAB_01a15bd0:
                lVar9 = *param_1;
                cVar5 = (char)param_1[1];
                lVar1 = *unaff_RSI;
                if (lVar1 == lVar9) {
                  if (cVar5 != '\0') {
                    if (((char)unaff_RSI[1] == '\0') && (lVar9 != 0)) {
                      cVar5 = '\x01';
                      FUN_00d50b00();
                      goto LAB_01a15c40;
                    }
                    goto LAB_01a15c45;
                  }
                }
                else {
                  lVar3 = unaff_RSI[1];
                  if ((cVar5 != '\0') && (lVar9 != 0)) {
                    FUN_00d50b00();
                  }
                  *unaff_RSI = lVar9;
                  if (((char)lVar3 != '\0') && (lVar1 != 0)) {
                    FUN_00d50b20();
                  }
LAB_01a15c40:
                  *(char *)(unaff_RSI + 1) = cVar5;
LAB_01a15c45:
                  lVar9 = *unaff_RSI;
                }
                if (lVar9 == 0) {
                  FUN_01a58dc0();
                  (**(code **)(*local_50 + 0x658))();
                  plVar2 = (longlong *)*unaff_RSI;
                  if (plVar2 == local_40) {
                    if (((char)unaff_RSI[1] == '\0') && (local_40 != (longlong *)0x0)) {
                      if (local_38 == '\0') {
                        FUN_00d50b00();
                        goto LAB_01a15d0a;
                      }
                      goto LAB_01a15cb7;
                    }
LAB_01a15cc1:
                    if (*unaff_RSI != 0) goto LAB_01a15cca;
LAB_01a15d19:
                    bVar10 = false;
                  }
                  else {
                    lVar1 = unaff_RSI[1];
                    if (local_38 != '\0') {
                      *unaff_RSI = (longlong)local_40;
                      if (((char)lVar1 != '\0') && (plVar2 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
LAB_01a15cb7:
                      *(undefined1 *)(unaff_RSI + 1) = 1;
                      local_38 = '\0';
                      goto LAB_01a15cc1;
                    }
                    if (local_40 != (longlong *)0x0) {
                      FUN_00d50b00();
                    }
                    *unaff_RSI = (longlong)local_40;
                    if (((char)lVar1 != '\0') && (plVar2 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
LAB_01a15d0a:
                    *(undefined1 *)(unaff_RSI + 1) = 1;
                    if (*unaff_RSI == 0) goto LAB_01a15d19;
LAB_01a15cca:
                    iVar6 = FUN_01d3a5a0();
                    bVar10 = iVar6 != 6;
                  }
                  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (!bVar10) goto LAB_01a15ed2;
                }
                iVar6 = FUN_01d3a5a0();
                if (iVar6 == 5) {
                  FUN_01a58dc0();
                  FUN_01d3abf0();
                  FUN_01e466c0();
                  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  FUN_01a58dc0();
                  local_6c = (float)(**(code **)(*local_40 + 3000))();
                  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  iVar6 = FUN_00e7d780(((extraout_XMM0_Db - extraout_XMM0_Db_00) / local_6c) /
                                       DAT_023908e0);
                  if (iVar6 != local_54) {
                    FUN_01a161a0(extraout_XMM0_Da_01,1);
                    local_54 = iVar6;
                  }
                }
                goto LAB_01a15bd0;
              }
            }
            goto LAB_01a15ef9;
          }
          goto LAB_01a15a83;
        }
      }
      else {
        uVar11 = extraout_XMM0_Da;
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          uVar11 = FUN_00d50b20();
        }
      }
    }
    local_80 = *param_2;
    local_78 = '\0';
    uVar7 = FUN_01a58d30(uVar11,&local_80);
    uVar8 = (ulonglong)uVar7;
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
LAB_01a15a83:
    uVar8 = 0;
  }
LAB_01a15e87:
  return uVar8 & 0xffffffff;
LAB_01a15ed2:
  if (*param_1 != 0) {
    *param_1 = 0;
    if ((char)param_1[1] != '\0') {
      FUN_00d50b20();
    }
    *(undefined1 *)(param_1 + 1) = 0;
  }
  uVar8 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
LAB_01a15ef9:
  FUN_00d50b20();
  goto LAB_01a15e87;
}




// ============================================================
// @01a152a0 — 544 bytes
// str: ""MUDetectionPitchIndexAssignmentInspector""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01a153cb) */
/* WARNING: Removing unreachable block (ram,0x01a153d9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a152a0(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_120;
  longlong local_118;
  
  if ((DAT_027e1d38 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_027e1c88 = FUN_00335590();
    _DAT_027e1c70 = "MUDetectionPitchIndexAssignmentInspector";
    _DAT_027e1c78 = 0xe8;
    _DAT_027e1c80 = FUN_01a16db0;
    _DAT_027e1c90 = 0;
    uRam00000000027e1c98 = 0;
    _DAT_027e1ca0 = 0;
    _DAT_027e1d18 = 0;
    uRam00000000027e1d20 = 0;
    _DAT_027e1d28 = 0;
    DAT_027e1d2a = 1;
    _DAT_027e1ca8 = 0;
    uRam00000000027e1cb0 = 0;
    _DAT_027e1cb8 = 0;
    uRam00000000027e1cc0 = 0;
    _DAT_027e1cc8 = 0;
    uRam00000000027e1cd0 = 0;
    _DAT_027e1cd8 = 0;
    uRam00000000027e1ce0 = 0;
    _DAT_027e1ce8 = 0;
    uRam00000000027e1cf0 = 0;
    _DAT_027e1cf8 = 0;
    uRam00000000027e1d00 = 0;
    _DAT_027e1d08 = 0;
    uRam00000000027e1d10 = 0;
    DAT_027e1d33 = 0;
    _DAT_027e1d2b = 0;
    ___cxa_guard_release();
  }
  if (DAT_027e1d2b == '\0') {
    FUN_00827f80();
    FUN_00e87760();
    FUN_00018440();
    FUN_00d50c00();
    FUN_01a16e20();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_01a03bf0();
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
// @01a155b0 — 505 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a155b0(void)

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
  if ((DAT_028b29b0 == 0) || (DAT_028b29b9 == '\0')) {
    FUN_00e8cb50();
    lVar3 = DAT_027e1c68;
    if (DAT_028b29b0 == 0) {
      if (DAT_027e1c68 != 0) {
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
      lVar2 = DAT_028b29b0;
      if (DAT_028b29b0 != local_48) {
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
        bVar1 = DAT_028b29b0 != 0;
        DAT_028b29b0 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_48;
        }
      }
      if ((lVar2 != 0) && (DAT_028b29b8 == '\0')) {
        DAT_028b29b8 = '\x01';
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
      DAT_028b29b9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b29b9 = '\x01';
      FUN_00e8cb70();
    }
    if (DAT_028b29b0 == 0) {
      lVar3 = 0;
      goto LAB_01a15769;
    }
  }
  lVar3 = DAT_028b29b0;
  FUN_00d50b00();
LAB_01a15769:
  (**(code **)(*unaff_RDI + 0x390))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}



