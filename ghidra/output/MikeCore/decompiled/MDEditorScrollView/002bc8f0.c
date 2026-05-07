// Function: FUN_002bc8f0
// Address: 002bc8f0
// Size: 967 bytes
// Class: MDEditorScrollView
// String references:
//   "MDEditorScrollView"


/* WARNING: Removing unreachable block (ram,0x002bcc07) */
/* WARNING: Removing unreachable block (ram,0x002bcc10) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_002bc8f0(undefined8 param_1,char param_2)

{
  longlong lVar1;
  longlong ******pppppplVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  longlong *plVar8;
  longlong *******ppppppplVar9;
  longlong *******ppppppplVar10;
  ulonglong uVar11;
  longlong *******unaff_RDI;
  longlong *******ppppppplVar12;
  longlong *******local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (unaff_RDI != (longlong *******)0x0) {
    FUN_00d50b00();
  }
  local_38[0] = '\0';
  ppppppplVar12 = unaff_RDI;
  do {
    (*(code *)(*ppppppplVar12)[0x6e])();
    ppppppplVar10 = local_48;
    if (local_48 == ppppppplVar12) {
      if (((local_38[0] == '\0') && (local_48 != (longlong *******)0x0)) && (local_40[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_002bc987;
      }
    }
    else {
      if (local_40[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar7 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar7 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
        ppppppplVar12 = ppppppplVar10;
LAB_002bc987:
        local_38[0] = '\x01';
        pcVar7 = local_40;
        ppppppplVar10 = ppppppplVar12;
      }
      *pcVar7 = '\0';
      ppppppplVar12 = ppppppplVar10;
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *******)0x0)) {
      FUN_00d50b20();
    }
    if ((DAT_02709e70 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      _DAT_026f8cd8 = FUN_00074a70();
      _DAT_026f8cc0 = "MDEditorScrollView";
      _DAT_026f8cc8 = 0x260;
      _DAT_026f8cd0 = FUN_000749b0;
      _DAT_026f8ce0 = 0;
      uRam00000000026f8ce8 = 0;
      _DAT_026f8cf0 = 0;
      _DAT_026f8d68 = 0;
      uRam00000000026f8d70 = 0;
      _DAT_026f8d78 = 0;
      DAT_026f8d7a = 1;
      _DAT_026f8cf8 = 0;
      uRam00000000026f8d00 = 0;
      _DAT_026f8d08 = 0;
      uRam00000000026f8d10 = 0;
      _DAT_026f8d18 = 0;
      uRam00000000026f8d20 = 0;
      _DAT_026f8d28 = 0;
      uRam00000000026f8d30 = 0;
      _DAT_026f8d38 = 0;
      uRam00000000026f8d40 = 0;
      _DAT_026f8d48 = 0;
      uRam00000000026f8d50 = 0;
      _DAT_026f8d58 = 0;
      uRam00000000026f8d60 = 0;
      DAT_026f8d83 = 0;
      _DAT_026f8d7b = 0;
      ___cxa_guard_release();
    }
    plVar8 = &DAT_02802688;
    if (ppppppplVar12 != (longlong *******)0x0) {
      (*(code *)(*ppppppplVar12)[0x6c])();
      cVar3 = FUN_00e85ea0();
      plVar8 = (longlong *)&stack0xffffffffffffffb0;
      if (cVar3 == '\0') {
        plVar8 = &DAT_02802688;
      }
    }
    lVar1 = *plVar8;
    if (lVar1 != 0) {
      if ((local_38[0] == '\0') && (ppppppplVar12 != (longlong *******)0x0)) {
        FUN_00d50b00();
      }
      goto joined_r0x002bcaff;
    }
    if (ppppppplVar12 == (longlong *******)0x0) {
      ppppppplVar12 = (longlong *******)0x0;
joined_r0x002bcaff:
      if (unaff_RDI != (longlong *******)0x0) {
        FUN_00d50b20();
      }
      if (ppppppplVar12 == (longlong *******)0x0) {
        uVar11 = 0;
      }
      else {
        ppppppplVar10 = (longlong *******)&local_48;
        FUN_01d98320();
        ppppppplVar9 = local_48;
        FUN_00275460();
        if (ppppppplVar9 == (longlong *******)0x0) {
          ppppppplVar10 = (longlong *******)&DAT_02802688;
        }
        else {
          (*(code *)(*ppppppplVar9)[0x6c])();
          cVar3 = FUN_00e85ea0();
          if (cVar3 == '\0') {
            ppppppplVar10 = (longlong *******)&DAT_02802688;
          }
        }
        pppppplVar2 = *ppppppplVar10;
        cVar3 = *(char *)(ppppppplVar10 + 1);
        ppppppplVar9 = (longlong *******)&stack0xffffffffffffffb0;
        if (cVar3 != '\0') {
          ppppppplVar9 = ppppppplVar10 + 1;
        }
        *(undefined1 *)ppppppplVar9 = 0;
        if ((local_40[0] != '\0') && (local_48 != (longlong *******)0x0)) {
          FUN_00d50b20();
        }
        ppppppplVar10 = ppppppplVar10 + 1;
        if (pppppplVar2 != (longlong ******)0x0) {
          if (param_2 != '\0') {
            iVar5 = FUN_01b18580();
            iVar6 = FUN_01caea40();
            iVar4 = 0;
            if (iVar5 != iVar6) {
              iVar4 = iVar6;
            }
            if (iVar5 != iVar4) {
              FUN_00502230(iVar4,iVar4);
            }
            (*(code *)(*unaff_RDI)[0x123])();
          }
          FUN_01caeae0();
          pcVar7 = local_38;
          if (local_40[0] != '\0') {
            pcVar7 = local_40;
          }
          local_38[0] = local_40[0];
          *pcVar7 = '\0';
          if ((local_40[0] != '\0') && (local_48 != (longlong *******)0x0)) {
            FUN_00d50b20();
          }
          if (local_48 != (longlong *******)0x0) {
            FUN_01caea40();
            FUN_01b18580();
            FUN_01d66ab0();
            if (local_38[0] != '\0') {
              FUN_00d50b20();
            }
          }
          ppppppplVar10 = local_48;
          if (cVar3 != '\0') {
            FUN_00d50b20();
          }
        }
        uVar11 = CONCAT71((int7)((ulonglong)ppppppplVar10 >> 8),pppppplVar2 != (longlong ******)0x0)
        ;
      }
      if ((lVar1 != 0) && (ppppppplVar12 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
      return uVar11 & 0xffffffff;
    }
  } while( true );
}


