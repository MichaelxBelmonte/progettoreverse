// Reconstructed implementation of MDToolbarVolumeCtrl
// From MikeCore binary — reverse-engineered pseudocode

#include "MDToolbarVolumeCtrl.h"

// ============================================================
// @004461d0 — 2600 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00446547) */
/* WARNING: Removing unreachable block (ram,0x00446553) */
/* WARNING: Removing unreachable block (ram,0x0044699a) */
/* WARNING: Removing unreachable block (ram,0x004469a6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004461d0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined8 uVar9;
  undefined8 extraout_XMM0_Qa;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  uint local_c4;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  int local_58;
  int iStack_54;
  int iStack_50;
  longlong local_48;
  char local_40;
  char local_38 [8];
  
  lVar2 = local_70;
  lVar6 = DAT_026f6fd0;
  if (DAT_026f6fd0 != 0) {
    FUN_00d50b00();
  }
  FUN_00e7d6f0();
  uVar9 = FUN_0071a120();
  if (((((char)local_68 == '\0') && (local_70 != 0)) &&
      (uVar9 = FUN_00d50b00(), (char)local_68 != '\0')) && (local_70 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  local_48 = lVar6;
  local_40 = '\0';
  FUN_000175c0(uVar9,&local_48);
  if ((char)local_68 == '\0') {
    if (((local_70 != 0) && (FUN_00d50b00(), (char)local_68 != '\0')) && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68._0_1_ = '\0';
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  plVar7 = unaff_RSI;
  if (local_70 != 0) {
    local_68._0_1_ = '\0';
    uVar5 = FUN_00c70bc0();
    plVar7 = (longlong *)(ulonglong)uVar5;
    if (((char)local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if ((local_70 != 0 & (byte)plVar7) == 0) {
    iVar8 = *(int *)(*unaff_RSI + 0xc);
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if (1 < iVar8) {
      FUN_00d23310();
      plVar7 = (longlong *)local_38;
      if ((char)local_68 != '\0') {
        plVar7 = &local_68;
      }
      local_38[0] = (char)local_68;
      *(undefined1 *)plVar7 = 0;
      if (((char)local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] == '\0') && (local_70 != 0)) {
        FUN_00d50b00();
      }
      FUN_000ba510();
      lVar3 = local_48;
      lVar6 = *unaff_RSI;
      if (lVar6 == local_48) {
        if (((char)unaff_RSI[1] == '\0') && (local_48 != 0)) {
          if (local_40 != '\0') goto LAB_0044642c;
          FUN_00d50b00();
          goto LAB_0044646b;
        }
LAB_00446474:
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        lVar1 = unaff_RSI[1];
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          *unaff_RSI = lVar3;
          if (((char)lVar1 != '\0') && (lVar6 != 0)) {
            FUN_00d50b20();
          }
LAB_0044646b:
          *(undefined1 *)(unaff_RSI + 1) = 1;
          goto LAB_00446474;
        }
        *unaff_RSI = local_48;
        if (((char)lVar1 != '\0') && (lVar6 != 0)) {
          FUN_00d50b20();
        }
LAB_0044642c:
        *(undefined1 *)(unaff_RSI + 1) = 1;
        local_40 = '\0';
      }
      if (local_70 != 0) {
        FUN_00d50b20();
      }
    }
  }
  else if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x10) == 0) {
    return;
  }
  FUN_006f3f00();
  if ((char)local_68 == '\0') {
    if (local_70 == 0) {
      return;
    }
    FUN_00d50b00();
    if (((char)local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_70 == 0) {
    return;
  }
  FUN_00793300();
  if ((char)local_68 == '\0') {
    if (((local_70 != 0) && (FUN_00d50b00(), (char)local_68 != '\0')) && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68._0_1_ = '\0';
  }
  if (local_70 == 0) goto LAB_00446bc4;
  if (*(int *)(*unaff_RSI + 0xc) == 1) {
    FUN_00d23310();
    plVar7 = &local_48;
    if ((char)local_68 != '\0') {
      plVar7 = &local_68;
    }
    local_48 = CONCAT71(local_48._1_7_,(char)local_68);
    *(undefined1 *)plVar7 = 0;
    if (((char)local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_48 == '\0') && (local_70 != 0)) {
      FUN_00d50b00();
    }
    cVar4 = FUN_004fa0f0();
    if (local_70 != 0) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') {
      uVar5 = 0;
    }
    else {
      FUN_00d23310();
      plVar7 = &local_68;
      if ((char)local_68 == '\0') {
        plVar7 = (longlong *)local_38;
      }
      local_38[0] = (char)local_68;
      *(undefined1 *)plVar7 = 0;
      if (((char)local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (local_38[0] == '\0') {
        if (local_70 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38[0] = '\0';
      }
      FUN_004b8020();
      lVar6 = local_48;
      if (local_40 == '\0') {
        if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40 = '\0';
      }
      if (local_70 != 0) {
        FUN_00d50b20();
      }
      if (lVar6 == 0) goto LAB_0044670b;
      uVar5 = FUN_003b7780();
      FUN_00d50b20();
    }
  }
  else {
LAB_0044670b:
    uVar5 = 0;
  }
  FUN_004b5af0();
  FUN_003b79f0();
  if ((char)local_68 == '\0') {
    if (((local_70 != 0) && (FUN_00d50b00(), (char)local_68 != '\0')) && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68._0_1_ = '\0';
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  FUN_004b5af0();
  if ((char)local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
      if (((char)local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_004467b6;
    }
  }
  else if (local_70 != 0) {
LAB_004467b6:
    local_68._0_1_ = '\0';
    local_70 = 0;
    local_60 = lVar2;
    local_58 = -1;
    iStack_54 = 0;
    iStack_50 = 0;
    while( true ) {
      if (iStack_54 != 0) {
        if (iStack_54 < 1) {
          iStack_54 = -iStack_54;
        }
        else {
          local_58 = local_58 - iStack_54;
          FUN_00d23690();
          iStack_50 = iStack_50 + iStack_54;
          iStack_54 = 0;
        }
      }
      lVar6 = (longlong)local_58;
      local_58 = local_58 + 1;
      if (*(int *)(local_60 + 0xc) <= local_58) break;
      local_70 = *(longlong *)(*(longlong *)(local_60 + 0x10) + 8 + lVar6 * 8);
      cVar4 = FUN_003b7710();
      if (cVar4 != '\0') {
        local_40 = '\0';
        local_48 = local_70;
        FUN_00d21140();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00274d30();
    FUN_00d50b20();
  }
  FUN_0078b9c0();
  if ((char)local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
      if (((char)local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_004468cc;
    }
  }
  else if (local_70 != 0) {
LAB_004468cc:
    local_68._0_1_ = '\0';
    local_60 = local_70;
    local_58 = -1;
    iStack_54 = 0;
    iStack_50 = 0;
    local_c4 = uVar5 & 0xff;
    while( true ) {
      if (iStack_54 != 0) {
        if (iStack_54 < 1) {
          iStack_54 = -iStack_54;
        }
        else {
          local_58 = local_58 - iStack_54;
          FUN_00d23690();
          iStack_50 = iStack_50 + iStack_54;
          iStack_54 = 0;
        }
      }
      lVar6 = (longlong)local_58;
      local_58 = local_58 + 1;
      if (*(int *)(local_60 + 0xc) <= local_58) break;
      lVar6 = *(longlong *)(*(longlong *)(local_60 + 0x10) + 8 + lVar6 * 8);
      cVar4 = FUN_004fa0f0();
      if (cVar4 != '\0') {
        local_e0 = '\0';
        local_e8 = lVar6;
        FUN_004b8020(extraout_XMM0_Qa,&local_e8);
        lVar3 = local_48;
        if (local_40 == '\0') {
          if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40 = '\0';
        }
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          local_40 = '\0';
          local_48 = lVar6;
          cVar4 = FUN_00d24090();
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (cVar4 == '\0') {
            cVar4 = FUN_003b7710();
            if (cVar4 != '\0') {
              local_40 = '\0';
              local_48 = lVar3;
              FUN_00d23f50();
              if ((local_40 != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              FUN_003b79a0();
            }
          }
          else {
            FUN_003b79a0();
            local_40 = '\0';
            local_48 = lVar3;
            FUN_00d23f50();
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
        }
      }
    }
    FUN_000be170();
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    local_68._0_1_ = '\0';
    local_60 = lVar2;
    iStack_54 = 0;
    iStack_50 = 0;
    for (iVar8 = 0; local_58 = iVar8, iVar8 < *(int *)(lVar2 + 0xc); iVar8 = iVar8 + 1) {
      FUN_003b79a0();
    }
    FUN_00274d30();
  }
  local_d8 = *unaff_RSI;
  local_d0 = '\0';
  FUN_006fcaf0();
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_00446bc4:
  FUN_00d50b20();
  return;
}




// ============================================================
// @00447590 — 1712 bytes
// str: ""handleClickSliderChanged""
// str: ""onUpdatePlaybackController""
// str: ""onSelectedDocumentChanged""
// str: ""handleVolumeSliderChanged""
// str: ""onVolumeChanged""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00447590(void)

{
  int iVar1;
  
  if (DAT_02808648 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02705c48 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02705b98 = FUN_00015ff0();
          _DAT_02705b80 = "MDToolbarVolumeCtrl";
          _DAT_02705b88 = 0xa0;
          _DAT_02705b90 = FUN_0044b690;
          _DAT_02705ba0 = 0;
          uRam0000000002705ba8 = 0;
          _DAT_02705bb0 = 0;
          uRam0000000002705bb8 = 0;
          _DAT_02705bc0 = 0;
          uRam0000000002705bc8 = 0;
          _DAT_02705bd0 = 0;
          uRam0000000002705bd8 = 0;
          _DAT_02705be0 = 0;
          uRam0000000002705be8 = 0;
          _DAT_02705bf0 = 0;
          uRam0000000002705bf8 = 0;
          _DAT_02705c00 = 0;
          uRam0000000002705c08 = 0;
          _DAT_02705c10 = 0;
          uRam0000000002705c18 = 0;
          _DAT_02705c20 = 0;
          uRam0000000002705c28 = 0;
          _DAT_02705c30 = 0;
          uRam0000000002705c38 = 0;
          _DAT_02705c40 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02808608 = "handleVolumeSliderChanged";
      _DAT_02808610 = &DAT_02705b80;
      _DAT_02808618 = 0;
      _DAT_02808620 = &DAT_02705c50;
      _DAT_02808628 = FUN_0044b6e0;
      _DAT_02808630 = FUN_004498a0;
      _DAT_02808638 = 0;
      uRam0000000002808640 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02808690 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02705c48 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02705b98 = FUN_00015ff0();
          _DAT_02705b80 = "MDToolbarVolumeCtrl";
          _DAT_02705b88 = 0xa0;
          _DAT_02705b90 = FUN_0044b690;
          _DAT_02705ba0 = 0;
          uRam0000000002705ba8 = 0;
          _DAT_02705bb0 = 0;
          uRam0000000002705bb8 = 0;
          _DAT_02705bc0 = 0;
          uRam0000000002705bc8 = 0;
          _DAT_02705bd0 = 0;
          uRam0000000002705bd8 = 0;
          _DAT_02705be0 = 0;
          uRam0000000002705be8 = 0;
          _DAT_02705bf0 = 0;
          uRam0000000002705bf8 = 0;
          _DAT_02705c00 = 0;
          uRam0000000002705c08 = 0;
          _DAT_02705c10 = 0;
          uRam0000000002705c18 = 0;
          _DAT_02705c20 = 0;
          uRam0000000002705c28 = 0;
          _DAT_02705c30 = 0;
          uRam0000000002705c38 = 0;
          _DAT_02705c40 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02808650 = "handleClickSliderChanged";
      _DAT_02808658 = &DAT_02705b80;
      _DAT_02808660 = 0;
      _DAT_02808668 = &DAT_02705c50;
      _DAT_02808670 = FUN_0044b6e0;
      _DAT_02808678 = FUN_0044b3f0;
      _DAT_02808680 = 0;
      uRam0000000002808688 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028086d8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02705c48 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02705b98 = FUN_00015ff0();
          _DAT_02705b80 = "MDToolbarVolumeCtrl";
          _DAT_02705b88 = 0xa0;
          _DAT_02705b90 = FUN_0044b690;
          _DAT_02705ba0 = 0;
          uRam0000000002705ba8 = 0;
          _DAT_02705bb0 = 0;
          uRam0000000002705bb8 = 0;
          _DAT_02705bc0 = 0;
          uRam0000000002705bc8 = 0;
          _DAT_02705bd0 = 0;
          uRam0000000002705bd8 = 0;
          _DAT_02705be0 = 0;
          uRam0000000002705be8 = 0;
          _DAT_02705bf0 = 0;
          uRam0000000002705bf8 = 0;
          _DAT_02705c00 = 0;
          uRam0000000002705c08 = 0;
          _DAT_02705c10 = 0;
          uRam0000000002705c18 = 0;
          _DAT_02705c20 = 0;
          uRam0000000002705c28 = 0;
          _DAT_02705c30 = 0;
          uRam0000000002705c38 = 0;
          _DAT_02705c40 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02808698 = "onSelectedDocumentChanged";
      _DAT_028086a0 = &DAT_02705b80;
      _DAT_028086a8 = 0;
      _DAT_028086b0 = &DAT_02705c54;
      _DAT_028086b8 = FUN_0044b770;
      _DAT_028086c0 = FUN_00447fc0;
      _DAT_028086c8 = 0;
      uRam00000000028086d0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02808720 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02705c48 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02705b98 = FUN_00015ff0();
          _DAT_02705b80 = "MDToolbarVolumeCtrl";
          _DAT_02705b88 = 0xa0;
          _DAT_02705b90 = FUN_0044b690;
          _DAT_02705ba0 = 0;
          uRam0000000002705ba8 = 0;
          _DAT_02705bb0 = 0;
          uRam0000000002705bb8 = 0;
          _DAT_02705bc0 = 0;
          uRam0000000002705bc8 = 0;
          _DAT_02705bd0 = 0;
          uRam0000000002705bd8 = 0;
          _DAT_02705be0 = 0;
          uRam0000000002705be8 = 0;
          _DAT_02705bf0 = 0;
          uRam0000000002705bf8 = 0;
          _DAT_02705c00 = 0;
          uRam0000000002705c08 = 0;
          _DAT_02705c10 = 0;
          uRam0000000002705c18 = 0;
          _DAT_02705c20 = 0;
          uRam0000000002705c28 = 0;
          _DAT_02705c30 = 0;
          uRam0000000002705c38 = 0;
          _DAT_02705c40 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028086e0 = "onVolumeChanged";
      _DAT_028086e8 = &DAT_02705b80;
      _DAT_028086f0 = 0;
      _DAT_028086f8 = &DAT_02705c57;
      _DAT_02808700 = FUN_0044b7f0;
      _DAT_02808708 = FUN_00447c70;
      _DAT_02808710 = 0;
      uRam0000000002808718 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02808768 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02705c48 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02705b98 = FUN_00015ff0();
          _DAT_02705b80 = "MDToolbarVolumeCtrl";
          _DAT_02705b88 = 0xa0;
          _DAT_02705b90 = FUN_0044b690;
          _DAT_02705ba0 = 0;
          uRam0000000002705ba8 = 0;
          _DAT_02705bb0 = 0;
          uRam0000000002705bb8 = 0;
          _DAT_02705bc0 = 0;
          uRam0000000002705bc8 = 0;
          _DAT_02705bd0 = 0;
          uRam0000000002705bd8 = 0;
          _DAT_02705be0 = 0;
          uRam0000000002705be8 = 0;
          _DAT_02705bf0 = 0;
          uRam0000000002705bf8 = 0;
          _DAT_02705c00 = 0;
          uRam0000000002705c08 = 0;
          _DAT_02705c10 = 0;
          uRam0000000002705c18 = 0;
          _DAT_02705c20 = 0;
          uRam0000000002705c28 = 0;
          _DAT_02705c30 = 0;
          uRam0000000002705c38 = 0;
          _DAT_02705c40 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02808728 = "onUpdatePlaybackController";
      _DAT_02808730 = &DAT_02705b80;
      _DAT_02808738 = 0;
      _DAT_02808740 = &DAT_02705c54;
      _DAT_02808748 = FUN_0044b770;
      _DAT_02808750 = FUN_0044a930;
      _DAT_02808758 = 0;
      uRam0000000002808760 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @00447c70 — 578 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00447cb2) */
/* WARNING: Removing unreachable block (ram,0x00447cbb) */

void FUN_00447c70(pthread_key_t param_1)

{
  longlong lVar1;
  bool bVar2;
  void *pvVar3;
  longlong lVar4;
  longlong unaff_RDI;
  undefined4 uVar5;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_38;
  char local_30;
  
  FUN_00448850();
  if (local_30 == '\0') {
    if (local_38 == 0) goto LAB_00447cfd;
    FUN_00d50b00();
LAB_00447cc0:
    if (*(longlong *)(unaff_RDI + 0x78) != 0) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e7d10();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011f2610();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar5 = FUN_012a46e0();
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(**(longlong **)(unaff_RDI + 0x78) + 0x928))(uVar5);
    }
    bVar2 = false;
  }
  else {
    if (local_38 != 0) goto LAB_00447cc0;
LAB_00447cfd:
    bVar2 = true;
  }
  FUN_00448b60();
  lVar1 = *(longlong *)(unaff_RDI + 0x88);
  lVar4 = lVar1;
  if (lVar1 == local_38) goto LAB_00447e85;
  lVar4 = local_38;
  if (local_30 == '\0') {
    if (local_38 == 0) {
      lVar4 = 0;
      goto LAB_00447e3e;
    }
    FUN_00d50b00();
    lVar1 = *(longlong *)(unaff_RDI + 0x88);
    *(longlong *)(unaff_RDI + 0x88) = local_38;
  }
  else {
    local_30 = '\0';
LAB_00447e3e:
    *(longlong *)(unaff_RDI + 0x88) = lVar4;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar4 = local_38;
  }
LAB_00447e85:
  if ((local_30 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar2) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00445ea0 — 538 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00445f98) */
/* WARNING: Removing unreachable block (ram,0x00445fa1) */
/* WARNING: Removing unreachable block (ram,0x00445f48) */
/* WARNING: Removing unreachable block (ram,0x00445f51) */

double FUN_00445ea0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong unaff_RDI;
  float fVar3;
  double dVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  longlong local_78;
  char local_70;
  double local_38;
  longlong *local_30;
  char local_28;
  double local_20;
  
  uVar7 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar5 = (undefined4)param_2;
  (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x5d8))();
  FUN_0062abf0();
  local_20 = (double)FUN_0053a8b0();
  local_38 = (double)CONCAT44(uVar7,uVar5);
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  cVar1 = FUN_004f1160(local_20,uVar5);
  if (cVar1 == '\0') {
    local_20 = (double)FUN_00e7b500(DAT_023908c8,0);
  }
  else {
    FUN_00226f20();
    if ((local_28 == '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    iVar2 = FUN_00228b30();
    if (iVar2 == 1) {
      if (local_30 == (longlong *)0x0) {
        dVar4 = (double)FUN_00e7b500(DAT_023908c8,0);
        return dVar4;
      }
      local_20 = (double)FUN_004f10a0(local_20);
      local_38 = (double)CONCAT44(uVar7,uVar5);
    }
    fVar6 = SUB84(local_38,0);
    cVar1 = FUN_004f1160(local_20);
    if (cVar1 == '\0') {
      local_20 = (double)FUN_00e7b500(DAT_023908c8);
    }
    else {
      FUN_01e436c0();
      (**(code **)(**(longlong **)(unaff_RDI + 0x28) + 0x640))();
      fVar3 = (float)(**(code **)(*local_30 + 0x580))();
      if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_20 = local_20 +
                 ((double)fVar6 / ((double)(fVar6 - (fVar3 + fVar3)) / local_38) - local_38) *
                 DAT_02394dd0;
    }
    if (local_30 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  return local_20;
}



