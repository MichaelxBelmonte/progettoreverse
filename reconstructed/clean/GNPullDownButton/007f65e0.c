// Function: FUN_007f65e0
// Address: 007f65e0
// Size: 643 bytes
// Class: GNPullDownButton
// String references:
//   "GNPullDownButton"

uint64_t FUN_007f65e0(uint64_t param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int64_t *plVar4;
  int64_t *this_ptr;
  int64_t *plVar5;
  uint32_t uVar6;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (param_2 != 0) {
    uVar6 = FUN_007f4cf0();
    (**(code **)("/System/Library/Frameworks/AppKit.framework/Versions/C/AppKit" + *local_48 + 0x18)
    )(uVar6,1);
    if (local_40[0] != '\0') {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    plVar5 = this_ptr;
    do {
      (**(code **)(*plVar5 + 0x370))();
      if (local_48 == plVar5) {
        if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
          local_38[0] = '\x01';
          goto LAB_007f66d7;
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
LAB_007f66d7:
          local_38[0] = '\x01';
          pcVar3 = local_40;
        }
        *pcVar3 = '\0';
      }
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((g_026f08a8 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
        g_026f07f8 = FUN_000f5df0();
        g_026f07e0 = "GNPullDownButton";
        g_026f07e8 = 600;
        g_026f07f0 = FUN_001e7840;
        g_026f0800 = 0;
        ram_00000000026f0808 = 0;
        g_026f0810 = 0;
        ram_00000000026f0818 = 0;
        g_026f0820 = 0;
        ram_00000000026f0828 = 0;
        g_026f0830 = 0;
        ram_00000000026f0838 = 0;
        g_026f0840 = 0;
        ram_00000000026f0848 = 0;
        g_026f0850 = 0;
        ram_00000000026f0858 = 0;
        g_026f0860 = 0;
        ram_00000000026f0868 = 0;
        g_026f0870 = 0;
        ram_00000000026f0878 = 0;
        g_026f0880 = 0;
        ram_00000000026f0888 = 0;
        g_026f0890 = 0;
        ram_00000000026f0898 = 0;
        g_026f08a0 = 0;
        ___cxa_guard_release();
      }
      plVar4 = &g_02802688;
      if (plVar5 != (int64_t *)0x0) {
        (**(code **)(*plVar5 + 0x360))();
        cVar1 = FUN_00e85ea0();
        plVar4 = (int64_t *)&stack0xffffffffffffffa8;
        if (cVar1 == '\0') {
          plVar4 = &g_02802688;
        }
      }
      if (*plVar4 != 0) {
        if ((local_38[0] == '\0') && (plVar5 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        if (this_ptr == (int64_t *)0x0) goto LAB_007f6845;
        goto LAB_007f6840;
      }
    } while (plVar5 != (int64_t *)0x0);
    plVar5 = (int64_t *)0x0;
    if (this_ptr != (int64_t *)0x0) {
LAB_007f6840:
      FUN_00d50b20();
    }
LAB_007f6845:
    FUN_01d7c320();
    if (plVar5 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  return 1;
}

