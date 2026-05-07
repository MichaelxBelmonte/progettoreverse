// Function: FUN_002d9d70
// Address: 002d9d70
// Size: 1077 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002d9d70(void)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  char *pcVar4;
  longlong *plVar5;
  longlong *unaff_RDI;
  longlong *plVar6;
  char local_60;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_58 = '\0';
  plVar6 = unaff_RDI;
  do {
    (**(code **)(*plVar6 + 0x370))();
    plVar5 = local_48;
    if (local_48 == plVar6) {
      if (((local_58 == '\0') && (local_48 != (longlong *)0x0)) && (local_40[0] != '\0')) {
        local_58 = '\x01';
        goto LAB_002d9e07;
      }
    }
    else {
      if (local_40[0] == '\0') {
        if (local_58 == '\0') {
          pcVar4 = &local_58;
        }
        else {
          FUN_00d50b20();
          pcVar4 = &local_58;
        }
      }
      else {
        if (local_58 != '\0') {
          FUN_00d50b20();
        }
        local_58 = '\x01';
        plVar6 = plVar5;
LAB_002d9e07:
        local_58 = '\x01';
        pcVar4 = local_40;
        plVar5 = plVar6;
      }
      *pcVar4 = '\0';
      plVar6 = plVar5;
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((DAT_026fddb0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      _DAT_026e0ab8 = FUN_00015ff0();
      _DAT_026e0aa0 = "MDMetaWindowController";
      _DAT_026e0aa8 = 0x198;
      _DAT_026e0ab0 = FUN_0006dea0;
      _DAT_026e0ac0 = 0;
      uRam00000000026e0ac8 = 0;
      _DAT_026e0ad0 = 0;
      _DAT_026e0b48 = 0;
      uRam00000000026e0b50 = 0;
      _DAT_026e0b58 = 0;
      DAT_026e0b5a = 1;
      _DAT_026e0ad8 = 0;
      uRam00000000026e0ae0 = 0;
      _DAT_026e0ae8 = 0;
      uRam00000000026e0af0 = 0;
      _DAT_026e0af8 = 0;
      uRam00000000026e0b00 = 0;
      _DAT_026e0b08 = 0;
      uRam00000000026e0b10 = 0;
      _DAT_026e0b18 = 0;
      uRam00000000026e0b20 = 0;
      _DAT_026e0b28 = 0;
      uRam00000000026e0b30 = 0;
      _DAT_026e0b38 = 0;
      uRam00000000026e0b40 = 0;
      DAT_026e0b63 = 0;
      _DAT_026e0b5b = 0;
      ___cxa_guard_release();
    }
    plVar5 = &DAT_02802688;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar5 = (longlong *)&stack0xffffffffffffff98;
      if (cVar1 == '\0') {
        plVar5 = &DAT_02802688;
      }
    }
    if (*plVar5 != 0) {
      if ((local_58 == '\0') && (plVar6 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      plVar5 = plVar6;
      if (unaff_RDI == (longlong *)0x0) goto LAB_002d9f94;
      goto LAB_002d9f8c;
    }
    if (plVar6 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
      if (unaff_RDI != (longlong *)0x0) {
LAB_002d9f8c:
        FUN_00d50b20();
      }
LAB_002d9f94:
      if (plVar5 != (longlong *)0x0) {
        FUN_00643590();
        iVar3 = *(int *)((longlong)local_48 + 0xc);
        if (local_40[0] != '\0') {
          FUN_00d50b20();
        }
        if (0 < iVar3) {
          FUN_00643590();
          FUN_00d23310();
          plVar5 = local_48;
          local_58 = local_40[0];
          pcVar4 = &local_58;
          if (local_40[0] != '\0') {
            pcVar4 = local_40;
          }
          *pcVar4 = '\0';
          if ((local_40[0] != '\0') && (plVar5 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          cVar1 = FUN_00212c70();
          if ((local_58 != '\0') && (plVar5 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (plVar6 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar1 == '\0') {
            FUN_00643590();
            FUN_00d23310();
            pcVar4 = local_40;
            if (local_40[0] == '\0') {
              pcVar4 = local_38;
            }
            local_38[0] = local_40[0];
            *pcVar4 = '\0';
            if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_0021a630();
            uVar2 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                                *plVar6))();
            *(undefined1 *)(unaff_RDI + 0x16) = uVar2;
            if ((local_60 != '\0') && (plVar6 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38[0] != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            FUN_00643590();
            FUN_00d23310();
            pcVar4 = local_40;
            if (local_40[0] == '\0') {
              pcVar4 = local_38;
            }
            local_38[0] = local_40[0];
            *pcVar4 = '\0';
            if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_0021cc50();
            uVar2 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                                *plVar6))();
            *(undefined1 *)(unaff_RDI + 0x16) = uVar2;
            if ((local_60 != '\0') && (plVar6 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38[0] != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
              FUN_00d50b20();
            }
          }
        }
        FUN_00d50b20();
      }
      return;
    }
  } while( true );
}


