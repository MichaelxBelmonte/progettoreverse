// Function: FUN_003acd80
// Address: 003acd80
// Size: 646 bytes
// Class: MDMetaWindowController


/* WARNING: Removing unreachable block (ram,0x003acf87) */
/* WARNING: Removing unreachable block (ram,0x003acffc) */

void FUN_003acd80(void)

{
  longlong lVar1;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_30;
  char local_28;
  
  if (*unaff_RSI != 0) {
    if (*(longlong *)(*unaff_RSI + 0x308) == 0) {
      if (*(longlong *)(unaff_RDI + 0xa0) != 0) {
        FUN_01e40eb0();
        if ((local_28 != '\0') && (local_30 != 0)) {
          FUN_00d50b20();
        }
        if (local_30 != 0) {
          (**(code **)(**(longlong **)(unaff_RDI + 0xa0) + 0x478))();
        }
      }
      if (*(longlong *)(unaff_RDI + 0x98) != 0) {
        FUN_01e40eb0();
        if ((local_28 != '\0') && (local_30 != 0)) {
          FUN_00d50b20();
        }
        if (local_30 == 0) {
          FUN_01e53c20();
          lVar1 = *(longlong *)(unaff_RDI + 0x98);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          (**(code **)(MACH_HEADER._0_8_ + 0x450))();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
      }
    }
    else {
      if (*(longlong *)(unaff_RDI + 0xa0) != 0) {
        FUN_01e40eb0();
        if ((local_28 != '\0') && (local_30 != 0)) {
          FUN_00d50b20();
        }
        if (local_30 == 0) {
          FUN_01e53c20();
          lVar1 = *(longlong *)(unaff_RDI + 0xa0);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          (**(code **)(MACH_HEADER._0_8_ + 0x450))();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        if (*(longlong *)(unaff_RDI + 0xa0) != 0) {
          FUN_01d77960();
          lVar1 = *(longlong *)(unaff_RDI + 0xa0);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          FUN_01d62b10();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if ((local_28 != '\0') && (local_30 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      if (*(longlong *)(unaff_RDI + 0x98) != 0) {
        FUN_01e40eb0();
        if ((local_28 != '\0') && (local_30 != 0)) {
          FUN_00d50b20();
        }
        if (local_30 != 0) {
          (**(code **)(**(longlong **)(unaff_RDI + 0x98) + 0x478))();
        }
      }
    }
  }
  return;
}


