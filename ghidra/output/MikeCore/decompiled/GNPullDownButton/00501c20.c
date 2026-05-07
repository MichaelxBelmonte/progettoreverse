// Function: FUN_00501c20
// Address: 00501c20
// Size: 514 bytes
// Class: GNPullDownButton
// String references:
//   "GNPullDownButton"


/* WARNING: Removing unreachable block (ram,0x00501d2c) */
/* WARNING: Removing unreachable block (ram,0x00501d35) */
/* WARNING: Removing unreachable block (ram,0x00501d40) */
/* WARNING: Removing unreachable block (ram,0x00501d49) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00501c20(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *unaff_RDI;
  longlong **pplVar5;
  longlong *local_40;
  char local_38;
  
  if (param_2 == 0) {
LAB_00501d63:
    uVar4 = 1;
  }
  else {
    FUN_0197b900();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00501c81;
      }
    }
    else if (local_40 != (longlong *)0x0) {
LAB_00501c81:
      pplVar5 = &local_40;
      (**(code **)(*unaff_RDI + 0x950))();
      plVar1 = local_40;
      if ((DAT_026f08a8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
      if (plVar1 == (longlong *)0x0) {
LAB_00501cca:
        pplVar5 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        if (cVar2 == '\0') goto LAB_00501cca;
      }
      plVar1 = *pplVar5;
      if (*(char *)(pplVar5 + 1) == '\0') {
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar5 + 1) = 0;
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_007f4c40();
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (plVar1 != (longlong *)0x0) goto LAB_00501d63;
    }
    uVar4 = 0;
  }
  return uVar4;
}


