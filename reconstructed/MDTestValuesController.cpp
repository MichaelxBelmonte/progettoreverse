// Reconstructed implementation of MDTestValuesController
// From MikeCore binary — reverse-engineered pseudocode

#include "MDTestValuesController.h"

// ============================================================
// @0023f980 — 1477 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_0023f980(undefined8 param_1,ulonglong param_2)

{
  uint uVar1;
  ulonglong *puVar2;
  char *pcVar3;
  longlong *plVar4;
  longlong unaff_RDI;
  ulonglong uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong local_98;
  char local_90;
  uint local_84;
  ulonglong local_80;
  ulonglong local_78;
  char local_70;
  ulonglong local_58;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  plVar6 = (longlong *)(param_2 & 0xffffffff);
  if (*(longlong **)(unaff_RDI + 0x90) != (longlong *)0x0) {
    (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
    plVar4 = local_48;
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar5 = DAT_026e1810;
    if (plVar4 != (longlong *)0x0) {
      local_84 = (uint)param_2;
      if (DAT_026e1810 != 0) {
        FUN_00d50b00();
      }
      local_80 = uVar5;
      FUN_00e7d6f0();
      uVar7 = FUN_0071a120();
      if ((((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) &&
          (uVar7 = FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (longlong *)0x0)) {
        uVar7 = FUN_00d50b20();
      }
      local_58 = uVar5;
      local_50 = '\0';
      FUN_000175c0(uVar7,&local_58);
      plVar4 = local_48;
      if (local_40[0] == '\0') {
        if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (plVar4 != (longlong *)0x0) {
        local_40[0] = '\0';
        local_48 = plVar4;
        uVar1 = FUN_00c70bc0();
        uVar5 = (ulonglong)uVar1;
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (local_80 != 0) {
        FUN_00d50b20();
      }
      plVar6 = (longlong *)(ulonglong)local_84;
      if ((plVar4 != (longlong *)0x0 & (byte)uVar5) == 0) {
        FUN_01caeae0();
        plVar6 = local_48;
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar6 != (longlong *)0x0) {
          FUN_01caeae0();
          plVar6 = *(longlong **)(unaff_RDI + 0x90);
          (**(code **)(&UNK_00001550 + *plVar6))();
          pcVar3 = local_38;
          if (local_40[0] != '\0') {
            pcVar3 = local_40;
          }
          local_38[0] = local_40[0];
          *pcVar3 = '\0';
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (local_48 == (longlong *)0x0) {
            plVar4 = *(longlong **)(unaff_RDI + 0x90);
LAB_0023fef0:
            FUN_00d50b00();
          }
          else {
            plVar4 = local_48;
            if (local_38[0] == '\0') goto LAB_0023fef0;
          }
          (**(code **)(&UNK_000015d8 + *plVar4))();
          FUN_01d66ab0();
          if (plVar6 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        uVar5 = 0;
        goto LAB_0023ff33;
      }
    }
  }
  if ((char)plVar6 != '\0') {
    plVar6 = *(longlong **)(unaff_RDI + 0x90);
    (**(code **)(&UNK_00001550 + *plVar6))();
    plVar4 = local_48;
    local_58 = CONCAT71(local_58._1_7_,local_40[0]);
    puVar2 = (ulonglong *)local_40;
    if (local_40[0] == '\0') {
      puVar2 = &local_58;
    }
    *(char *)puVar2 = '\0';
    if ((local_40[0] != '\0') && (plVar4 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar4 == (longlong *)0x0) {
      plVar4 = *(longlong **)(unaff_RDI + 0x90);
LAB_0023fc5b:
      FUN_00d50b00();
    }
    else if ((char)local_58 == '\0') goto LAB_0023fc5b;
    (**(code **)(&UNK_000015d8 + *plVar4))();
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    plVar6 = *(longlong **)(unaff_RDI + 0x90);
    if (plVar6 == (longlong *)0x0) {
LAB_0023fcf1:
      plVar4 = (longlong *)0x0;
    }
    else {
      (**(code **)(&UNK_00001550 + *plVar6))();
      plVar4 = local_48;
      puVar2 = (ulonglong *)local_40;
      if (local_40[0] == '\0') {
        puVar2 = &local_58;
      }
      local_58 = CONCAT71(local_58._1_7_,local_40[0]);
      *(char *)puVar2 = '\0';
      if ((local_40[0] != '\0') && (plVar4 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar4 == (longlong *)0x0) {
        plVar4 = *(longlong **)(unaff_RDI + 0x90);
        if (plVar4 == (longlong *)0x0) goto LAB_0023fcf1;
      }
      else if ((char)local_58 != '\0') goto LAB_0023fcf4;
      FUN_00d50b00();
    }
LAB_0023fcf4:
    FUN_019f1a10();
    if ((plVar6 != (longlong *)0x0) && (plVar4 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d6f370();
    plVar6 = local_48;
    uVar7 = FUN_00d46300();
    local_78 = local_58;
    local_70 = 0;
    local_98 = DAT_026f6e40;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        uVar7 = FUN_00d50b00();
        local_98 = DAT_026f6e40;
      }
    }
    else {
      local_50 = '\0';
    }
    local_70 = '\x01';
    DAT_026f6e40 = local_98;
    if (local_98 != 0) {
      local_70 = '\x01';
      uVar7 = FUN_00d50b00();
    }
    local_90 = '\x01';
    (**(code **)(*plVar6 + 0x80))(uVar7,&local_98);
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01caeae0();
  plVar4 = local_48;
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar5 = CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
  if (plVar4 == (longlong *)0x0) goto LAB_0023ff33;
  FUN_01caeae0();
  plVar6 = *(longlong **)(unaff_RDI + 0x90);
  (**(code **)(&UNK_00001550 + *plVar6))();
  pcVar3 = local_38;
  if (local_40[0] != '\0') {
    pcVar3 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar3 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 == (longlong *)0x0) {
    plVar4 = *(longlong **)(unaff_RDI + 0x90);
LAB_0023fea3:
    FUN_00d50b00();
  }
  else {
    plVar4 = local_48;
    if (local_38[0] == '\0') goto LAB_0023fea3;
  }
  (**(code **)(&UNK_000015d8 + *plVar4))();
  FUN_01d66ab0();
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
LAB_0023ff33:
  return uVar5 & 0xffffffff;
}




// ============================================================
// @0023ec70 — 1002 bytes
// ============================================================

ulonglong FUN_0023ec70(undefined8 param_1,char param_2)

{
  longlong *plVar1;
  char *pcVar2;
  longlong lVar3;
  undefined7 uVar5;
  ulonglong uVar4;
  longlong unaff_RDI;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(longlong **)(unaff_RDI + 0x90) != (longlong *)0x0) {
    (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
    lVar3 = local_48;
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_01caeae0();
      lVar3 = local_48;
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_01caeae0();
        plVar1 = *(longlong **)(unaff_RDI + 0x90);
        if (plVar1 == (longlong *)0x0) {
LAB_0023f00c:
          lVar3 = 0;
        }
        else {
          (**(code **)(&UNK_00001550 + *plVar1))();
          pcVar2 = local_38;
          if (local_40[0] != '\0') {
            pcVar2 = local_40;
          }
          local_38[0] = local_40[0];
          *pcVar2 = '\0';
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (local_48 == 0) {
            lVar3 = *(longlong *)(unaff_RDI + 0x90);
            if (*(longlong *)(unaff_RDI + 0x90) == 0) goto LAB_0023f00c;
          }
          else {
            lVar3 = local_48;
            if (local_38[0] != '\0') goto LAB_0023f00e;
          }
          FUN_00d50b00();
        }
LAB_0023f00e:
        FUN_019f7840();
        FUN_01d66ab0();
        if ((plVar1 != (longlong *)0x0) && (lVar3 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
          FUN_00d50b20();
        }
      }
      uVar4 = 0;
      goto LAB_0023f049;
    }
  }
  if (param_2 != '\0') {
    plVar1 = *(longlong **)(unaff_RDI + 0x90);
    if (plVar1 == (longlong *)0x0) {
LAB_0023ede6:
      lVar3 = 0;
    }
    else {
      (**(code **)(&UNK_00001550 + *plVar1))();
      lVar3 = local_48;
      pcVar2 = &local_58;
      if (local_40[0] != '\0') {
        pcVar2 = local_40;
      }
      local_58 = local_40[0];
      *pcVar2 = '\0';
      if ((local_40[0] != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 == 0) {
        lVar3 = *(longlong *)(unaff_RDI + 0x90);
        if (lVar3 == 0) goto LAB_0023ede6;
      }
      else if (local_58 != '\0') goto LAB_0023ede8;
      FUN_00d50b00();
    }
LAB_0023ede8:
    FUN_019f7840();
    if ((plVar1 != (longlong *)0x0) && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    plVar1 = *(longlong **)(unaff_RDI + 0x90);
    if (plVar1 == (longlong *)0x0) {
LAB_0023ee73:
      lVar3 = 0;
    }
    else {
      (**(code **)(&UNK_00001550 + *plVar1))();
      lVar3 = local_48;
      pcVar2 = &local_58;
      if (local_40[0] != '\0') {
        pcVar2 = local_40;
      }
      local_58 = local_40[0];
      *pcVar2 = '\0';
      if ((local_40[0] != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 == 0) {
        lVar3 = *(longlong *)(unaff_RDI + 0x90);
        if (lVar3 == 0) goto LAB_0023ee73;
      }
      else if (local_58 != '\0') goto LAB_0023ee76;
      FUN_00d50b00();
    }
LAB_0023ee76:
    FUN_019f7820();
    if ((plVar1 != (longlong *)0x0) && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = DAT_026f6e20;
    if (DAT_026f6e20 != 0) {
      FUN_00d50b00();
    }
    FUN_0023de90();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01caeae0();
  lVar3 = local_48;
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_01caeae0();
    plVar1 = *(longlong **)(unaff_RDI + 0x90);
    if (plVar1 == (longlong *)0x0) {
LAB_0023ef82:
      lVar3 = 0;
    }
    else {
      (**(code **)(&UNK_00001550 + *plVar1))();
      lVar3 = local_48;
      pcVar2 = local_38;
      if (local_40[0] != '\0') {
        pcVar2 = local_40;
      }
      local_38[0] = local_40[0];
      *pcVar2 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 == 0) {
        lVar3 = *(longlong *)(unaff_RDI + 0x90);
        if (lVar3 == 0) goto LAB_0023ef82;
      }
      else if (local_38[0] != '\0') goto LAB_0023ef84;
      FUN_00d50b00();
    }
LAB_0023ef84:
    FUN_019f7840();
    FUN_01d66ab0();
    if ((plVar1 != (longlong *)0x0) && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
  }
  uVar5 = (undefined7)((ulonglong)lVar3 >> 8);
  if (*(longlong **)(unaff_RDI + 0x90) == (longlong *)0x0) {
    uVar4 = CONCAT71(uVar5,1);
  }
  else {
    (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
    uVar4 = CONCAT71(uVar5,local_48 == 0);
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
LAB_0023f049:
  return uVar4 & 0xffffffff;
}




// ============================================================
// @00240730 — 836 bytes
// str: ""MDTestValuesController""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00240730(undefined8 param_1,char param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong unaff_RDI;
  longlong **pplVar6;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_38;
  char local_30;
  
  if (*(longlong *)(unaff_RDI + 0x88) == 0) {
    cVar4 = '\0';
    lVar3 = DAT_026f6ea8;
  }
  else {
    FUN_01e56750();
    cVar4 = FUN_01e5c7e0();
    lVar3 = DAT_026f6ea8;
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
      lVar3 = DAT_026f6ea8;
    }
  }
  DAT_026f6ea8 = lVar3;
  if (param_2 == '\0') goto LAB_0024094a;
  if (*(longlong **)(unaff_RDI + 0x88) == (longlong *)0x0) {
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    local_68 = 0;
    local_60 = '\0';
    local_58 = 0;
    local_50 = '\0';
    pplVar6 = &local_38;
    FUN_01e4fcf0(&local_58,&local_68);
    plVar2 = local_38;
    if ((DAT_02710cf0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      _DAT_026f9018 = FUN_00275010();
      _DAT_026f9000 = "MDTestValuesController";
      _DAT_026f9008 = 0xa8;
      _DAT_026f9010 = FUN_00274fe0;
      _DAT_026f9020 = 0;
      uRam00000000026f9028 = 0;
      _DAT_026f9030 = 0;
      _DAT_026f90a8 = 0;
      uRam00000000026f90b0 = 0;
      _DAT_026f90b8 = 0;
      DAT_026f90ba = 1;
      _DAT_026f9038 = 0;
      uRam00000000026f9040 = 0;
      _DAT_026f9048 = 0;
      uRam00000000026f9050 = 0;
      _DAT_026f9058 = 0;
      uRam00000000026f9060 = 0;
      _DAT_026f9068 = 0;
      uRam00000000026f9070 = 0;
      _DAT_026f9078 = 0;
      uRam00000000026f9080 = 0;
      _DAT_026f9088 = 0;
      uRam00000000026f9090 = 0;
      _DAT_026f9098 = 0;
      uRam00000000026f90a0 = 0;
      DAT_026f90c3 = 0;
      _DAT_026f90bb = 0;
      ___cxa_guard_release();
    }
    if (plVar2 == (longlong *)0x0) {
LAB_00240830:
      pplVar6 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar2 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_00240830;
    }
    plVar1 = *(longlong **)(unaff_RDI + 0x88);
    plVar2 = *pplVar6;
    if (plVar1 != plVar2) {
      if (*(char *)(pplVar6 + 1) == '\0') {
        if (plVar2 == (longlong *)0x0) {
          *(undefined8 *)(unaff_RDI + 0x88) = 0;
        }
        else {
          FUN_00d50b00();
          plVar1 = *(longlong **)(unaff_RDI + 0x88);
          *(longlong **)(unaff_RDI + 0x88) = *pplVar6;
        }
      }
      else {
        *(undefined1 *)(pplVar6 + 1) = 0;
        *(longlong **)(unaff_RDI + 0x88) = plVar2;
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  else if (cVar4 != '\0') {
    (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x470))();
    goto LAB_0024094a;
  }
  FUN_00d50b00();
  FUN_0034ed40();
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x460))();
LAB_0024094a:
  FUN_01caeae0();
  plVar2 = local_38;
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_01caeae0();
    FUN_01d66ab0();
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  return 1;
}




// ============================================================
// @00240260 — 790 bytes
// ============================================================

char FUN_00240260(undefined8 param_1,undefined4 param_2)

{
  char *pcVar1;
  longlong *plVar2;
  longlong unaff_RDI;
  longlong *plVar3;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  undefined4 local_64;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  longlong *local_48;
  char local_40 [15];
  char local_31;
  
  plVar3 = *(longlong **)(unaff_RDI + 0x90);
  local_64 = param_2;
  (**(code **)(&UNK_00001550 + *plVar3))();
  plVar2 = local_48;
  local_58 = local_40[0];
  pcVar1 = local_40;
  if (local_40[0] == '\0') {
    pcVar1 = &local_58;
  }
  *pcVar1 = '\0';
  if ((local_40[0] != '\0') && (plVar2 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 == (longlong *)0x0) {
    plVar2 = *(longlong **)(unaff_RDI + 0x90);
LAB_002402d8:
    FUN_00d50b00();
  }
  else if (local_58 == '\0') goto LAB_002402d8;
  local_31 = (**(code **)((longlong)&dylib_command_00001220.dylib.current_version + *plVar2))();
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_31 == '\0') {
    FUN_01caeae0();
    plVar3 = local_48;
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 == (longlong *)0x0) {
      return local_31;
    }
    FUN_01caeae0();
    FUN_00d6f370();
    local_78 = DAT_026f6e88;
    if (DAT_026f6e88 != 0) {
      FUN_00d50b00();
    }
    local_70 = '\x01';
    FUN_00d70f90(param_1,1);
    FUN_01d66ab0();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    if (local_40[0] == '\0') {
      return local_31;
    }
    if (local_48 == (longlong *)0x0) {
      return local_31;
    }
    FUN_00d50b20();
    return local_31;
  }
  if (*(longlong **)(unaff_RDI + 0x90) == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
    plVar3 = local_48;
    pcVar1 = local_40;
    if (local_40[0] == '\0') {
      pcVar1 = &local_58;
    }
    local_58 = local_40[0];
    *pcVar1 = '\0';
    if ((local_40[0] != '\0') && (plVar3 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 == (longlong *)0x0) {
      plVar3 = *(longlong **)(unaff_RDI + 0x90);
      if (plVar3 == (longlong *)0x0) {
        plVar3 = (longlong *)0x0;
        goto LAB_00240452;
      }
    }
    else if (local_58 != '\0') goto LAB_00240452;
    FUN_00d50b00();
  }
LAB_00240452:
  FUN_019415b0();
  if ((char)local_64 != '\0') {
    FUN_01946d20();
    FUN_00d6f370();
    local_88 = DAT_026f6e88;
    if (DAT_026f6e88 != 0) {
      FUN_00d50b00();
    }
    local_80 = '\x01';
    FUN_00d70ea0(param_1,&local_88);
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d6f370();
    FUN_00d71400();
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01caeae0();
  plVar2 = local_48;
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_01caeae0();
    FUN_01d66ab0();
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return local_31;
}




// ============================================================
// @0023f500 — 761 bytes
// ============================================================

undefined8 FUN_0023f500(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  longlong *plVar5;
  longlong unaff_RDI;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (param_2 != 0) {
    plVar1 = *(longlong **)(unaff_RDI + 0x90);
    (**(code **)(&UNK_00001550 + *plVar1))();
    plVar5 = local_48;
    local_58 = local_40[0];
    pcVar4 = local_40;
    if (local_40[0] == '\0') {
      pcVar4 = &local_58;
    }
    *pcVar4 = '\0';
    if ((local_40[0] != '\0') && (plVar5 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar5 == (longlong *)0x0) {
      plVar5 = *(longlong **)(unaff_RDI + 0x90);
LAB_0023f588:
      FUN_00d50b00();
    }
    else if (local_58 == '\0') goto LAB_0023f588;
    (**(code **)("/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText" +
                *plVar5 + 0x18))();
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    plVar1 = *(longlong **)(unaff_RDI + 0x90);
    (**(code **)(&UNK_00001550 + *plVar1))();
    plVar5 = local_48;
    pcVar4 = local_40;
    if (local_40[0] == '\0') {
      pcVar4 = &local_58;
    }
    local_58 = local_40[0];
    *pcVar4 = '\0';
    if ((local_40[0] != '\0') && (plVar5 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar5 == (longlong *)0x0) {
      plVar5 = *(longlong **)(unaff_RDI + 0x90);
LAB_0023f60f:
      FUN_00d50b00();
    }
    else if (local_58 == '\0') goto LAB_0023f60f;
    (**(code **)("/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText" +
                *plVar5 + 0x10))();
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d6f370();
    plVar1 = local_48;
    FUN_00d46300();
    lVar2 = CONCAT71(uStack_57,local_58);
    lVar3 = DAT_026f6e38;
    if (local_50 == '\0') {
      if (lVar2 != 0) {
        FUN_00d50b00();
        lVar3 = DAT_026f6e38;
      }
    }
    else {
      local_50 = '\0';
    }
    DAT_026f6e38 = lVar3;
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x80))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01caeae0();
  plVar1 = local_48;
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    return 1;
  }
  FUN_01caeae0();
  plVar1 = *(longlong **)(unaff_RDI + 0x90);
  (**(code **)(&UNK_00001550 + *plVar1))();
  pcVar4 = local_38;
  if (local_40[0] != '\0') {
    pcVar4 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar4 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 == (longlong *)0x0) {
    plVar5 = *(longlong **)(unaff_RDI + 0x90);
  }
  else {
    plVar5 = local_48;
    if (local_38[0] != '\0') goto LAB_0023f7b0;
  }
  FUN_00d50b00();
LAB_0023f7b0:
  (**(code **)("/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText" + *plVar5 + 0x18)
  )();
  FUN_01d66ab0();
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
    FUN_00d50b20();
  }
  return 1;
}




// ============================================================
// @0023e900 — 632 bytes
// ============================================================

undefined8 FUN_0023e900(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  char *pcVar2;
  longlong lVar3;
  longlong unaff_RDI;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (param_2 != 0) {
    plVar1 = *(longlong **)(unaff_RDI + 0x90);
    if (plVar1 == (longlong *)0x0) {
LAB_0023e991:
      lVar3 = 0;
    }
    else {
      (**(code **)(&UNK_00001550 + *plVar1))();
      lVar3 = local_48;
      pcVar2 = &local_58;
      if (local_40[0] != '\0') {
        pcVar2 = local_40;
      }
      local_58 = local_40[0];
      *pcVar2 = '\0';
      if ((local_40[0] != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 == 0) {
        lVar3 = *(longlong *)(unaff_RDI + 0x90);
        if (lVar3 == 0) goto LAB_0023e991;
      }
      else if (local_58 != '\0') goto LAB_0023e993;
      FUN_00d50b00();
    }
LAB_0023e993:
    FUN_019f7810();
    if ((plVar1 != (longlong *)0x0) && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    plVar1 = *(longlong **)(unaff_RDI + 0x90);
    if (plVar1 == (longlong *)0x0) {
LAB_0023ea1e:
      lVar3 = 0;
    }
    else {
      (**(code **)(&UNK_00001550 + *plVar1))();
      lVar3 = local_48;
      pcVar2 = &local_58;
      if (local_40[0] != '\0') {
        pcVar2 = local_40;
      }
      local_58 = local_40[0];
      *pcVar2 = '\0';
      if ((local_40[0] != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 == 0) {
        lVar3 = *(longlong *)(unaff_RDI + 0x90);
        if (lVar3 == 0) goto LAB_0023ea1e;
      }
      else if (local_58 != '\0') goto LAB_0023ea21;
      FUN_00d50b00();
    }
LAB_0023ea21:
    FUN_019f77f0();
    if ((plVar1 != (longlong *)0x0) && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = DAT_026f6e18;
    if (DAT_026f6e18 != 0) {
      FUN_00d50b00();
    }
    FUN_0023de90();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01caeae0();
  lVar3 = local_48;
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 == 0) {
    return 1;
  }
  FUN_01caeae0();
  plVar1 = *(longlong **)(unaff_RDI + 0x90);
  if (plVar1 == (longlong *)0x0) {
LAB_0023eb2c:
    lVar3 = 0;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar1))();
    pcVar2 = local_38;
    if (local_40[0] != '\0') {
      pcVar2 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar2 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 == 0) {
      lVar3 = *(longlong *)(unaff_RDI + 0x90);
      if (*(longlong *)(unaff_RDI + 0x90) == 0) goto LAB_0023eb2c;
    }
    else {
      lVar3 = local_48;
      if (local_38[0] != '\0') goto LAB_0023eb2e;
    }
    FUN_00d50b00();
  }
LAB_0023eb2e:
  FUN_019f7810();
  FUN_01d66ab0();
  if ((plVar1 != (longlong *)0x0) && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
    FUN_00d50b20();
  }
  return 1;
}




// ============================================================
// @0023f1d0 — 588 bytes
// ============================================================

undefined8 FUN_0023f1d0(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char *pcVar3;
  longlong *plVar4;
  longlong unaff_RDI;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (param_2 != 0) {
    plVar1 = *(longlong **)(unaff_RDI + 0x90);
    (**(code **)(&UNK_00001550 + *plVar1))();
    plVar4 = local_48;
    local_58 = local_40[0];
    pcVar3 = local_40;
    if (local_40[0] == '\0') {
      pcVar3 = &local_58;
    }
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (plVar4 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar4 == (longlong *)0x0) {
      plVar4 = *(longlong **)(unaff_RDI + 0x90);
LAB_0023f250:
      FUN_00d50b00();
    }
    else if (local_58 == '\0') goto LAB_0023f250;
    (**(code **)((longlong)&dylib_command_00001288.cmd + *plVar4))();
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    plVar1 = *(longlong **)(unaff_RDI + 0x90);
    (**(code **)(&UNK_00001550 + *plVar1))();
    plVar4 = local_48;
    pcVar3 = local_40;
    if (local_40[0] == '\0') {
      pcVar3 = &local_58;
    }
    local_58 = local_40[0];
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (plVar4 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar4 == (longlong *)0x0) {
      plVar4 = *(longlong **)(unaff_RDI + 0x90);
LAB_0023f2cf:
      FUN_00d50b00();
    }
    else if (local_58 == '\0') goto LAB_0023f2cf;
    (**(code **)("/System/Library/Frameworks/CoreServices.framework/Versions/A/CoreServices" +
                *plVar4 + 0x48))();
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    lVar2 = DAT_026f6e10;
    if (DAT_026f6e10 != 0) {
      FUN_00d50b00();
    }
    FUN_0023de90();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01caeae0();
  plVar1 = local_48;
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    return 1;
  }
  FUN_01caeae0();
  plVar1 = *(longlong **)(unaff_RDI + 0x90);
  (**(code **)(&UNK_00001550 + *plVar1))();
  pcVar3 = local_38;
  if (local_40[0] != '\0') {
    pcVar3 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar3 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 == (longlong *)0x0) {
    plVar4 = *(longlong **)(unaff_RDI + 0x90);
  }
  else {
    plVar4 = local_48;
    if (local_38[0] != '\0') goto LAB_0023f3d3;
  }
  FUN_00d50b00();
LAB_0023f3d3:
  (**(code **)((longlong)&dylib_command_00001288.cmd + *plVar4))();
  FUN_01d66ab0();
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
    FUN_00d50b20();
  }
  return 1;
}




// ============================================================
// @00560cc0 — 516 bytes
// str: ""MDTestValuesController""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00560cc0(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_d0;
  longlong local_c8;
  longlong local_28;
  longlong local_20;
  
  if (DAT_02710cf0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f9018 = FUN_00275010();
      _DAT_026f9000 = "MDTestValuesController";
      _DAT_026f9008 = 0xa8;
      _DAT_026f9010 = FUN_00274fe0;
      _DAT_026f9020 = 0;
      uRam00000000026f9028 = 0;
      _DAT_026f9030 = 0;
      _DAT_026f90a8 = 0;
      uRam00000000026f90b0 = 0;
      _DAT_026f90b8 = 0;
      DAT_026f90ba = 1;
      _DAT_026f9038 = 0;
      uRam00000000026f9040 = 0;
      _DAT_026f9048 = 0;
      uRam00000000026f9050 = 0;
      _DAT_026f9058 = 0;
      uRam00000000026f9060 = 0;
      _DAT_026f9068 = 0;
      uRam00000000026f9070 = 0;
      _DAT_026f9078 = 0;
      uRam00000000026f9080 = 0;
      _DAT_026f9088 = 0;
      uRam00000000026f9090 = 0;
      _DAT_026f9098 = 0;
      uRam00000000026f90a0 = 0;
      DAT_026f90c3 = 0;
      _DAT_026f90bb = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026f90bb == '\0') {
    FUN_00567990();
    FUN_00e87760();
    FUN_002751f0();
    FUN_00d50c00();
    FUN_005805c0();
    FUN_00580d00();
    FUN_00581020();
    FUN_00581350();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_20 != 0) {
      FUN_00d50b20();
    }
    if (local_28 != 0) {
      FUN_00d50b20();
    }
    FUN_00275330();
    if (local_c8 != 0) {
      FUN_00d50b20();
    }
    if (local_d0 != 0) {
      FUN_00d50b20();
    }
    FUN_00275330();
  }
  return;
}



