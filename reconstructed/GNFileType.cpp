// Reconstructed implementation of GNFileType
// From MikeCore binary — reverse-engineered pseudocode

#include "GNFileType.h"

// ============================================================
// @00e1db90 — 3033 bytes
// str: ""GNFileType""
// str: ""GNAndQualifier""
// str: ""GNOrQualifier""
// str: ""GNString""
// str: ""expressionForKeyPath:""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00e1db90(void)

{
  longlong *plVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong *unaff_RDI;
  ulonglong uVar13;
  longlong **pplVar14;
  bool bVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  longlong *local_78;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  longlong *local_40;
  char local_31;
  
  plVar11 = (longlong *)*unaff_RDI;
  FUN_0004a6e0();
  if (plVar11 == (longlong *)0x0) {
LAB_00e1dbd5:
    plVar11 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar11 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar11 = unaff_RDI;
    if (cVar3 == '\0') goto LAB_00e1dbd5;
  }
  plVar1 = (longlong *)*plVar11;
  local_31 = (char)plVar11[1];
  if ((local_31 == '\0') || (plVar1 == (longlong *)0x0)) {
    if (plVar1 == (longlong *)0x0) {
      plVar11 = (longlong *)*unaff_RDI;
      FUN_00024c80();
      if (plVar11 == (longlong *)0x0) {
LAB_00e1ded4:
        plVar11 = &DAT_02802688;
      }
      else {
        (**(code **)(*plVar11 + 0x360))();
        cVar3 = FUN_00e85ea0();
        plVar11 = unaff_RDI;
        if (cVar3 == '\0') goto LAB_00e1ded4;
      }
      lVar5 = plVar11[1];
      if (((char)lVar5 == '\0') || (*plVar11 == 0)) {
        if (*plVar11 == 0) {
          return 0;
        }
      }
      else {
        FUN_00d50b00();
      }
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_024a9998)();
      uVar12 = _objc_autorelease();
      (**(code **)(*(longlong *)*unaff_RDI + 0x3d8))();
      plVar11 = local_68;
      if (local_60 == '\0') {
        if (local_68 != (longlong *)0x0) {
          FUN_00d50b00();
          if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00e1e2a5;
        }
      }
      else if (local_68 != (longlong *)0x0) {
LAB_00e1e2a5:
        puVar2 = PTR__objc_msgSend_024a9998;
        local_60 = '\0';
        local_68 = (longlong *)0x0;
        local_58 = plVar11;
        local_50 = 0xffffffff;
        local_48 = 0;
        local_50._4_4_ = 0;
        while( true ) {
          if (local_50._4_4_ != 0) {
            if (local_50._4_4_ < 1) {
              iVar4 = -local_50._4_4_;
            }
            else {
              iVar4 = (int)local_50 - local_50._4_4_;
              local_50 = CONCAT44(local_50._4_4_,iVar4);
              FUN_00d23690();
              local_48 = local_48 + local_50._4_4_;
              iVar4 = 0;
            }
            local_50 = CONCAT44(iVar4,(int)local_50);
          }
          lVar6 = (longlong)(int)local_50;
          iVar4 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,iVar4);
          if (*(int *)((longlong)local_58 + 0xc) <= iVar4) break;
          local_68 = *(longlong **)(local_58[2] + 8 + lVar6 * 8);
          lVar6 = FUN_00e1db90();
          if (lVar6 != 0) {
            (*(code *)puVar2)(extraout_XMM0_Da_06,lVar6);
          }
        }
        FUN_00c6f7c0();
        FUN_00d50b20();
      }
      plVar11 = (longlong *)*unaff_RDI;
      if ((DAT_026cd900 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        _DAT_026cd850 = FUN_00024c80();
        _DAT_026cd838 = "GNAndQualifier";
        _DAT_026cd840 = 0x28;
        _DAT_026cd848 = FUN_00024c40;
        _DAT_026cd858 = 0;
        uRam00000000026cd860 = 0;
        _DAT_026cd868 = 0;
        uRam00000000026cd870 = 0;
        _DAT_026cd878 = 0;
        uRam00000000026cd880 = 0;
        _DAT_026cd888 = 0;
        uRam00000000026cd890 = 0;
        _DAT_026cd898 = 0;
        uRam00000000026cd8a0 = 0;
        _DAT_026cd8a8 = 0;
        uRam00000000026cd8b0 = 0;
        _DAT_026cd8b8 = 0;
        uRam00000000026cd8c0 = 0;
        _DAT_026cd8c8 = 0;
        uRam00000000026cd8d0 = 0;
        _DAT_026cd8d8 = 0;
        uRam00000000026cd8e0 = 0;
        _DAT_026cd8e8 = 0;
        uRam00000000026cd8f0 = 0;
        _DAT_026cd8f8 = 0;
        ___cxa_guard_release();
      }
      if (plVar11 == (longlong *)0x0) {
LAB_00e1e3bf:
        plVar11 = &DAT_02802688;
      }
      else {
        (**(code **)(*plVar11 + 0x360))();
        cVar3 = FUN_00e85ea0();
        plVar11 = unaff_RDI;
        if (cVar3 == '\0') goto LAB_00e1e3bf;
      }
      uVar7 = 1;
      if (*plVar11 == 0) {
        plVar11 = (longlong *)*unaff_RDI;
        if ((DAT_0277a740 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
          _DAT_026d4418 = FUN_00024c80();
          _DAT_026d4400 = "GNOrQualifier";
          _DAT_026d4408 = 0x28;
          _DAT_026d4410 = FUN_00053cf0;
          _DAT_026d4420 = 0;
          uRam00000000026d4428 = 0;
          _DAT_026d4430 = 0;
          uRam00000000026d4438 = 0;
          _DAT_026d4440 = 0;
          uRam00000000026d4448 = 0;
          _DAT_026d4450 = 0;
          uRam00000000026d4458 = 0;
          _DAT_026d4460 = 0;
          uRam00000000026d4468 = 0;
          _DAT_026d4470 = 0;
          uRam00000000026d4478 = 0;
          _DAT_026d4480 = 0;
          uRam00000000026d4488 = 0;
          _DAT_026d4490 = 0;
          uRam00000000026d4498 = 0;
          _DAT_026d44a0 = 0;
          uRam00000000026d44a8 = 0;
          _DAT_026d44b0 = 0;
          uRam00000000026d44b8 = 0;
          _DAT_026d44c0 = 0;
          ___cxa_guard_release();
        }
        if (plVar11 == (longlong *)0x0) {
LAB_00e1e407:
          unaff_RDI = &DAT_02802688;
        }
        else {
          (**(code **)(*plVar11 + 0x360))();
          cVar3 = FUN_00e85ea0();
          if (cVar3 == '\0') goto LAB_00e1e407;
        }
        uVar7 = 2;
        if (*unaff_RDI == 0) {
          (*(code *)PTR__objc_msgSend_024a9998)();
        }
      }
      lVar6 = (*(code *)PTR__objc_msgSend_024a9998)();
      if (lVar6 == 1) {
        uVar12 = (*(code *)PTR__objc_msgSend_024a9998)(extraout_XMM0_Da_07,0);
      }
      else {
        uVar13 = (*(code *)PTR__objc_msgSend_024a9998)();
        if (uVar13 < 2) {
          uVar12 = 0;
        }
        else {
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_024a9998)(uVar12,uVar7);
          uVar12 = _objc_autorelease();
        }
      }
      bVar15 = true;
      if ((char)lVar5 != '\0') {
        bVar15 = true;
        FUN_00d50b20();
      }
      goto LAB_00e1e259;
    }
  }
  else {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x3d0))();
  plVar11 = local_68;
  if ((((local_60 == '\0') && (local_68 != (longlong *)0x0)) && (FUN_00d50b00(), local_60 != '\0'))
     && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_40 = plVar11;
  (**(code **)(*plVar1 + 0x3f0))();
  local_78 = local_68;
  if (local_60 == '\0') {
    if (local_68 == (longlong *)0x0) {
      local_78 = (longlong *)0x0;
    }
    else {
      FUN_00d50b00();
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_78 = local_68;
  }
  if ((DAT_027782e0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_026d19f8 = FUN_00d4fe50();
    DAT_026d19e0 = "GNFileType";
    _DAT_026d19e8 = 0x48;
    _DAT_026d19f0 = FUN_00042280;
    _DAT_026d1a00 = 0;
    uRam00000000026d1a08 = 0;
    _DAT_026d1a10 = 0;
    uRam00000000026d1a18 = 0;
    _DAT_026d1a20 = 0;
    uRam00000000026d1a28 = 0;
    _DAT_026d1a30 = 0;
    uRam00000000026d1a38 = 0;
    _DAT_026d1a40 = 0;
    uRam00000000026d1a48 = 0;
    _DAT_026d1a50 = 0;
    uRam00000000026d1a58 = 0;
    _DAT_026d1a60 = 0;
    uRam00000000026d1a68 = 0;
    _DAT_026d1a70 = 0;
    uRam00000000026d1a78 = 0;
    _DAT_026d1a80 = 0;
    uRam00000000026d1a88 = 0;
    _DAT_026d1a90 = 0;
    uRam00000000026d1a98 = 0;
    _DAT_026d1aa0 = 0;
    ___cxa_guard_release();
  }
  if (local_78 == (longlong *)0x0) {
LAB_00e1dc99:
    if (DAT_02802688 == 0) goto LAB_00e1de16;
LAB_00e1dcec:
    plVar11 = local_40;
    lVar5 = DAT_027e8d78;
    if (DAT_027e8d78 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*plVar11 + 0x50))();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') goto LAB_00e1de16;
    FUN_00e1d530();
    lVar5 = (*(code *)PTR__objc_msgSend_024a9998)();
    if (lVar5 == 0) goto LAB_00e1e079;
    lVar5 = (*(code *)PTR__objc_msgSend_024a9998)();
    uVar12 = *(undefined8 *)PTR__kMDItemContentType_024a9948;
    if (lVar5 == 1) {
      uVar12 = (*(code *)PTR__objc_msgSend_024a9998)();
      uVar7 = (*(code *)PTR__objc_msgSend_024a9998)(extraout_XMM0_Da,0);
      uVar7 = (*(code *)PTR__objc_msgSend_024a9998)(extraout_XMM0_Da_00,uVar7);
      uVar12 = (*(code *)PTR__objc_msgSend_024a9998)(uVar7,uVar12,0,4);
      plVar11 = local_40;
    }
    else {
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_024a9998)();
      uVar7 = _objc_autorelease();
      puVar2 = PTR__objc_msgSend_024a9998;
      for (uVar13 = 0; uVar9 = (*(code *)puVar2)(), uVar13 < uVar9; uVar13 = uVar13 + 1) {
        uVar8 = (*(code *)puVar2)(extraout_XMM0_Da_02,uVar12);
        uVar10 = (*(code *)puVar2)(extraout_XMM0_Da_03,uVar13);
        uVar10 = (*(code *)puVar2)(extraout_XMM0_Da_04,uVar10);
        uVar8 = (*(code *)puVar2)(uVar10,uVar8,0,4);
        (*(code *)puVar2)(extraout_XMM0_Da_05,uVar8);
      }
      uVar12 = (*(code *)PTR__objc_msgSend_024a9998)(extraout_XMM0_Da_02,uVar7);
      plVar11 = local_40;
    }
  }
  else {
    (**(code **)(*local_78 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_00e1dc99;
    if (local_78 != (longlong *)0x0) goto LAB_00e1dcec;
LAB_00e1de16:
    lVar5 = FUN_00e1d9d0();
    if (lVar5 != 0) {
      pplVar14 = &local_68;
      (**(code **)(*plVar1 + 0x3f0))();
      plVar11 = local_68;
      if ((DAT_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        _DAT_026d5e58 = FUN_00d4fe50();
        DAT_026d5e40 = "GNString";
        _DAT_026d5e48 = 0x40;
        _DAT_026d5e50 = FUN_0005d920;
        _DAT_026d5e60 = 0;
        uRam00000000026d5e68 = 0;
        _DAT_026d5e70 = 0;
        uRam00000000026d5e78 = 0;
        _DAT_026d5e80 = 0;
        uRam00000000026d5e88 = 0;
        _DAT_026d5e90 = 0;
        uRam00000000026d5e98 = 0;
        _DAT_026d5ea0 = 0;
        uRam00000000026d5ea8 = 0;
        _DAT_026d5eb0 = 0;
        uRam00000000026d5eb8 = 0;
        _DAT_026d5ec0 = 0;
        uRam00000000026d5ec8 = 0;
        _DAT_026d5ed0 = 0;
        uRam00000000026d5ed8 = 0;
        _DAT_026d5ee0 = 0;
        uRam00000000026d5ee8 = 0;
        _DAT_026d5ef0 = 0;
        uRam00000000026d5ef8 = 0;
        _DAT_026d5f00 = 0;
        ___cxa_guard_release();
      }
      if (plVar11 == (longlong *)0x0) {
LAB_00e1de86:
        pplVar14 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar11 + 0x360))();
        cVar3 = FUN_00e85ea0();
        if (cVar3 == '\0') goto LAB_00e1de86;
      }
      if (*(char *)(pplVar14 + 1) == '\0') {
        if (*pplVar14 == (longlong *)0x0) goto LAB_00e1df53;
        FUN_00d50b00();
LAB_00e1df10:
        uVar12 = FUN_00d8d520();
        iVar4 = FUN_00d8c7a0();
        lVar6 = (*(code *)PTR__objc_msgSend_024a9998)((longlong)iVar4,uVar12);
        FUN_00d50b20();
      }
      else {
        *(undefined1 *)(pplVar14 + 1) = 0;
        if (*pplVar14 != (longlong *)0x0) goto LAB_00e1df10;
LAB_00e1df53:
        lVar6 = 0;
      }
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      uVar16 = (**(code **)(*plVar1 + 0x3f8))();
      plVar11 = DAT_0277cbb0;
      if (DAT_0277cbb0 == (longlong *)0x0) {
        bVar15 = local_68 == (longlong *)0x0;
      }
      else {
        FUN_00d50b00();
        bVar15 = local_68 == plVar11;
        uVar16 = FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        uVar16 = FUN_00d50b20();
      }
      uVar12 = 4;
      if (!bVar15) {
        uVar16 = (**(code **)(*plVar1 + 0x3f8))();
        if (DAT_02704028 != 0) {
          FUN_00d50b00();
          uVar16 = FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          uVar16 = FUN_00d50b20();
        }
        uVar12 = 7;
      }
      if (lVar6 != 0) {
        uVar7 = (*(code *)PTR__objc_msgSend_024a9998)(uVar16,lVar5);
        uVar8 = (*(code *)PTR__objc_msgSend_024a9998)(extraout_XMM0_Da_01,lVar6);
        uVar12 = (*(code *)PTR__objc_msgSend_024a9998)(uVar8,uVar7,0,uVar12);
        plVar11 = local_40;
        goto joined_r0x00e1e243;
      }
    }
LAB_00e1e079:
    uVar12 = 0;
    plVar11 = local_40;
  }
joined_r0x00e1e243:
  local_40 = plVar11;
  if (local_78 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar11 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  bVar15 = false;
LAB_00e1e259:
  if ((local_31 != '\0') && (!bVar15)) {
    FUN_00d50b20();
  }
  return uVar12;
}




// ============================================================
// @00e1f680 — 2327 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00e1f8ce) */
/* WARNING: Removing unreachable block (ram,0x00e1f8da) */
/* WARNING: Removing unreachable block (ram,0x00e1f93e) */
/* WARNING: Removing unreachable block (ram,0x00e1f94a) */

undefined4 FUN_00e1f680(undefined8 param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  undefined4 uVar5;
  char cVar6;
  short sVar7;
  short sVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined *puVar14;
  char *pcVar15;
  undefined *puVar16;
  short sVar17;
  undefined *puVar18;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar19;
  int iVar20;
  undefined *puVar21;
  bool bVar22;
  char local_70;
  undefined7 uStack_6f;
  char local_68;
  undefined8 *local_60;
  undefined8 local_58;
  longlong local_50;
  char local_48 [8];
  longlong *local_40;
  
  if (*unaff_RDI == 0) {
    return 0;
  }
  puVar10 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar10 = &DAT_02572358;
  pcVar3 = DAT_02572370;
  (*DAT_02572370)();
  puVar11 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar11 = &DAT_02572358;
  (*pcVar3)();
  local_60 = puVar11;
  if (param_2 != '\0') {
    FUN_00d99300();
    lVar4 = local_50;
    lVar1 = *unaff_RDI;
    if (lVar1 == local_50) {
      if (((char)unaff_RDI[1] != '\0') || (local_50 == 0)) goto LAB_00e1f7ab;
      local_58 = unaff_RDI + 1;
      if (local_48[0] == '\0') {
        FUN_00d50b00();
        goto LAB_00e1f7a4;
      }
LAB_00e1f76f:
      *(undefined1 *)local_58 = 1;
    }
    else {
      local_58 = unaff_RDI + 1;
      lVar2 = unaff_RDI[1];
      if (local_48[0] != '\0') {
        *unaff_RDI = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_00e1f76f;
      }
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      *unaff_RDI = lVar4;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_00e1f7a4:
      *(undefined1 *)local_58 = 1;
LAB_00e1f7ab:
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d99300();
    lVar4 = local_50;
    lVar1 = *unaff_RSI;
    if (lVar1 == local_50) {
      if (((char)unaff_RSI[1] != '\0') || (local_50 == 0)) goto LAB_00e1f856;
      local_58 = unaff_RSI + 1;
      if (local_48[0] == '\0') {
        FUN_00d50b00();
        goto LAB_00e1f84f;
      }
    }
    else {
      local_58 = unaff_RSI + 1;
      lVar2 = unaff_RSI[1];
      if (local_48[0] == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        *unaff_RSI = lVar4;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
LAB_00e1f84f:
        *(undefined1 *)local_58 = 1;
LAB_00e1f856:
        if ((local_48[0] != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_00e1f86a;
      }
      *unaff_RSI = local_50;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
    }
    *(undefined1 *)local_58 = 1;
  }
LAB_00e1f86a:
  plVar12 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  plVar12[2] = 0;
  plVar12[3] = 0;
  puVar16 = &DAT_02587ce8;
  *plVar12 = (longlong)&DAT_02587ce8;
  (*DAT_02587d00)();
  (**(code **)(*plVar12 + 0x368))();
  plVar13 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar13 = (longlong)&DAT_025880b0;
  plVar13[2] = 0;
  plVar13[3] = 0;
  FUN_00d500e0();
  local_40 = plVar13;
  (**(code **)(*plVar13 + 0x368))();
  uVar9 = (**(code **)(*plVar12 + 0x3a0))();
  if ((ushort)(uVar9 - 0x2a) < 0x34) {
    local_58 = (longlong *)CONCAT44(local_58._4_4_,(int)CONCAT71((int7)((ulonglong)puVar16 >> 8),1))
    ;
    puVar16 = (undefined *)0xa000000200001;
    if ((0xa000000200001U >> ((ulonglong)(uVar9 - 0x2a & 0xffff) & 0x3f) & 1) != 0)
    goto LAB_00e1f988;
  }
  local_58 = (longlong *)((ulonglong)local_58 & 0xffffffff00000000);
LAB_00e1f988:
  sVar7 = (**(code **)(*local_40 + 0x3a0))();
  iVar20 = 0;
  puVar14 = (undefined *)(ulonglong)uVar9;
  uVar5 = 0;
LAB_00e1f9b0:
  do {
    while( true ) {
      do {
        while( true ) {
          sVar8 = sVar7;
          uVar19 = uVar5;
          puVar21 = puVar14;
          plVar13 = local_40;
          puVar18 = (undefined *)((ulonglong)puVar21 & 0xffffffff);
          sVar17 = (short)puVar18;
          puVar14 = puVar18;
          uVar5 = uVar19;
          if (iVar20 == 0) break;
          if (iVar20 == 1) {
            if ((sVar17 != 0x3f) || (((ulonglong)local_58 & 1) == 0)) {
              while ((sVar8 != 0 && (sVar17 != sVar8))) {
                sVar8 = (**(code **)(*plVar13 + 0x3a0))();
              }
            }
            iVar20 = 0;
            sVar7 = 0;
            if (sVar8 != 0) {
              (**(code **)(*local_40 + 0x380))();
              FUN_00d46530();
              lVar1 = CONCAT71(uStack_6f,local_70);
              if (local_68 == '\0') {
                if (lVar1 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_68 = '\0';
              }
              local_48[0] = '\0';
              local_50 = lVar1;
              FUN_00d21140();
              if ((local_48[0] != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
              if (lVar1 != 0) {
                FUN_00d50b20();
              }
              if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
                FUN_00d50b20();
              }
              (**(code **)(*plVar12 + 0x380))();
              FUN_00d46530();
              lVar1 = CONCAT71(uStack_6f,local_70);
              if (local_68 == '\0') {
                if (lVar1 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_68 = '\0';
              }
              local_48[0] = '\0';
              local_50 = lVar1;
              FUN_00d21140();
              if ((local_48[0] != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
              if (lVar1 != 0) {
                FUN_00d50b20();
              }
              if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
                FUN_00d50b20();
              }
              iVar20 = 0;
              puVar14 = (undefined *)((ulonglong)puVar21 & 0xffff);
              sVar7 = sVar8;
            }
          }
          else {
            sVar7 = sVar8;
            if (iVar20 == 2) {
              if (local_60 != (undefined8 *)0x0) {
                FUN_00d50b20();
              }
              plVar13 = local_40;
              if (puVar10 != (undefined8 *)0x0) {
                FUN_00d50b20();
              }
              if (plVar13 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              if (plVar12 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              return uVar19;
            }
          }
        }
        iVar20 = 2;
        puVar14 = (undefined *)0x0;
        uVar5 = 1;
        sVar7 = 0;
      } while (sVar17 == 0 && sVar8 == 0);
      if ((((ulonglong)local_58 & 1) == 0) || (sVar17 != 0x2a)) break;
      do {
        puVar14 = (undefined *)(**(code **)(*plVar12 + 0x3a0))();
      } while ((short)puVar14 == 0x2a);
      uVar9 = (int)puVar14 - 0x3f;
      if ((ushort)uVar9 < 0x1f) {
        uVar9 = uVar9 & 0xffff;
        puVar16 = (undefined *)0x50000001;
        if ((0x50000001UL >> ((ulonglong)uVar9 & 0x3f) & 1) == 0) goto LAB_00e1fd81;
        local_58 = (longlong *)CONCAT44(local_58._4_4_,(int)CONCAT71((uint7)(uint3)(uVar9 >> 8),1));
      }
      else {
LAB_00e1fd81:
        local_58 = (longlong *)((ulonglong)local_58._4_4_ << 0x20);
      }
      iVar20 = 1;
      uVar5 = uVar19;
      sVar7 = sVar8;
    }
    bVar22 = ((ulonglong)local_58 & 1) == 0;
    if ((!bVar22) && ((sVar17 == 0x3f && (sVar8 != 0)))) {
      puVar14 = (undefined *)(**(code **)(*plVar12 + 0x3a0))();
      uVar9 = (int)puVar14 - 0x2a;
      if ((ushort)uVar9 < 0x34) {
        local_58 = (longlong *)
                   CONCAT44(local_58._4_4_,(int)CONCAT71((int7)((ulonglong)puVar16 >> 8),1));
        puVar16 = (undefined *)0xa000000200001;
        if ((0xa000000200001U >> ((ulonglong)(uVar9 & 0xffff) & 0x3f) & 1) == 0) goto LAB_00e1ff31;
      }
      else {
LAB_00e1ff31:
        local_58 = (longlong *)((ulonglong)local_58 & 0xffffffff00000000);
      }
      iVar20 = 0;
      sVar7 = (**(code **)(*local_40 + 0x3a0))();
      uVar5 = uVar19;
      goto LAB_00e1f9b0;
    }
    puVar16 = (undefined *)CONCAT71((int7)((ulonglong)puVar16 >> 8),sVar17 != 0x5b);
    if ((bVar22 || sVar17 != 0x5b) || (sVar8 == 0)) {
      if (sVar17 == sVar8) {
        puVar14 = (undefined *)(**(code **)(*plVar12 + 0x3a0))();
        uVar9 = (int)puVar14 - 0x2a;
        if ((ushort)uVar9 < 0x34) {
          local_58 = (longlong *)
                     CONCAT44(local_58._4_4_,(int)CONCAT71((int7)((ulonglong)puVar16 >> 8),1));
          puVar16 = (undefined *)0xa000000200001;
          if ((0xa000000200001U >> ((ulonglong)(uVar9 & 0xffff) & 0x3f) & 1) == 0)
          goto LAB_00e1ff3d;
        }
        else {
LAB_00e1ff3d:
          local_58 = (longlong *)((ulonglong)local_58 & 0xffffffff00000000);
        }
        iVar20 = 0;
        sVar7 = (**(code **)(*local_40 + 0x3a0))();
        uVar5 = uVar19;
      }
      else {
        iVar20 = 2;
        puVar14 = puVar18;
        uVar5 = 0;
        sVar7 = sVar8;
        if (*(int *)((longlong)local_60 + 0xc) != 0) {
          FUN_00d23340();
          plVar13 = local_40;
          lVar1 = local_50;
          local_70 = local_48[0];
          pcVar15 = local_48;
          if (local_48[0] == '\0') {
            pcVar15 = &local_70;
          }
          *pcVar15 = '\0';
          if ((local_48[0] != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d45870();
          (**(code **)(*plVar13 + 0x378))();
          if ((local_70 != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
          (**(code **)(*plVar13 + 0x3a8))();
          FUN_00d23740();
          FUN_00d23340();
          lVar1 = local_50;
          local_70 = local_48[0];
          pcVar15 = local_48;
          if (local_48[0] == '\0') {
            pcVar15 = &local_70;
          }
          *pcVar15 = '\0';
          if ((local_48[0] != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d45870();
          puVar16 = (undefined *)*plVar12;
          (**(code **)(puVar16 + 0x378))();
          if ((local_70 != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
          (**(code **)(*plVar12 + 0x3a8))();
          FUN_00d23740();
          puVar14 = (undefined *)(**(code **)(*plVar12 + 0x3a0))();
          uVar9 = (int)puVar14 - 0x2a;
          if ((ushort)uVar9 < 0x34) {
            local_58 = (longlong *)
                       CONCAT44(local_58._4_4_,(int)CONCAT71((int7)((ulonglong)puVar16 >> 8),1));
            puVar16 = (undefined *)0xa000000200001;
            if ((0xa000000200001U >> ((ulonglong)(uVar9 & 0xffff) & 0x3f) & 1) == 0)
            goto LAB_00e1fee1;
          }
          else {
LAB_00e1fee1:
            local_58 = (longlong *)((ulonglong)local_58 & 0xffffffff00000000);
          }
          iVar20 = 1;
          sVar7 = (**(code **)(*local_40 + 0x3a0))();
          uVar5 = uVar19;
        }
      }
    }
    else {
      (**(code **)(*plVar12 + 0x3b0))();
      lVar1 = local_50;
      if ((((local_48[0] == '\0') && (local_50 != 0)) && (FUN_00d50b00(), local_48[0] != '\0')) &&
         (local_50 != 0)) {
        FUN_00d50b20();
      }
      cVar6 = FUN_00e1f540();
      if (cVar6 == '\0') {
        puVar14 = (undefined *)CONCAT62((int6)((ulonglong)puVar16 >> 0x10),0x5b);
        iVar20 = 2;
        uVar19 = 0;
      }
      else {
        uVar9 = (**(code **)(*plVar12 + 0x3a0))();
        puVar14 = (undefined *)(ulonglong)uVar9;
        if ((ushort)(uVar9 - 0x2a) < 0x34) {
          local_58 = (longlong *)
                     CONCAT44(local_58._4_4_,(int)CONCAT71((int7)((ulonglong)puVar16 >> 8),1));
          if ((0xa000000200001U >> ((ulonglong)(uVar9 - 0x2a & 0xffff) & 0x3f) & 1) == 0)
          goto LAB_00e1fcf0;
        }
        else {
LAB_00e1fcf0:
          local_58 = (longlong *)((ulonglong)local_58 & 0xffffffff00000000);
        }
        sVar8 = (**(code **)(*local_40 + 0x3a0))();
        iVar20 = 0;
      }
      puVar16 = puVar14;
      uVar5 = uVar19;
      sVar7 = sVar8;
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
  } while( true );
}




// ============================================================
// @00e21c70 — 1646 bytes
// str: ""expected ':' after key '%@' in object""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00e220de) */
/* WARNING: Removing unreachable block (ram,0x00e220e7) */
/* WARNING: Removing unreachable block (ram,0x00e22159) */
/* WARNING: Removing unreachable block (ram,0x00e22162) */
/* WARNING: Removing unreachable block (ram,0x00e220f6) */
/* WARNING: Removing unreachable block (ram,0x00e22102) */
/* WARNING: Removing unreachable block (ram,0x00e2216d) */
/* WARNING: Removing unreachable block (ram,0x00e22176) */

void FUN_00e21c70(void)

{
  short sVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char cVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  bool bVar9;
  longlong local_70;
  char local_68;
  undefined8 *local_50;
  char local_48;
  
  cVar6 = FUN_00e20b20();
  lVar3 = DAT_02785a60;
  if (cVar6 == '\0') {
    if (DAT_02785a60 != 0) {
      FUN_00d50b00();
    }
    FUN_00e20940();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  else if (*(short *)(*(longlong *)(unaff_RSI + 0x20) + (longlong)*(int *)(unaff_RSI + 0x30) * 2) ==
           0x7b) {
    *(int *)(unaff_RSI + 0x30) = *(int *)(unaff_RSI + 0x30) + 1;
    cVar6 = FUN_00e20b20();
    lVar3 = DAT_02785a68;
    if (cVar6 != '\0') {
      if (*(short *)(*(longlong *)(unaff_RSI + 0x20) + (longlong)*(int *)(unaff_RSI + 0x30) * 2) ==
          0x7d) {
        *(int *)(unaff_RSI + 0x30) = *(int *)(unaff_RSI + 0x30) + 1;
        plVar7 = (longlong *)FUN_00e8fc40();
        FUN_00022d50();
        (**(code **)(*plVar7 + 0x18))();
        *unaff_RDI = plVar7;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        return;
      }
      plVar7 = (longlong *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar7 + 0x18))();
      bVar9 = false;
      while( true ) {
        puVar5 = local_50;
        cVar6 = FUN_00e20b20();
        lVar3 = DAT_02785a70;
        if (cVar6 == '\0') {
          if (DAT_02785a70 != 0) {
            FUN_00d50b00();
          }
          FUN_00e20940();
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
          goto LAB_00e222bc;
        }
        if (*(short *)(*(longlong *)(unaff_RSI + 0x20) + (longlong)*(int *)(unaff_RSI + 0x30) * 2)
            == 0x7d) break;
        FUN_00e21390();
        if (local_48 == '\0') {
          if (local_50 == (undefined8 *)0x0) goto LAB_00e222bc;
          FUN_00d50b00();
        }
        else if (local_50 == (undefined8 *)0x0) goto LAB_00e222bc;
        cVar6 = FUN_00e20b20();
        lVar3 = DAT_02785a78;
        if (cVar6 == '\0') {
          if (DAT_02785a78 != 0) {
            FUN_00d50b00();
          }
          FUN_00e20940();
          bVar9 = true;
          bVar2 = true;
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
        }
        else if (*(short *)(*(longlong *)(unaff_RSI + 0x20) +
                           (longlong)*(int *)(unaff_RSI + 0x30) * 2) == 0x3a) {
          *(int *)(unaff_RSI + 0x30) = *(int *)(unaff_RSI + 0x30) + 1;
          cVar6 = FUN_00e20b20();
          lVar3 = DAT_02785a80;
          if (cVar6 == '\0') {
            if (DAT_02785a80 != 0) {
              FUN_00d50b00();
            }
            FUN_00e20940();
            bVar9 = true;
            bVar2 = true;
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
          }
          else {
            FUN_00e20d30();
            if (local_48 == '\0') {
              if (local_50 != (undefined8 *)0x0) {
                FUN_00d50b00();
                goto LAB_00e21ee1;
              }
              if (*(longlong *)(unaff_RSI + 0x10) != 0) goto LAB_00e22067;
LAB_00e22114:
              if (*(char *)(unaff_RSI + 0xd) != '\0') {
                FUN_00ca1170();
              }
              if (*(char *)(unaff_RSI + 0xe) == '\0') {
                local_48 = '\0';
                FUN_00ca0840();
              }
LAB_00e2217b:
              cVar6 = FUN_00e20b20();
              lVar4 = DAT_02785a88;
              lVar3 = DAT_02785a68;
              if (cVar6 == '\0') {
                if (DAT_02785a68 != 0) {
                  FUN_00d50b00();
                }
                FUN_00e20940();
                bVar2 = true;
                bVar9 = true;
                if (lVar3 != 0) {
                  FUN_00d50b20();
                }
              }
              else {
                sVar1 = *(short *)(*(longlong *)(unaff_RSI + 0x20) +
                                  (longlong)*(int *)(unaff_RSI + 0x30) * 2);
                bVar2 = false;
                if (sVar1 != 0x7d) {
                  if (sVar1 == 0x2c) {
                    *(int *)(unaff_RSI + 0x30) = *(int *)(unaff_RSI + 0x30) + 1;
                  }
                  else {
                    if (DAT_02785a88 != 0) {
                      FUN_00d50b00();
                    }
                    FUN_00e20940();
                    bVar2 = true;
                    bVar9 = true;
                    if (lVar4 != 0) {
                      FUN_00d50b20();
                    }
                  }
                }
              }
            }
            else {
LAB_00e21ee1:
              if (*(longlong *)(unaff_RSI + 0x10) == 0) {
                if (local_50 == (undefined8 *)0x0) goto LAB_00e22114;
                local_48 = '\0';
                FUN_00ca0840();
                goto LAB_00e2217b;
              }
              bVar2 = true;
              bVar9 = true;
            }
            if (local_50 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_48 = '\x01';
          FUN_00d50b00();
          FUN_00d8cb40();
          if (local_68 == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          FUN_00e20940();
          if (local_70 != 0) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          local_50 = &DAT_024c5048;
          if (puVar5 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
LAB_00e22067:
          bVar9 = true;
          bVar2 = true;
        }
        FUN_00d50b20();
        if (((bVar2) || (*(int *)(unaff_RSI + 0x34) <= *(int *)(unaff_RSI + 0x30))) || (bVar9))
        goto LAB_00e2229f;
      }
      *(int *)(unaff_RSI + 0x30) = *(int *)(unaff_RSI + 0x30) + 1;
LAB_00e2229f:
      if (bVar9) {
LAB_00e222bc:
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = (longlong *)0x0;
        if (plVar7 != (longlong *)0x0) {
          FUN_00d50b00();
          plVar8 = plVar7;
        }
      }
      *unaff_RDI = plVar8;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if (plVar7 == (longlong *)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    if (DAT_02785a68 != 0) {
      FUN_00d50b00();
    }
    FUN_00e20940();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    if (DAT_02785a60 != 0) {
      FUN_00d50b00();
    }
    FUN_00e20940();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return;
}




// ============================================================
// @00e21390 — 1512 bytes
// str: ""unexpected character '%c' while parsing unicode escape sequence, expected hex digit""
// str: ""unexpected string escape char '%c'""
// ============================================================

void FUN_00e21390(void)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  short *psVar8;
  longlong lVar9;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar10;
  short unaff_R12W;
  int iVar11;
  int iVar12;
  longlong local_50;
  char local_48;
  
  cVar4 = FUN_00e20b20();
  lVar3 = DAT_027859f0;
  if (cVar4 == '\0') {
    if (DAT_027859f0 != 0) {
      FUN_00d50b00();
    }
    FUN_00e20940();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  else if (*(short *)(*(longlong *)(unaff_RSI + 0x20) + (longlong)*(int *)(unaff_RSI + 0x30) * 2) ==
           0x22) {
    iVar5 = *(int *)(unaff_RSI + 0x30) + 1;
    *(int *)(unaff_RSI + 0x30) = iVar5;
    lVar3 = DAT_027859f8;
    if (iVar5 != *(int *)(unaff_RSI + 0x34)) {
      puVar6 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &DAT_025795a8;
      (*DAT_025795c0)();
      iVar5 = *(int *)(unaff_RSI + 0x30);
      do {
        lVar3 = DAT_027859f8;
        iVar10 = *(int *)(unaff_RSI + 0x34);
        iVar12 = iVar5;
        if (iVar5 < iVar10) {
          psVar8 = (short *)((longlong)iVar5 * 2 + *(longlong *)(unaff_RSI + 0x20));
          iVar11 = iVar5;
          do {
            unaff_R12W = *psVar8;
            iVar12 = iVar11;
            if ((unaff_R12W == 0x22) || (unaff_R12W == 0x5c)) break;
            iVar11 = iVar11 + 1;
            psVar8 = psVar8 + 1;
            iVar12 = iVar10;
          } while (iVar10 != iVar11);
        }
        if ((iVar12 == iVar10) && (unaff_R12W != 0x22)) {
          if (DAT_027859f8 != 0) {
            FUN_00d50b00();
          }
          FUN_00e20940();
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
          goto LAB_00e218bf;
        }
        if (0 < iVar12 - iVar5) {
          FUN_00d8ea20();
        }
        iVar5 = iVar12 + 1;
        *(int *)(unaff_RSI + 0x30) = iVar5;
        lVar3 = DAT_027859f8;
        if (unaff_R12W == 0x5c) {
          lVar2 = *(longlong *)(unaff_RSI + 0x20);
          lVar9 = (longlong)iVar5;
          sVar1 = *(short *)(lVar2 + lVar9 * 2);
          if (*(int *)(unaff_RSI + 0x34) < (int)(iVar12 + (uint)(sVar1 == 0x75) * 4 + 3)) {
            if (DAT_027859f8 != 0) {
              FUN_00d50b00();
            }
            FUN_00e20940();
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
            goto LAB_00e218bf;
          }
          switch(sVar1) {
          case 0x22:
          case 0x2f:
          case 0x5c:
            break;
          default:
            FUN_00d8cb40();
            if (local_48 == '\0') {
              if (local_50 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_48 = '\0';
            }
            FUN_00e20940();
            if (local_50 != 0) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_00e218bf;
          case 0x62:
            break;
          case 0x66:
            break;
          case 0x6e:
            break;
          case 0x72:
            break;
          case 0x74:
            break;
          case 0x75:
            uVar7 = (ulonglong)*(ushort *)(lVar2 + 2 + lVar9 * 2);
            iVar10 = 1;
            if ((uVar7 < 0x100) && ((PTR___DefaultRuneLocale_0249c238[uVar7 * 4 + 0x3e] & 1) != 0))
            {
              uVar7 = (ulonglong)*(ushort *)(lVar2 + 4 + lVar9 * 2);
              iVar10 = 2;
              if ((uVar7 < 0x100) && ((PTR___DefaultRuneLocale_0249c238[uVar7 * 4 + 0x3e] & 1) != 0)
                 ) {
                uVar7 = (ulonglong)*(ushort *)(lVar2 + 6 + lVar9 * 2);
                iVar10 = 3;
                if ((uVar7 < 0x100) &&
                   ((PTR___DefaultRuneLocale_0249c238[uVar7 * 4 + 0x3e] & 1) != 0)) {
                  uVar7 = (ulonglong)*(ushort *)(lVar2 + 8 + lVar9 * 2);
                  iVar10 = 4;
                  if ((uVar7 < 0x100) &&
                     ((PTR___DefaultRuneLocale_0249c238[uVar7 * 4 + 0x3e] & 1) != 0)) break;
                }
              }
            }
            *(int *)(unaff_RSI + 0x30) = iVar5 + iVar10;
            FUN_00d8cb40();
            if (local_48 == '\0') {
              if (local_50 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_48 = '\0';
            }
            FUN_00e20940();
            if (local_50 != 0) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
LAB_00e218bf:
            *(undefined1 *)(unaff_RDI + 1) = 0;
            *unaff_RDI = 0;
            if (puVar6 == (undefined8 *)0x0) {
              return;
            }
            FUN_00d50b20();
            return;
          }
          FUN_00d8ea20();
          iVar5 = (uint)(sVar1 == 0x75) * 4 + 1 + *(int *)(unaff_RSI + 0x30);
          *(int *)(unaff_RSI + 0x30) = iVar5;
        }
        if (unaff_R12W == 0x22) {
          FUN_00d8c7d0();
          *unaff_RDI = puVar6;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          return;
        }
      } while( true );
    }
    if (DAT_027859f8 != 0) {
      FUN_00d50b00();
    }
    FUN_00e20940();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    if (DAT_027859f0 != 0) {
      FUN_00d50b00();
    }
    FUN_00e20940();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return;
}




// ============================================================
// @00e225e0 — 1191 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00e22808) */
/* WARNING: Removing unreachable block (ram,0x00e22811) */

void FUN_00e225e0(void)

{
  short sVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_a8;
  char local_a0;
  
  cVar6 = FUN_00e20b20();
  lVar4 = DAT_02785a30;
  if (cVar6 == '\0') {
    if (DAT_02785a30 != 0) {
      FUN_00d50b00();
    }
    FUN_00e20940();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  else if (*(short *)(*(longlong *)(unaff_RSI + 0x20) + (longlong)*(int *)(unaff_RSI + 0x30) * 2) ==
           0x5b) {
    *(int *)(unaff_RSI + 0x30) = *(int *)(unaff_RSI + 0x30) + 1;
    cVar6 = FUN_00e20b20();
    lVar4 = DAT_02785a38;
    if (cVar6 != '\0') {
      if (*(short *)(*(longlong *)(unaff_RSI + 0x20) + (longlong)*(int *)(unaff_RSI + 0x30) * 2) ==
          0x5d) {
        *(int *)(unaff_RSI + 0x30) = *(int *)(unaff_RSI + 0x30) + 1;
        puVar7 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar7 = &DAT_02572358;
        (*DAT_02572370)();
        *unaff_RDI = puVar7;
      }
      else {
        puVar7 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar7 = &DAT_02572358;
        (*DAT_02572370)();
        while (FUN_00e20d30(), lVar4 = DAT_02785a40, local_a0 != '\0') {
          if (local_a8 != 0) goto LAB_00e227c3;
LAB_00e227ce:
          if (*(char *)(unaff_RSI + 0xd) != '\0') {
            bVar3 = true;
            FUN_00d227d0();
            goto LAB_00e227ee;
          }
          if (*(char *)(unaff_RSI + 0xe) == '\0') {
            if (DAT_02785a40 != 0) {
              FUN_00d50b00();
            }
            FUN_00e20940();
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            goto LAB_00e22a74;
          }
LAB_00e22880:
          if ((*(int *)(unaff_RSI + 0x34) <= *(int *)(unaff_RSI + 0x30)) ||
             (puVar7 == (undefined8 *)0x0)) goto LAB_00e229d3;
        }
        if (local_a8 == 0) goto LAB_00e227ce;
        FUN_00d50b00();
LAB_00e227c3:
        bVar3 = false;
LAB_00e227ee:
        FUN_00d21140();
        cVar6 = FUN_00e20b20();
        lVar5 = DAT_02785a50;
        lVar4 = DAT_02785a48;
        if (cVar6 == '\0') {
          if (DAT_02785a48 != 0) {
            FUN_00d50b00();
          }
          FUN_00e20940();
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          if (!bVar3) {
            FUN_00d50b20();
          }
          goto LAB_00e22a74;
        }
        iVar2 = *(int *)(unaff_RSI + 0x30);
        sVar1 = *(short *)(*(longlong *)(unaff_RSI + 0x20) + (longlong)iVar2 * 2);
        if (sVar1 == 0x2c) {
          *(int *)(unaff_RSI + 0x30) = iVar2 + 1;
          cVar6 = FUN_00e20b20();
          lVar5 = DAT_02785a58;
          lVar4 = DAT_02785a38;
          if (cVar6 == '\0') {
            if (DAT_02785a38 != 0) {
              FUN_00d50b00();
            }
            FUN_00e20940();
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            if (!bVar3) {
              FUN_00d50b20();
            }
LAB_00e22a74:
            *unaff_RDI = 0;
            goto LAB_00e22a7c;
          }
          if (*(short *)(*(longlong *)(unaff_RSI + 0x20) + (longlong)*(int *)(unaff_RSI + 0x30) * 2)
              != 0x5d) {
            if (!bVar3) {
              FUN_00d50b20();
            }
            goto LAB_00e22880;
          }
          if (*(char *)(unaff_RSI + 0xf) == '\0') {
            if (DAT_02785a58 != 0) {
              FUN_00d50b00();
            }
            FUN_00e20940();
            if (lVar5 != 0) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            if (!bVar3) {
              FUN_00d50b20();
            }
            goto LAB_00e22a74;
          }
          *(int *)(unaff_RSI + 0x30) = *(int *)(unaff_RSI + 0x30) + 1;
          if (!bVar3) {
            FUN_00d50b20();
          }
        }
        else {
          if (sVar1 != 0x5d) {
            if (DAT_02785a50 != 0) {
              FUN_00d50b00();
            }
            FUN_00e20940();
            if (lVar5 != 0) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            if (!bVar3) {
              FUN_00d50b20();
            }
            goto LAB_00e22a74;
          }
          *(int *)(unaff_RSI + 0x30) = iVar2 + 1;
          if (!bVar3) {
            FUN_00d50b20();
          }
        }
LAB_00e229d3:
        *unaff_RDI = puVar7;
      }
LAB_00e22a7c:
      *(undefined1 *)(unaff_RDI + 1) = 1;
      return;
    }
    if (DAT_02785a38 != 0) {
      FUN_00d50b00();
    }
    FUN_00e20940();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    if (DAT_02785a30 != 0) {
      FUN_00d50b00();
    }
    FUN_00e20940();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return;
}




// ============================================================
// @00e22c90 — 1060 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00e22f14) */
/* WARNING: Removing unreachable block (ram,0x00e22f21) */
/* WARNING: Removing unreachable block (ram,0x00e22f7f) */
/* WARNING: Removing unreachable block (ram,0x00e22f8c) */

void FUN_00e22c90(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  char cVar12;
  int iVar13;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar14;
  bool bVar15;
  undefined8 local_48;
  longlong local_40;
  char local_38;
  
  cVar12 = FUN_00e20b20();
  lVar10 = DAT_02785a18;
  lVar9 = DAT_02785a10;
  lVar8 = DAT_02785a08;
  lVar7 = DAT_02785a00;
  if (cVar12 == '\0') {
    if (DAT_02785a00 != 0) {
      FUN_00d50b00();
    }
    FUN_00e20940();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
LAB_00e22d58:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  iVar2 = *(int *)(unaff_RSI + 0x30);
  iVar13 = (uint)(*(short *)(*(longlong *)(unaff_RSI + 0x20) + (longlong)iVar2 * 2) == 0x2d) + iVar2
  ;
  iVar3 = *(int *)(unaff_RSI + 0x34);
  if (iVar13 == iVar3) {
    if (DAT_02785a00 != 0) {
      FUN_00d50b00();
    }
    FUN_00e20940();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    goto LAB_00e22d58;
  }
  if (iVar13 < iVar3) {
    lVar14 = (longlong)iVar13;
    bVar15 = false;
    bVar5 = false;
    do {
      uVar1 = *(ushort *)(*(longlong *)(unaff_RSI + 0x20) + lVar14 * 2);
      bVar4 = bVar5;
      bVar11 = bVar15;
      switch(uVar1) {
      case 0x2b:
      case 0x2d:
        if (!bVar15) {
          if (DAT_02785a18 != 0) {
            FUN_00d50b00();
          }
          FUN_00e20940();
          if (lVar10 != 0) {
            FUN_00d50b20();
          }
          goto LAB_00e22d58;
        }
        break;
      case 0x2c:
      case 0x2f:
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3a:
      case 0x3b:
      case 0x3c:
      case 0x3d:
      case 0x3e:
      case 0x3f:
      case 0x40:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
        goto switchD_00e22dd6_caseD_2c;
      case 0x2e:
        bVar4 = true;
        if (bVar5) {
          if (DAT_02785a08 != 0) {
            FUN_00d50b00();
          }
          FUN_00e20940();
          if (lVar8 != 0) {
            FUN_00d50b20();
          }
          goto LAB_00e22d58;
        }
        break;
      case 0x45:
switchD_00e22dd6_caseD_45:
        bVar11 = true;
        if (bVar15) {
          if (DAT_02785a10 != 0) {
            FUN_00d50b00();
          }
          FUN_00e20940();
          if (lVar9 != 0) {
            FUN_00d50b20();
          }
          goto LAB_00e22d58;
        }
        break;
      default:
        if (uVar1 == 0x65) goto switchD_00e22dd6_caseD_45;
switchD_00e22dd6_caseD_2c:
        iVar6 = iVar13;
        if ((0xff < uVar1) ||
           ((PTR___DefaultRuneLocale_0249c238[(ulonglong)uVar1 * 4 + 0x3d] & 4) == 0))
        goto joined_r0x00e22e63;
      }
      bVar15 = bVar11;
      lVar14 = lVar14 + 1;
      iVar13 = iVar13 + 1;
      bVar5 = bVar4;
      iVar6 = iVar3;
    } while (lVar14 < iVar3);
  }
  else {
    bVar15 = false;
    iVar6 = iVar13;
    bVar4 = false;
  }
joined_r0x00e22e63:
  if (iVar6 == iVar2) {
    if (DAT_02785a00 != 0) {
      FUN_00d50b00();
    }
    FUN_00e20940();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    goto LAB_00e22d58;
  }
  (**(code **)(**(longlong **)(unaff_RSI + 0x28) + 0x378))();
  if (bVar4 || bVar15) {
    cVar12 = (**(code **)(**(longlong **)(unaff_RSI + 0x28) + 0x468))();
    lVar7 = DAT_02785a20;
    if (cVar12 == '\0') {
      if (DAT_02785a20 != 0) {
        FUN_00d50b00();
      }
      FUN_00e20940();
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      goto LAB_00e22d58;
    }
    FUN_00d470c0(local_48);
    if (local_40 != 0) {
      bVar4 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_00e23053;
    }
  }
  else {
    cVar12 = (**(code **)(**(longlong **)(unaff_RSI + 0x28) + 0x3f8))();
    lVar7 = DAT_02785a28;
    if (cVar12 == '\0') {
      if (DAT_02785a28 != 0) {
        FUN_00d50b00();
      }
      FUN_00e20940();
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      goto LAB_00e22d58;
    }
    FUN_00d468f0();
    if (local_40 != 0) {
      bVar4 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_00e23053;
    }
  }
  bVar4 = false;
LAB_00e23053:
  *(int *)(unaff_RSI + 0x30) = iVar6;
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((!bVar4) && (local_40 != 0)) {
    FUN_00d50b00();
  }
  *unaff_RDI = local_40;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @00e20d30 — 967 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00e20f5f) */
/* WARNING: Removing unreachable block (ram,0x00e20f68) */
/* WARNING: Removing unreachable block (ram,0x00e20e75) */
/* WARNING: Removing unreachable block (ram,0x00e20e82) */

void FUN_00e20d30(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar9;
  longlong local_40;
  char local_38;
  
  cVar7 = FUN_00e20b20();
  lVar6 = DAT_027859e0;
  lVar5 = DAT_027859d8;
  lVar3 = DAT_027859d0;
  if (cVar7 == '\0') {
LAB_00e20df4:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  iVar1 = *(int *)(unaff_RSI + 0x30);
  lVar8 = (longlong)iVar1;
  lVar2 = *(longlong *)(unaff_RSI + 0x20);
  bVar4 = false;
  lVar9 = 0;
  switch(*(undefined2 *)(lVar2 + lVar8 * 2)) {
  case 0x22:
    FUN_00e21390();
    if (local_40 == 0) {
LAB_00e20f97:
      bVar4 = false;
      lVar9 = 0;
    }
    else {
      bVar4 = true;
      lVar9 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
    break;
  case 0x2d:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    FUN_00e22c90();
    if (local_40 == 0) goto LAB_00e20f97;
    bVar4 = true;
    lVar9 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    break;
  case 0x5b:
    FUN_00e225e0();
    if (local_40 == 0) goto LAB_00e20f97;
    bVar4 = true;
    lVar9 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    break;
  case 0x66:
    if (iVar1 + 4 <= *(int *)(unaff_RSI + 0x34)) {
      if (((*(short *)(lVar2 + 2 + lVar8 * 2) == 0x61) &&
          (*(short *)(lVar2 + 4 + lVar8 * 2) == 0x6c)) &&
         ((*(short *)(lVar2 + 6 + lVar8 * 2) == 0x73 && (*(short *)(lVar2 + 8 + lVar8 * 2) == 0x65))
         )) {
        *(int *)(unaff_RSI + 0x30) = iVar1 + 5;
        FUN_00d46300();
        if (local_40 == 0) goto LAB_00e20f97;
        bVar4 = true;
        lVar9 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
        break;
      }
      if (DAT_027859d8 != 0) {
        FUN_00d50b00();
      }
      FUN_00e20940();
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
    }
    goto LAB_00e21076;
  case 0x6e:
    if (iVar1 + 3 <= *(int *)(unaff_RSI + 0x34)) {
      if (((*(short *)(lVar2 + 2 + lVar8 * 2) == 0x75) &&
          (*(short *)(lVar2 + 4 + lVar8 * 2) == 0x6c)) &&
         (*(short *)(lVar2 + (longlong)(iVar1 + 3) * 2) == 0x6c)) {
        *(int *)(unaff_RSI + 0x30) = iVar1 + 4;
        goto LAB_00e20df4;
      }
      if (DAT_027859e0 != 0) {
        FUN_00d50b00();
      }
      FUN_00e20940();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
    goto LAB_00e21076;
  case 0x74:
    if (iVar1 + 3 <= *(int *)(unaff_RSI + 0x34)) {
      if (((*(short *)(lVar2 + 2 + lVar8 * 2) == 0x72) &&
          (*(short *)(lVar2 + 4 + lVar8 * 2) == 0x75)) &&
         (*(short *)(lVar2 + 6 + lVar8 * 2) == 0x65)) {
        *(int *)(unaff_RSI + 0x30) = iVar1 + 4;
        FUN_00d46300();
        if (local_40 == 0) goto LAB_00e20f97;
        bVar4 = true;
        lVar9 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
        break;
      }
      if (DAT_027859d0 != 0) {
        FUN_00d50b00();
      }
      FUN_00e20940();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
LAB_00e21076:
    bVar4 = false;
    lVar9 = 0;
    lVar3 = *(longlong *)(unaff_RSI + 0x10);
    lVar5 = DAT_027859e8;
    goto joined_r0x00e21081;
  case 0x7b:
    FUN_00e21c70();
    if (local_40 == 0) goto LAB_00e20f97;
    bVar4 = true;
    lVar9 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
  }
  lVar3 = *(longlong *)(unaff_RSI + 0x10);
  lVar5 = DAT_027859e8;
joined_r0x00e21081:
  DAT_027859e8 = lVar5;
  if (lVar3 == 0) {
    if (lVar9 == 0) {
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      FUN_00e20940();
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      *(undefined1 *)(unaff_RDI + 1) = 0;
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (!bVar4) {
        FUN_00d50b00();
      }
    }
    *unaff_RDI = lVar9;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    if ((bVar4) && (lVar9 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @00df1bf0 — 899 bytes
// str: ""GNFileType""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00df1d95) */
/* WARNING: Removing unreachable block (ram,0x00df1d9e) */
/* WARNING: Removing unreachable block (ram,0x00df1d12) */
/* WARNING: Removing unreachable block (ram,0x00df1d1b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_00df1bf0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong **pplVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar9;
  longlong lVar10;
  longlong *local_58;
  
  lVar7 = *param_2;
  if (lVar7 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar7 = *unaff_RSI;
    if ((char)unaff_RSI[1] != '\0') {
      *unaff_RDI = lVar7;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      *(undefined1 *)(unaff_RSI + 1) = 0;
      return unaff_RDI;
    }
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    if (0 < *(int *)(lVar7 + 0xc)) {
      lVar10 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(lVar7 + 0x10) + lVar10 * 8);
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        local_58 = plVar1;
        if ((DAT_027782e0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
          _DAT_026d19f8 = FUN_00d4fe50();
          DAT_026d19e0 = "GNFileType";
          _DAT_026d19e8 = 0x48;
          _DAT_026d19f0 = FUN_00042280;
          _DAT_026d1a00 = 0;
          uRam00000000026d1a08 = 0;
          _DAT_026d1a10 = 0;
          uRam00000000026d1a18 = 0;
          _DAT_026d1a20 = 0;
          uRam00000000026d1a28 = 0;
          _DAT_026d1a30 = 0;
          uRam00000000026d1a38 = 0;
          _DAT_026d1a40 = 0;
          uRam00000000026d1a48 = 0;
          _DAT_026d1a50 = 0;
          uRam00000000026d1a58 = 0;
          _DAT_026d1a60 = 0;
          uRam00000000026d1a68 = 0;
          _DAT_026d1a70 = 0;
          uRam00000000026d1a78 = 0;
          _DAT_026d1a80 = 0;
          uRam00000000026d1a88 = 0;
          _DAT_026d1a90 = 0;
          uRam00000000026d1a98 = 0;
          _DAT_026d1aa0 = 0;
          ___cxa_guard_release();
        }
        pplVar8 = (longlong **)&DAT_02802688;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x360))();
          cVar5 = FUN_00e85ea0();
          pplVar8 = &local_58;
          if (cVar5 == '\0') {
            pplVar8 = (longlong **)&DAT_02802688;
          }
        }
        plVar1 = local_58;
        if (*pplVar8 == (longlong *)0x0) {
          if (local_58 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          cVar5 = FUN_00d8f250();
          if (cVar5 != '\0') {
            FUN_00d8f1a0();
            if (plVar1 == (longlong *)0x0) {
              return unaff_RDI;
            }
            FUN_00d50b20();
            bVar4 = false;
            goto LAB_00df1e30;
          }
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b20();
            goto LAB_00df1e25;
          }
          bVar3 = true;
        }
        else {
          lVar7 = local_58[5];
          if (lVar7 != 0) {
            FUN_00d50b00();
          }
          bVar4 = true;
          if (0 < *(int *)(lVar7 + 0xc)) {
            lVar9 = 0;
            do {
              lVar2 = *(longlong *)(*(longlong *)(lVar7 + 0x10) + lVar9 * 8);
              if (lVar2 != 0) {
                FUN_00d50b00();
              }
              cVar5 = FUN_00d8f250();
              if (cVar5 != '\0') {
                FUN_00d8f1a0();
                if (lVar2 != 0) {
                  FUN_00d50b20();
                }
                bVar4 = false;
                break;
              }
              if (lVar2 != 0) {
                FUN_00d50b20();
              }
              lVar9 = lVar9 + 1;
            } while (lVar9 < *(int *)(lVar7 + 0xc));
          }
          if (lVar7 != 0) {
            FUN_00d50b20();
          }
          if (bVar4) {
LAB_00df1e25:
            bVar4 = true;
            bVar3 = true;
          }
          else {
            bVar4 = false;
            bVar3 = false;
          }
          if (plVar1 != (longlong *)0x0) {
LAB_00df1e30:
            bVar3 = bVar4;
            FUN_00d50b20();
          }
        }
        if (!bVar3) {
          return unaff_RDI;
        }
        lVar10 = lVar10 + 1;
        lVar7 = *param_2;
      } while (lVar10 < *(int *)(lVar7 + 0xc));
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar7 = *unaff_RSI;
    if ((char)unaff_RSI[1] != '\0') {
      *unaff_RDI = lVar7;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      *(undefined1 *)(unaff_RSI + 1) = 0;
      return unaff_RDI;
    }
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
  }
  *unaff_RDI = lVar7;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}




// ============================================================
// @00e1d530 — 775 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00e1d5a8) */
/* WARNING: Removing unreachable block (ram,0x00e1d5b4) */

undefined8 FUN_00e1d530(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *unaff_RDI;
  longlong *local_98;
  char local_90;
  
  if (*unaff_RDI == 0) {
    uVar3 = 0;
  }
  else {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_024a9998)();
    uVar3 = _objc_autorelease();
    FUN_00df0520();
    if ((local_90 == '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    lVar1 = DAT_02764110;
    if (DAT_02764110 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*local_98 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      (*(code *)PTR__objc_msgSend_024a9998)(param_1,&cf_public_aifc_audio);
      (*(code *)PTR__objc_msgSend_024a9998)(param_1,&cf_public_aiff_audio);
    }
    lVar1 = DAT_027640d0;
    if (DAT_027640d0 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*local_98 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      (*(code *)PTR__objc_msgSend_024a9998)(param_1,&cf_com_microsoft_waveform_audio);
    }
    lVar1 = DAT_02764158;
    if (DAT_02764158 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*local_98 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      (*(code *)PTR__objc_msgSend_024a9998)(param_1,&cf_public_mp3);
      (*(code *)PTR__objc_msgSend_024a9998)(param_1,&cf_public_mpeg_4_audio);
      (*(code *)PTR__objc_msgSend_024a9998)(param_1,&cf_com_apple_coreaudio_format);
    }
    lVar1 = DAT_027641b8;
    if (DAT_027641b8 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*local_98 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      (*(code *)PTR__objc_msgSend_024a9998)(param_1,&cf_com_digidesign_sd2_audio);
    }
    lVar1 = DAT_027641e0;
    if (DAT_027641e0 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*local_98 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      (*(code *)PTR__objc_msgSend_024a9998)(param_1,&cf_public_mp3);
    }
    lVar1 = DAT_02764208;
    if (DAT_02764208 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*local_98 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      (*(code *)PTR__objc_msgSend_024a9998)(param_1,&cf_public_ulaw_audio);
    }
    FUN_00d50b20();
  }
  return uVar3;
}




// ============================================================
// @00e1c940 — 571 bytes
// str: ""com.apple.nserror.%@.%I""
// ============================================================

void FUN_00e1c940(void)

{
  undefined *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *unaff_RDI;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  undefined8 *local_68;
  undefined4 local_60;
  longlong local_58;
  char local_50;
  undefined4 local_48;
  longlong local_40;
  char local_38;
  
  _objc_alloc();
  puVar1 = PTR__objc_msgSend_024a9998;
  (*(code *)PTR__objc_msgSend_024a9998)();
  (*(code *)puVar1)();
  FUN_00e1ccf0();
  puVar3 = local_68;
  if (((char)local_60 == '\0') && (local_68 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  (*(code *)PTR__objc_msgSend_024a9998)();
  FUN_00e1ccf0();
  puVar4 = local_68;
  if (((char)local_60 == '\0') && (local_68 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  local_48 = (*(code *)PTR__objc_msgSend_024a9998)();
  local_60 = 2;
  local_68 = &DAT_024c5048;
  local_50 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_00d50b00();
  }
  local_58 = (longlong)puVar3;
  local_50 = '\x01';
  local_68 = (undefined8 *)&DAT_025df2a0;
  FUN_00d8cb40();
  local_40 = local_78;
  local_38 = 0;
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  local_38 = '\x01';
  local_98 = (longlong)puVar4;
  local_90 = '\0';
  FUN_00e97060(DAT_025908a0,&local_98);
  lVar2 = local_88;
  if (local_80 == '\0') {
    if (((local_88 != 0) && (FUN_00d50b00(), local_80 != '\0')) && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_80 = '\0';
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  local_68 = &DAT_024c5048;
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  (*(code *)PTR__objc_release_024a99a0)();
  *unaff_RDI = lVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar3 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}



