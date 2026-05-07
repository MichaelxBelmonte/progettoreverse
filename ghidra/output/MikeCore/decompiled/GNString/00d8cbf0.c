// Function: FUN_00d8cbf0
// Address: 00d8cbf0
// Size: 593 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00d8cc9c) */
/* WARNING: Removing unreachable block (ram,0x00d8cca5) */
/* WARNING: Removing unreachable block (ram,0x00d8ce0e) */
/* WARNING: Removing unreachable block (ram,0x00d8ce17) */
/* WARNING: Removing unreachable block (ram,0x00d8cd93) */
/* WARNING: Removing unreachable block (ram,0x00d8cd9c) */
/* WARNING: Removing unreachable block (ram,0x00d8cd33) */
/* WARNING: Removing unreachable block (ram,0x00d8cd3c) */

void FUN_00d8cbf0(undefined8 param_1,int param_2)

{
  int iVar1;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 *local_38;
  char local_30;
  
  iVar1 = *(int *)(unaff_RSI + 0x20);
  if (iVar1 == -1) {
    if (*(longlong *)(unaff_RSI + 0x10) != 0) {
      iVar1 = FUN_00e7dde0();
      goto joined_r0x00d8cc2d;
    }
  }
  else {
joined_r0x00d8cc2d:
    if (iVar1 != 0) {
      if (param_2 == 0) {
        if (*(longlong *)(unaff_RSI + 0x10) != 0) {
          FUN_00e7dde0();
          FUN_00c8e2b0();
          if ((local_30 == '\0') && (local_38 != (undefined8 *)0x0)) {
            FUN_00d50b00();
          }
          FUN_00c92170();
          goto LAB_00d8ce29;
        }
        goto LAB_00d8cd53;
      }
      if (param_2 == 5) {
        if (*(int *)(unaff_RSI + 0x20) == -1) {
          FUN_00d931c0();
        }
        FUN_00c8e2b0();
        if ((local_30 == '\0') && (local_38 != (undefined8 *)0x0)) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        goto LAB_00d8ce29;
      }
      if (param_2 == 6) {
        if (*(int *)(unaff_RSI + 0x20) == -1) {
          if (*(longlong *)(unaff_RSI + 0x10) != 0) {
            FUN_00e7dde0();
            FUN_00c8e2b0();
            if ((local_30 == '\0') && (local_38 != (undefined8 *)0x0)) {
              FUN_00d50b00();
            }
            FUN_00c92170();
            goto LAB_00d8ce29;
          }
          goto LAB_00d8cd53;
        }
      }
      else {
LAB_00d8cd53:
        if (*(int *)(unaff_RSI + 0x20) == -1) {
          FUN_00d931c0();
        }
      }
      FUN_00c8e690();
      if ((local_30 == '\0') && (local_38 != (undefined8 *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00da41a0(*(undefined4 *)(unaff_RSI + 0x20),param_2);
      FUN_00c8e340();
      goto LAB_00d8ce29;
    }
  }
  local_38 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *local_38 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
LAB_00d8ce29:
  *unaff_RDI = local_38;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


