// Function: FUN_00d8cf90
// Address: 00d8cf90
// Size: 663 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00d8d154) */
/* WARNING: Removing unreachable block (ram,0x00d8d15d) */
/* WARNING: Removing unreachable block (ram,0x00d8d1d7) */
/* WARNING: Removing unreachable block (ram,0x00d8d1e0) */
/* WARNING: Removing unreachable block (ram,0x00d8d03f) */
/* WARNING: Removing unreachable block (ram,0x00d8d048) */
/* WARNING: Removing unreachable block (ram,0x00d8d08a) */
/* WARNING: Removing unreachable block (ram,0x00d8d093) */
/* WARNING: Removing unreachable block (ram,0x00d8d0f4) */
/* WARNING: Removing unreachable block (ram,0x00d8d0fd) */

void FUN_00d8cf90(undefined8 param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong local_40;
  char local_38;
  
  iVar2 = *(int *)(unaff_RSI + 0x20);
  if (iVar2 == -1) {
    if (*(longlong *)(unaff_RSI + 0x10) != 0) {
      iVar2 = FUN_00e7dde0();
      goto joined_r0x00d8cfcf;
    }
  }
  else {
joined_r0x00d8cfcf:
    if (iVar2 != 0) {
      if (param_2 == 0) {
        if (*(longlong *)(unaff_RSI + 0x10) != 0) {
          FUN_00e7dde0();
          FUN_00c8e2b0();
          if ((local_38 == '\0') && (local_40 != 0)) {
            FUN_00d50b00();
          }
          FUN_00c92170();
          goto LAB_00d8d20d;
        }
        goto LAB_00d8d114;
      }
      if (param_2 == 5) {
        iVar2 = *(int *)(unaff_RSI + 0x20);
        if (iVar2 == -1) {
          FUN_00d931c0();
          iVar2 = *(int *)(unaff_RSI + 0x20);
        }
        FUN_00c8e690();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        lVar1 = *(longlong *)(local_40 + 0x10);
        FUN_00e7dbc0();
        *(undefined2 *)(lVar1 + (longlong)iVar2 * 2) = 0;
        goto LAB_00d8d20d;
      }
      if (param_2 == 6) {
        if (*(int *)(unaff_RSI + 0x20) == -1) {
          if (*(longlong *)(unaff_RSI + 0x10) != 0) {
            FUN_00e7dde0();
            FUN_00c8e2b0();
            if ((local_38 == '\0') && (local_40 != 0)) {
              FUN_00d50b00();
            }
            FUN_00c92170();
            goto LAB_00d8d20d;
          }
          goto LAB_00d8d114;
        }
      }
      else {
LAB_00d8d114:
        if (*(int *)(unaff_RSI + 0x20) == -1) {
          FUN_00d931c0();
        }
      }
      FUN_00c8e690();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00da41a0(*(undefined4 *)(unaff_RSI + 0x20),param_2);
      FUN_00c8e340();
      goto LAB_00d8d20d;
    }
  }
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  ___bzero();
LAB_00d8d20d:
  *unaff_RDI = local_40;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


