// Function: FUN_007f5ec0
// Address: 007f5ec0
// Size: 643 bytes
// Class: GNPullDownButton
// String references:
//   "GNPullDownButton"


/* WARNING: Removing unreachable block (ram,0x007f5f0f) */
/* WARNING: Removing unreachable block (ram,0x007f5f18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_007f5ec0(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  longlong *plVar4;
  longlong *unaff_RDI;
  longlong *plVar5;
  undefined4 uVar6;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  uVar6 = FUN_007f4cf0();
  (**(code **)(&UNK_00001590 + *local_48))(uVar6,param_2);
  if (local_40[0] != '\0') {
    FUN_00d50b20();
  }
  if ((char)param_2 != '\0') {
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    plVar5 = unaff_RDI;
    do {
      (**(code **)(*plVar5 + 0x370))();
      if (local_48 == plVar5) {
        if (((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) && (local_40[0] != '\0')) {
          local_38[0] = '\x01';
          goto LAB_007f5fb7;
        }
      }
      else {
        plVar5 = local_48;
        if (local_40[0] == '\0') {
          if (local_38[0] == '\0') {
            pcVar3 = local_38;
          }
          else {
            FUN_00d50b20();
            pcVar3 = local_38;
          }
        }
        else {
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
          local_38[0] = '\x01';
LAB_007f5fb7:
          local_38[0] = '\x01';
          pcVar3 = local_40;
        }
        *pcVar3 = '\0';
      }
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((DAT_026f08a8 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
        _DAT_026f07f8 = FUN_000f5df0();
        _DAT_026f07e0 = "GNPullDownButton";
        _DAT_026f07e8 = 600;
        _DAT_026f07f0 = FUN_001e7840;
        _DAT_026f0800 = 0;
        uRam00000000026f0808 = 0;
        _DAT_026f0810 = 0;
        uRam00000000026f0818 = 0;
        _DAT_026f0820 = 0;
        uRam00000000026f0828 = 0;
        _DAT_026f0830 = 0;
        uRam00000000026f0838 = 0;
        _DAT_026f0840 = 0;
        uRam00000000026f0848 = 0;
        _DAT_026f0850 = 0;
        uRam00000000026f0858 = 0;
        _DAT_026f0860 = 0;
        uRam00000000026f0868 = 0;
        _DAT_026f0870 = 0;
        uRam00000000026f0878 = 0;
        _DAT_026f0880 = 0;
        uRam00000000026f0888 = 0;
        _DAT_026f0890 = 0;
        uRam00000000026f0898 = 0;
        _DAT_026f08a0 = 0;
        ___cxa_guard_release();
      }
      plVar4 = &DAT_02802688;
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x360))();
        cVar1 = FUN_00e85ea0();
        plVar4 = (longlong *)&stack0xffffffffffffffa8;
        if (cVar1 == '\0') {
          plVar4 = &DAT_02802688;
        }
      }
      if (*plVar4 != 0) {
        if ((local_38[0] == '\0') && (plVar5 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        if (unaff_RDI == (longlong *)0x0) goto LAB_007f6125;
        goto LAB_007f6120;
      }
    } while (plVar5 != (longlong *)0x0);
    plVar5 = (longlong *)0x0;
    if (unaff_RDI != (longlong *)0x0) {
LAB_007f6120:
      FUN_00d50b20();
    }
LAB_007f6125:
    FUN_01d7c320();
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  return 1;
}


